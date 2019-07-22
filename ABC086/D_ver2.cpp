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
//template< class T >
//class RecSum {
//private:
//	vector<vector<T>> data;
//	int H = 0, W = 0;
//public:
//	RecSum(vector<vector<T>> const &vec) : H(vec.size()), W(vec[0].size()), data(H + 1, vector<T>(W + 1, 0)) {
//		for (int row = 0; row <= H; row++) {
//			for (int col = 0; col <= W; col++) {
//				data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col] + vec[row][col];
//			}
//		}
//	}
//
//	RecSum(int H, int W) : H(H), W(W), data(H + 1, vector<T>(W + 1, 0)) {}
//	void add(int x, int y, T z) { data[x + 1][y + 1] += z; }
//	void init() {
//		for (int row = 0; row < H; row++) {
//			for (int col = 0; col < W; col++) {
//				data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col];
//			}
//		}
//	}
//
//	// [sx, gx) x [sy, gy)
//	T operator()(int sx, int sy, int gx, int gy) {
//		return data[gx][gy] - data[sx][gy] - data[gx][sy] + data[sx][sy];
//	}
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	RecSum<int> grid(4 * K, 4 * K);
//	int x, y; char w;
//	for (int i = 0; i < N; i++) {
//		cin >> x >> y >> w;
//		if (w == 'W') {
//			x %= 2 * K;
//			y %= 2 * K;
//		}
//		else {
//			x += K;
//			x %= 2 * K;
//			y %= 2 * K;
//		}
//		grid.add(x, y, 1);
//		grid.add(x + 2 * K, y, 1);
//		grid.add(x, y + 2 * K, 1);
//		grid.add(x + 2 * K, y + 2 * K, 1);
//	}
//
//	grid.init();
//
//	int ans = 0;
//	for (int row = 0; row < 2 * K; row++) {
//		for (int col = 0; col < 2 * K; col++) {
//			ans = max(ans, grid(row, col, row + K, col + K) + grid(row + K, col + K, row + 2 * K, col + 2 * K));
//		}
//	}
//	cout << ans << "\n";
//
//	return 0;
//}
