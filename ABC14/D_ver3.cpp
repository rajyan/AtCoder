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
//template<typename T> class segtree {
//private:
//	int n, sz;
//	vector<pair<T, int> > node;
//public:
//	void resize(vector<T>& v) {
//		sz = (int)v.size();
//		n = 1;
//		while (n < sz) {
//			n *= 2;
//		}
//		node.resize(2 * n);
//		for (int i = 0; i < sz; i++) {
//			node[i + n] = make_pair(v[i], i);
//		}
//		for (int i = n - 1; i >= 1; i--) {
//			node[i] = min(node[2 * i], node[2 * i + 1]);
//		}
//	}
//	void update(int k, T a)
//	{
//		node[k += n] = make_pair(a, k);
//		while (k >>= 1) {
//			node[k] = min(node[2 * k], node[2 * k + 1]);
//		}
//	}
//	pair<T, int> query(int a, int b)
//	{
//		pair<T, int> res1 = make_pair(numeric_limits<T>::max(), -1);
//		pair<T, int> res2 = make_pair(numeric_limits<T>::max(), -1);
//		a += n, b += n;
//		while (a != b) {
//			if (a % 2) res1 = min(res1, node[a++]);
//			if (b % 2) res2 = min(res2, node[--b]);
//			a >>= 1, b >>= 1;
//		}
//		return min(res1, res2);
//	}
//};
//
//class LCA {
//private:
//	int V;
//	vector<vector<int> > G;
//	vector<int> ord, depth, id;
//	segtree<int> st;
//	void dfs(int u, int p, int k) {
//		id[u] = (int)ord.size();
//		ord.push_back(u);
//		depth[u] = k;
//		for (int v : G[u]) {
//			if (v != p) {
//				dfs(v, u, k + 1);
//				ord.push_back(u);
//			}
//		}
//	}
//
//public:
//	LCA(int node_size) : V(node_size), G(V), depth(V), id(V, -1) {}
//	LCA(vector<vector<int>> G) : V(G.size()), G(G), depth(G.size()), id(G.size(), -1) {}
//	void add_edge(int from, int to) {
//		G[from].push_back(to), G[to].push_back(from);
//	}
//	void build() {
//		ord.reserve(2 * V - 2);
//		for (int i = 0; i < V; i++) {
//			if (id[i] < 0) {
//				dfs(i, -1, 0);
//			}
//		}
//		vector<int> stvec(2 * V - 2);
//		for (int i = 0; i < 2 * V - 2; i++) {
//			stvec[i] = depth[ord[i]];
//		}
//		st.resize(stvec);
//	}
//	int lca(int u, int v) {
//		return ord[st.query(min(id[u], id[v]), max(id[u], id[v]) + 1).second];
//	}
//	int dist(int u, int v) {
//		int lca_ = lca(u, v);
//		return depth[u] + depth[v] - 2 * depth[lca_];
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
//	LCA lca(edges);
//	lca.build();
//
//	int Q;
//	cin >> Q;
//
//	for (int i = 0; i < Q; i++) {
//		int x, y;
//		cin >> x >> y;
//		x--, y--;
//		cout << lca.dist(x, y) + 1 << endl;
//	}
//
//	return 0;
//}