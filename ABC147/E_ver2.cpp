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
//#include <bitset>
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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//template<class T>
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W;
//	cin >> H >> W;
//
//	vector<vector<int>> A(H, vector<int>(W));
//	vector<vector<int>> B(H, vector<int>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> A[i][j];
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> B[i][j];
//
//	const int offset = 6500;
//	vector<vector<bitset<offset * 2 + 1>>> dp(H, vector<bitset<offset * 2 + 1>>(W + 1));
//	dp[0][0][offset] = 1;
//	for (int i = 0; i < H; i++) {
//
//		for (int j = 0; j < W; j++) {
//
//			for (int k = 0; k <= 2 * offset; k++) {
//
//				if (0 <= k + A[i][j] - B[i][j] && k + A[i][j] - B[i][j] <= 2 * offset) {
//					dp[i][j + 1][k] = dp[i][j + 1][k] | dp[i][j][k + A[i][j] - B[i][j]];
//				}
//				if (0 <= k - A[i][j] + B[i][j] && k - A[i][j] + B[i][j] <= 2 * offset) {
//					dp[i][j + 1][k] = dp[i][j + 1][k] | dp[i][j][k - A[i][j] + B[i][j]];
//				}
//				
//			}
//
//		}
//		DMP(dp);
//
//		if (i == H - 1) break;
//		for (int j = 1; j <= W; j++) {
//			for (int k = 0; k <= 2 * offset; k++) {
//				if (0 <= k + A[i + 1][j - 1] - B[i + 1][j - 1] && k + A[i + 1][j - 1] - B[i + 1][j - 1] <= 2 * offset) {
//					dp[i + 1][j][k] = dp[i + 1][j][k] | dp[i][j][k + A[i + 1][j - 1] - B[i + 1][j - 1]];
//				}
//				if (0 <= k - A[i + 1][j - 1] + B[i + 1][j - 1] && k - A[i + 1][j - 1] + B[i + 1][j - 1] <= 2 * offset) {
//					dp[i + 1][j][k] = dp[i + 1][j][k] | dp[i][j][k - A[i + 1][j - 1] + B[i + 1][j - 1]];
//				}
//			}
//		}
//
//		DMP(dp);
//
//	}
//
//	int ans = INF;
//	for (int i = 0; i <= 2 * offset; i++) {
//		if(dp[H - 1][W][i]) chmin(ans, abs(i - offset));
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}