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
//struct CumulativeSum2D {
//	vector< vector< T > > data;
//
//	CumulativeSum2D(int W, int H) : data(W + 1, vector< int >(H + 1, 0)) {}
//
//	void add(int x, int y, T z) {
//		++x, ++y;
//		if (x >= data.size() || y >= data[0].size()) return;
//		data[x][y] += z;
//	}
//
//	void build() {
//		for (int i = 1; i < data.size(); i++) {
//			for (int j = 1; j < data[i].size(); j++) {
//				data[i][j] += data[i][j - 1] + data[i - 1][j] - data[i - 1][j - 1];
//			}
//		}
//	}
//
//	T query(int sx, int sy, int gx, int gy) {
//		return (data[gx][gy] - data[sx][gy] - data[gx][sy] + data[sx][sy]);
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
//	CumulativeSum2D<int> grid(4*K, 4*K);
//	int x, y; char w;
//	for (int i = 0; i < N; i++) {
//		cin >> x >> y >> w;
//		if (w == 'W') {
//			x %= 2*K;
//			y %= 2*K;
//		}
//		else {
//			x += K;
//			x %= 2*K;
//			y %= 2*K;
//		}
//		grid.add(x, y, 1);
//		grid.add(x + 2*K, y, 1);
//		grid.add(x, y + 2*K, 1);
//		grid.add(x + 2*K, y + 2*K, 1);
//	}
//
//	grid.build();
//
//	int ans = 0;
//	for (int row = 0; row < 2 * K; row++) {
//		for (int col = 0; col < 2 * K; col++) {
//			ans = max(ans, grid.query(row, col, row + K, col + K) + grid.query(row + K, col + K, row + 2*K, col + 2*K));
//		}
//	}
//	cout << ans << "\n";
//
//	return 0;
//}
