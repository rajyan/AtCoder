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
//template< class T >
//class RecSum {
//private:
//	int H, W;
//	vector<vector<T>> data;
//
//public:
//	RecSum(vector<vector<T>> const &vec) : H(vec.size()), W(vec[0].size()), data(H + 1, vector<T>(W + 1, 0)) {
//		for (int row = 0; row < H; row++) {
//			for (int col = 0; col < W; col++) {
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
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); };
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W;
//	cin >> H >> W;
//
//	vector<vector<int>> w(H, vector<int>(W));
//	vector<vector<int>> b(H, vector<int>(W));
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if ((i + j) & 1) cin >> w[i][j];
//			else cin >> b[i][j];
//		}
//	}
//	DMP(b, w);
//
//	RecSum<int> WH(w), B(b);
//	int ans = 0;
//	for (int si = 0; si < H; si++) {
//		for (int sj = 0; sj < W; sj++) {
//			for (int gi = si + 1; gi <= H; gi++) {
//				for (int gj = sj + 1; gj <= W; gj++) {
//					DMP(WH(si, sj, gi, gj));
//					if (WH(si, sj, gi, gj) == B(si, sj, gi, gj)) chmax(ans, (gi - si) * (gj - sj));
//				}
//			}
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}