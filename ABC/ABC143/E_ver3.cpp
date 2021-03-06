//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//#include <boost/heap/fibonacci_heap.hpp>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
//	return os;
//}
//
//template <class T>
//ostream &operator<<(ostream &os, const set<T> &st) {
//	for (const auto &e : st) os << e << " ";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
//	return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//template<class T = lint>
//struct Edge {
//	int to;
//	T cost;
//	int tank;
//	Edge() {}
//	Edge(int to, T cost, int tank = 0) : to(to), cost(cost), tank(tank) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M, L;
//	cin >> N >> M >> L;
//
//	vector<vector<Edge<int>>> edges(N);
//	for (int i = 0; i < M; i++) {
//		int u, v, len;
//		cin >> u >> v >> len;
//		u--, v--;
//		if (len > L) continue;
//		edges[u].emplace_back(v, len);
//		edges[v].emplace_back(u, len);
//	}
//
//	auto dijkstra = [&](int st) {
//		vector<pair<int, int>> dp(N, { -INF, 0 });
//		dp[st] = { 0, L };
//		using ppi = pair<pair<int, int>, int>;
//		boost::heap::fibonacci_heap<ppi> que;
//		vector<decltype(que)::handle_type> handles(N);
//		for (int v = 0; v < N; v++) handles[v] = que.emplace(dp[v], v);
//		while (!que.empty()) {
//			auto now = que.top();
//			que.pop();
//
//			for (const auto &e : edges[now.second]) {
//
//				auto tmp = now.first;
//				if (e.cost > tmp.second) {
//					tmp.first--;
//					tmp.second = L - e.cost;
//				}
//				else tmp.second -= e.cost;
//
//				if (tmp > dp[e.to]) {
//					dp[e.to] = tmp;
//					que.update(handles[e.to], ppi(tmp, e.to));
//				}
//
//			}
//		}
//		return dp;
//	};
//
//	vector<vector<pair<int, int>>> memo(N);
//	for (int i = 0; i < N; i++) memo[i] = dijkstra(i);
//
//	int Q;
//	cin >> Q;
//	for (int i = 0; i < Q; i++) {
//		int s, t;
//		cin >> s >> t;
//		s--, t--;
//		auto tmp = memo[s][t].first;
//		if (tmp != -INF) cout << -tmp << "\n";
//		else cout << -1 << "\n";
//	}
//
//	return 0;
//}
