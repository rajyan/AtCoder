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
//#include "../../library/library/debug_template.cpp"
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
//int main() {
//
//	int N, M, Q;
//	cin >> N >> M >> Q;
//
//	vector<vector<int>> edges(N);
//	for (int i = 0; i < M; i++) {
//		int u, v;
//		cin >> u >> v;
//		u--, v--;
//		edges[u].emplace_back(v);
//		edges[v].emplace_back(u);
//	}
//
//	vector<int> col(N);
//	for (int i = 0; i < N; i++) cin >> col[i];
//
//	for (int i = 0; i < Q; i++) {
//
//		int q;
//		cin >> q;
//
//		if (--q) {
//			int x, y;
//			cin >> x >> y;
//			x--;
//			cout << col[x] << "\n";
//			col[x] = y;
//		}
//		else {
//			int x;
//			cin >> x;
//			x--;
//			cout << col[x] << "\n";
//			for (const auto &e : edges[x]) col[e] = col[x];
//		}
//
//	}
//
//	return 0;
//}
//
