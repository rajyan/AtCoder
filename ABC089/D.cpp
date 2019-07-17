//#include <cassert>
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
//template <class T>
//class CuSum {
//private:
//	vector<T> cusum;
//public:
//	// Constructors 
//	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
//		for (int i = 0; i < (int)(vec.size()); i++) cusum[i + 1] = cusum[i] + vec[i];
//	}
//	CuSum(int N) : cusum(N + 1) {}
//	void add(int i, T x) { cusum[i + 1] += x; }
//	void init() { for (int i = 0; i < (int)(cusum.size()); i++) cusum[i + 1] += cusum[i]; }
//
//	// partial sum of 0-indexed [l, r] 
//	T operator()(int l, int r) {
//		if (r < l || r < 0) {
//			//assert(0);
//			return T(0);
//		}
//		else return cusum[r + 1] - cusum[l];
//	}
//	// 0-indexed
//	T operator[](int i) { return cusum[i + 1]; }
//	T back() { return cusum.back(); }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W, D;
//	cin >> H >> W >> D;
//
//	vector<vector<int>> memo(D, vector<int>(H * W / D + 1));
//	int tmp;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> tmp;
//			memo[tmp % D][tmp / D] = i * W + j;
//		}
//	}
//
//	vector<CuSum<int>> cost(D, H*W / D);
//	for (int i = 0; i < D; i++) {
//		for (int j = H * W /D; j >= 1; j--) {
//			memo[i][j] = abs(memo[i][j] / W - memo[i][j - 1] / W) + abs(memo[i][j] % W - memo[i][j - 1] % W);
//		}
//		memo[i][0] = 0;
//		cost[i] = CuSum<int>(memo[i]);
//	}
//
//	int Q, L ,R;
//	cin >> Q;
//	for (int i = 0; i < Q; i++) {
//		cin >> L >> R;
//		cout << cost[L%D](L / D + 1, R / D) << "\n";
//	}
//
//	return 0;
//}