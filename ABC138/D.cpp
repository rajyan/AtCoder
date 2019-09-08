//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << p.first << " " << p.second;
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << "[" << e << "] ";
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
//	Edge() {}
//	Edge(int to, T cost) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, Q;
//	cin >> N >> Q;
//
//	int u, v;
//	vector<vector<Edge<int>>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		cin >> u >> v;
//		u--, v--;
//		edges[u].emplace_back(v, 1);
//		edges[v].emplace_back(u, 1);
//	}
//
//	vector<int> ans(N + 1);
//	for (int i = 0; i < Q; i++) {
//		int p, q;
//		cin >> p >> q; 
//		p--;
//		ans[p] += q;
//	}
//
//	DMP(ans);
//
//	vector<int> visted(N);
//	auto dfs = [&](auto &&f, int now) -> void {
//		visted[now] = 1;
//		for (const auto &e : edges[now]) {
//			if (!visted[e.to]) {
//				ans[e.to] += ans[now];
//				f(f,e.to);
//			}
//		}
//	};
//
//	dfs(dfs, 0);
//
//	for (int i = 0; i < N; i++) {
//		cout << ans[i] << "\n";
//	}
//
//	return 0;
//}