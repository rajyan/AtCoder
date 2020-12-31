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
//#ifdef _DEBUG
//#include "../../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//class LCA {
//private:
//
//	int N, lg_N;
//	vector<int> depth;
//	vector<vector<int>> par;
//
//	void build(const vector<vector<int>> &graph, int root) {
//		
//		auto dfs = [&](auto &&f, int now) -> void {
//			
//			for (const auto &next : graph[now]) {
//				if (par[0][next] == -1) {
//					par[0][next] = now;
//					depth[next] = depth[now] + 1;
//					f(f, next);
//				}
//			}
//
//		};
//
//		par[0][root] = root;
//		dfs(dfs, root);
//
//		for (int bit = 0; bit < lg_N; bit++) {
//			for (int i = 0; i < N; i++) {
//				par[bit + 1][i] = par[bit][par[bit][i]];
//			}
//		}
//	}
//
//	int ancestor(int now, int n) {
//		if (n <= 0) return now;
//		for (int i = 0, lg_n = 32 - nlz(n); i < lg_n; i++) {
//			if (n & (1LL << i)) now = par[i][now];
//		}
//		return now;
//	}
//
//	int nlz(unsigned int x) {
//		union {
//			unsigned int as_uint32;
//			float        as_float;
//		} data;
//		data.as_float = (float)x + 0.5;
//		int n = 158 - (data.as_uint32 >> 23);
//		return n;
//	}
//
//public:
//	LCA(const vector<vector<int>> &edges, int root = 0) : N(edges.size()), lg_N(32 - nlz(N)), depth(N), par(lg_N + 1, vector<int>(N, -1)) { build(edges, root); }
//
//	int get_lca(int u, int v) {
//
//		if (depth[u] < depth[v]) swap(u, v);
//		u = ancestor(u, depth[u] - depth[v]);
//		if (u == v) return u;
//
//		for (int i = 32 - nlz(depth[u]); i >= 0; i--) {
//			if (par[i][u] != par[i][v]) {
//				u = par[i][u];
//				v = par[i][v];
//			}
//		}
//		return par[0][u];
//	}
//
//	int dist(int u, int v) {
//		return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];
//	}
//};
//
//int main() {
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
//	LCA lca(edges);
//
//	int Q;
//	cin >> Q;
//
//	for (int i = 0; i < Q; i++) {
//		int x, y;
//		cin >> x >> y;
//		x--, y--;
//		cout << lca.dist(x, y) + 1 << "\n";
//	}
//
//	return 0;
//}
