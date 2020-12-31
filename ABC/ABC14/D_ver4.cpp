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
//struct LCA {
//	int lg;
//	vector<vector<int>> anc;
//	vector<int> dps;
//	/// lとrの頂点のLCAを求める
//	int query(int l, int r) {
//		if (dps[l] < dps[r]) swap(l, r);
//		int dd = dps[l] - dps[r];
//		for (int i = lg - 1; i >= 0; i--) {
//			if (dd < (1 << i)) continue;
//			dd -= 1 << i;
//			l = anc[i][l];
//		}
//		if (l == r) return l;
//		for (int i = lg - 1; i >= 0; i--) {
//			if (anc[i][l] == anc[i][r]) continue;
//			tie(l, r) = tie(anc[i][l], anc[i][r]);
//		}
//		return anc[0][l];
//	}
//};
//
//template <class E> struct LCAExec : LCA {
//	const vector<vector<E>>& g;
//
//	/// 事前処理を行う rはroot頂点のid
//	LCAExec(const vector<vector<E>>& _g, int r) : g(_g) {
//		int N = int(g.size());
//		lg = 1;
//		while ((1 << lg) < N) lg++;
//		anc = vector<vector<int>>(lg, vector<int>(N, -1));
//		dps = vector<int>(N);
//		dfs(r, -1, 0);
//		for (int i = 1; i < lg; i++) {
//			for (int j = 0; j < N; j++) {
//				anc[i][j] =
//					(anc[i - 1][j] == -1) ? -1 : anc[i - 1][anc[i - 1][j]];
//			}
//		}
//	}
//
//	void dfs(int p, int b, int now) {
//		anc[0][p] = b;
//		dps[p] = now;
//		for (E e : g[p]) {
//			if (e == b) continue;
//			dfs(e, p, now + 1);
//		}
//	}
//
//	int up(int p, int dist) {
//		for (int i = lg - 1; i >= 0; i--) {
//			if (dist >= (1 << i)) {
//				dist -= 1 << i;
//				p = anc[i][p];
//			}
//		}
//		return p;
//	}
//};
//
//template <class E> LCA get_lca(const vector<vector<E>>& g, int r) {
//	return LCAExec<E>(g, r);
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
//	vector<vector<int>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		int u, v;
//		cin >> u >> v;
//		u--, v--;
//		edges[u].emplace_back(v);
//		edges[v].emplace_back(u);
//	}
//
//	int Q;
//	cin >> Q;
//
//	auto lca = get_lca(edges, 0);
//
//	for (int i = 0; i < Q; i++) {
//		int x, y;
//		cin >> x >> y;
//		x--, y--;
//		cout << lca.dps[x] + lca.dps[y] - 2*lca.dps[lca.query(x, y)] + 1 << endl;
//	}
//
//	return 0;
//}