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
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<vector<int>> grid(N, vector<int>(N));
//	for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) cin >> grid[i][j];
//
//	int Q;
//	cin >> Q;
//
//	RecSum<int> sum(grid);
//	for (int i = 0; i < Q; i++) {
//
//		int ans = 0;
//		int p;
//		cin >> p;
//
//		// ç∂è„ÇÃç¿ïW
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//
//				// ècï”ÇÃí∑Ç≥
//				for (int vert = 1; vert <= N - i; vert++) {
//
//					int hori = min(N - j, p / vert);
//
//					if(hori != 0) chmax(ans, sum(i, j, i + vert, j + hori));
//
//				}
//
//			}
//		}
//
//		cout << ans << "\n";
//
//	}
//
//	return 0;
//}