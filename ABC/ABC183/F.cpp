//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
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
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//class UnionFind {
//private:
//	vector<int> data;
//public:
//	UnionFind(int size) : data(size, -1) { }
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
//	bool is_same(int x, int y) { return root(x) == root(y); }
//	int size(int x) { return -data[root(x)]; }
//
//	int unify(int x, int y) {
//		x = root(x); y = root(y);
//		if (x != y) {
//			if (data[y] < data[x]) swap(x, y);
//			data[x] += data[y]; data[y] = x;
//			return x;
//		}
//		return false;
//	}
//};
//
//int main() {
//
//	int N, Q;
//	cin >> N >> Q;
//
//	vector<int> C(N);
//	for (int i = 0; i < N; i++) cin >> C[i];
//	for (int i = 0; i < N; i++) C[i]--;
//
//	UnionFind uf(N);
//	vector<map<int, int>> vmp(N);
//	for (int i = 0; i < N; i++) vmp[uf.root(i)][C[i]]++;
//	DMP(vmp);
//
//	for (int i = 0; i < Q; i++) {
//		int q, x, y;
//		cin >> q >> x >> y;
//		x--, y--;
//		if (q == 1) {
//			if (!uf.is_same(x, y)) {
//				int rx = uf.root(x);
//				int ry = uf.root(y);
//				int merge = uf.unify(x, y);
//				if (rx != merge) swap(rx, ry);
//				for (const auto& [key, val] : vmp[ry]) {
//					vmp[rx][key] += val;
//				}
//			}
//		}
//		else {
//			cout << vmp[uf.root(x)][y] << "\n";
//		}
//	}
//
//	return 0;
//}
