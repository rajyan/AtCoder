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
//class UnionFind {
//private:
//	vector<int> data;
//public:
//	UnionFind(int size) : data(size, -1) { }
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
//	bool is_same(int x, int y) { return root(x) == root(y); }
//	int size(int x) { return -data[root(x)]; }
//
//	bool unify(int x, int y) {
//		x = root(x); y = root(y);
//		if (x != y) {
//			if (data[y] < data[x]) swap(x, y);
//			data[x] += data[y]; data[y] = x;
//			return true;
//		}
//		return false;
//	}
//};
//
//int main() {
//
//	int N, M, K;
//	cin >> N >> M >> K;
//
//	vector<int> ans(N, -1);
//	vector<pair<int, int>> ab(M);
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		a--, b--;
//		ab[i] = { a, b };
//		ans[a]--;
//		ans[b]--;
//	}
//	vector<pair<int, int>> cd(K);
//	for (int i = 0; i < K; i++) {
//		int c, d;
//		cin >> c >> d;
//		c--, d--;
//		cd[i] = { c, d };
//	}
//	
//	UnionFind uf(N);
//	for (int i = 0; i < M; i++) {
//		const auto& [a, b] = ab[i];
//		uf.unify(a, b);
//	}
//
//	for (int i = 0; i < K; i++) {
//		const auto& [c, d] = cd[i];
//		if (uf.is_same(c, d)) {
//			ans[c]--;
//			ans[d]--;
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		cout << uf.size(i) + ans[i] << "\n";
//	}
//
//	return 0;
//}
//
