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
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007, INF = 1111111111; 
//using namespace std;
//using lint = long long;
//
//template<class T = lint>
//struct Edge {
//	int to, col;
//	T len;
//	Edge() {}
//	Edge(int to, int col, T len) : to(to), col(col), len(len) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//class LCA {
//private:
//
//	int N, lg_N;
//	vector<int> depth;
//	vector<vector<int>> par;
//
//	void build(const vector<vector<Edge<>>> &edges, int root) {
//
//		auto dfs = [&](auto &&f, int now) -> void {
//			for (const auto &[to, col, len] : edges[now]) {
//				if (par[0][to] == -1) {
//					par[0][to] = now;
//					depth[to] = depth[now] + 1;
//					f(f, to);
//				}
//			}
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
//	LCA(const vector<vector<Edge<>>> &edges, int root = 0) : N(edges.size()), lg_N(32 - nlz(N)), depth(N), par(lg_N + 1, vector<int>(N, -1)) { build(edges, root); }
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
//	int distance(int u, int v) {
//		return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];
//	}
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
//
//	vector<vector<Edge<>>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		int u, v, col, len;
//		cin >> u >> v >> col >> len;
//		u--, v--;
//		edges[u].emplace_back(v, col, len);
//		edges[v].emplace_back(u, col, len);
//	}
//
//	LCA lca(edges);
//	// クエリの変更情報は端点+lcaに保存
//	vector<map<int, pair<int, lint>>> V(N);
//	// クエリ自体は頂点さえ持ってればよい
//	vector<Edge<>> q(Q);
//	for (int i = 0; i < Q; i++) {
//		int x, y, u, v;
//		cin >> x >> y >> u >> v;
//		u--, v--;
//		lint l = lca.get_lca(u, v);
//		V[u][i] = { x,y };
//		V[v][i] = { x,y };
//		V[l][i] = { x,y };
//		q[i] = { u,v,l };
//	}
//
//	vector<lint> dist(N);
//	// dfsでたどった頂点までの色iの辺の合計、辺の長さの合計を保存
//	vector<pair<int, lint>> sum(N);
//	// V(N)の中身を{diff, *} に書き換え sumを巻き戻しながらdfs
//	auto dfs_query = [&](auto &&f, int now, int prev) -> void {
//		
//		for (auto &[_, p] : V[now]) {
//			auto &[x, y] = p;
//			y = y * sum[x].first - sum[x].second;
//		}
//
//		for (const auto&[next, col, len] : edges[now]) {
//			if (next == prev) continue;
//			sum[col].first++;
//			sum[col].second += len;
//			dist[next] = dist[now] + len;
//			f(f, next, now);
//			sum[col].first--;
//			sum[col].second -= len;
//		}
//
//	};
//	dfs_query(dfs_query, 0, -1);
//
//	for (int i = 0; i < Q; i++) {
//		const auto &[u, v, l] = q[i];
//		cout << dist[u] + V[u][i].second + dist[v] + V[v][i].second - 2 * (dist[l] + V[l][i].second) << "\n";
//	}
//
//	return 0;
//}