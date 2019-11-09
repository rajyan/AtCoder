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
//struct LowestCommonAncestor {
//	int n, h;
//	vector< vector<int> > G, par;
//	vector<int> dep;
//	LowestCommonAncestor() {}
//	LowestCommonAncestor(int n) :n(n), G(n), dep(n) {
//		h = 1;
//		while ((1 << h) <= n) h++;
//		par.assign(h, vector<int>(n, -1));
//	}
//
//	LowestCommonAncestor(vector< vector<int> > G) :n(G.size()), G(G), dep(G.size()) {
//		h = 1;
//		while ((1 << h) <= n) h++;
//		par.assign(h, vector<int>(n, -1));
//	}
//
//	void add_edge(int u, int v) {
//		G[u].emplace_back(v);
//		G[v].emplace_back(u);
//	}
//
//	void dfs(int v, int p, int d) {
//		par[0][v] = p;
//		dep[v] = d;
//		for (int u : G[v])
//			if (u != p) dfs(u, v, d + 1);
//	}
//
//	void build(int r = 0) {
//		dfs(r, -1, 0);
//		for (int k = 0; k + 1 < h; k++)
//			for (int v = 0; v < n; v++)
//				if (~par[k][v])
//					par[k + 1][v] = par[k][par[k][v]];
//	}
//
//	int lca(int u, int v) {
//		if (dep[u] > dep[v]) swap(u, v);
//		for (int k = 0; k < h; k++)
//			if ((dep[v] - dep[u]) >> k & 1)
//				v = par[k][v];
//
//		if (u == v) return u;
//
//		for (int k = h - 1; k >= 0; k--)
//			if (par[k][u] != par[k][v])
//				u = par[k][u], v = par[k][v];
//
//		return par[0][u];
//	}
//
//	int distance(int u, int v) {
//		return dep[u] + dep[v] - dep[lca(u, v)] * 2;
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
//	LowestCommonAncestor lca(edges);
//	lca.build();
//
//	int Q;
//	cin >> Q;
//
//	for (int i = 0; i < Q; i++) {
//		int x, y;
//		cin >> x >> y;
//		x--, y--;
//		cout << lca.distance(x, y) + 1 << endl;
//	}
//
//	return 0;
//}