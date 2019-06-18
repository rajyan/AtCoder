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
//typedef long long lint;
//
//class UnionFind {
//private:
//	vector<int> data;
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
//
//public:
//	UnionFind(int size) : data(size, -1) { }
//	bool is_same(int x, int y) { return root(x) == root(y); }
//	int size(int x) { return -data[root(x)]; }
//
//	void unify(int x, int y) {
//		x = root(x); y = root(y);
//		if (x != y) {
//			if (data[y] < data[x]) swap(x, y);
//			data[x] += data[y]; data[y] = x;
//		}
//	}
//};
//
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W;
//	cin >> H >> W;
//
//	vector<string> S(H);
//	for (int i = 0; i < H; i++) cin >> S[i];
//
//	UnionFind row(H*W), col(H*W);
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (j != W - 1 && S[i][j] == '.' && S[i][j + 1] == '.') row.unify(i*W + j, i*W + j + 1);
//			if (i != H - 1 && S[i][j] == '.' && S[i + 1][j] == '.') col.unify(i*W + j, (i+1)*W + j);
//		}
//	}
//
//	int ans = 0;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			ans = max(row.size(i*W + j) + col.size(i*W + j) - 1, ans);
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}