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
//template<class T>
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//template<class T>
//vector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {
//
//	const int V = (int)edges.size();
//	const T inf = numeric_limits<T>::max() / 2;
//	vector<T> cost(V, inf);
//	cost[st] = 0;
//
//	vector<T> prev(V, inf);
//
//	priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> pq;
//	pq.emplace(st, cost[st]);
//
//	while (!pq.empty()) {
//
//		Edge<T> now(pq.top().to, pq.top().cost);
//		pq.pop();
//
//		if (cost[now.to] < now.cost) continue;
//		for (const Edge<T> &e : edges[now.to]) {
//			T tmp_cost = now.cost + e.cost;
//			if (cost[e.to] > tmp_cost) {
//				cost[e.to] = tmp_cost;
//				pq.emplace(e.to, cost[e.to]);
//				prev[e.to] = now.to;
//			}
//		}
//	}
//
//	return prev;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<vector<Edge<int>>> edges(N);
//	map<pair<int, int>, int> id;
//	for (int i = 0; i < N - 1; i++) {
//		int u, v;
//		cin >> u >> v;
//		u--, v--;
//		edges[u].emplace_back(v, 1);
//		edges[v].emplace_back(u, 1);
//		id[minmax(u, v)] = i;
//	}
//
//	int M;
//	cin >> M;
//	vector<int> cond(N - 1);
//	for (int i = 0; i < M; i++) {
//		int u, v;
//		cin >> u >> v;
//		u--, v--;
//
//		auto prev = Dijkstra(edges, u);
//
//		while (prev[v] < N) {
//			cond[id[minmax(v, prev[v])]] += (1 << i);
//			v = prev[v];
//		}
//
//	}
//
//	vector<lint> dp(1 << M);
//	dp[0] = 1;
//	for (int i = 0; i < N - 1; i++) {
//		for (int j = (1 << M) - 1; j >= 0; j--) {
//			dp[j | cond[i]] += dp[j];
//		}
//	}
//
//	cout << dp[(1 << M) - 1] << "\n";
//
//	return 0;
//}