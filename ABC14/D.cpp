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
//#include <intrin.h>
//unsigned long __builtin_clz(size_t value){
//	unsigned long leading_zero = 0;
//	if (_BitScanReverse(&leading_zero, value)) return 31 - leading_zero;
//	else return 32;
//}
//
//template<class T = lint>
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost = 1) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//template< typename G >
//struct DoublingLowestCommonAncestor {
//	const int LOG;
//	vector< int > dep;
//	const G &g;
//	vector< vector< int > > table;
//
//	DoublingLowestCommonAncestor(const G &g) : g(g), dep(g.size()), LOG(32 - __builtin_clz(g.size())) {
//		table.assign(LOG, vector< int >(g.size(), -1));
//	}
//
//	void dfs(int idx, int par, int d) {
//		table[0][idx] = par;
//		dep[idx] = d;
//		for (auto &to : g[idx]) {
//			if (to != par) dfs(to, idx, d + 1);
//		}
//	}
//
//	void build() {
//		dfs(0, -1, 0);
//		for (int k = 0; k + 1 < LOG; k++) {
//			for (int i = 0; i < table[k].size(); i++) {
//				if (table[k][i] == -1) table[k + 1][i] = -1;
//				else table[k + 1][i] = table[k][table[k][i]];
//			}
//		}
//	}
//
//	int query(int u, int v) {
//		if (dep[u] > dep[v]) swap(u, v);
//		for (int i = LOG - 1; i >= 0; i--) {
//			if (((dep[v] - dep[u]) >> i) & 1) v = table[i][v];
//		}
//		if (u == v) return u;
//		for (int i = LOG - 1; i >= 0; i--) {
//			if (table[i][u] != table[i][v]) {
//				u = table[i][u];
//				v = table[i][v];
//			}
//		}
//		return table[0][u];
//	}
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<vector<int>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		int u, v;
//		cin >> u >> v;
//		u--, v--;
//		edges[u].emplace_back(v);
//		edges[v].emplace_back(u);
//	}
//
//	DoublingLowestCommonAncestor<decltype(edges)> lca(edges);
//	lca.build();
//
//	int Q;
//	cin >> Q;
//
//	for (int i = 0; i < Q; i++) {
//		int x, y;
//		cin >> x >> y;
//		x--, y--;
//		cout << lca.dep[x] + lca.dep[y] - 2 * lca.dep[lca.query(x, y)] + 1 << endl;
//	}
//
//	return 0;
//}