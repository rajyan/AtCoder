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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//template<class T>
//inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	int R, C, K;
//	cin >> R >> C >> K;
//	const int s_max = 3;
//
//	auto dp = make_vec(R + 1, C + 1, s_max + 1, 0LL);
//	auto grid = make_vec(R, C, 0LL);
//
//	for (int i = 0; i < K; i++) {
//		int r, c, v;
//		cin >> r >> c >> v;
//		r--, c--;
//		grid[r][c] = v;
//	}
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			for (int suc = 0; suc <= s_max; suc++) {
//				if (suc != 3) chmax(dp[i][j + 1][suc + 1], dp[i][j][suc] + grid[i][j]);
//				chmax(dp[i + 1][j][0], dp[i][j][suc] + (suc != 3 ? grid[i][j] : 0));
//				chmax(dp[i][j + 1][suc], dp[i][j][suc]);
//			}
//		}
//	}
//
//	lint ans = 0;
//	for (int suc = 0; suc <= s_max; suc++) {
//		chmax(ans, dp[R][C - 1][suc]);
//		chmax(ans, dp[R - 1][C][suc]);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
