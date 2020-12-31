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
//void dump(const char* str, T &&h) { cerr << str << " =\n " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " =\n " << h << "\n";
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
//	const int offset = 20;
//	auto dp = make_vec(W + 1, offset * 2, 0);
//	dp[0][0] = 1;
//
//	for (int i = 0; i < H; i++) {
//
//		for (int j = 0; j < W; j++) {
//			
//			for (int k = 0; k < offset; k++) {
//				if (k + A[i][j] < offset) {
//					dp[j + 1][k + A[i][j]] |= dp[j][k];
//					dp[j + 1][k + A[i][j] + offset] |= dp[j][k + offset];
//				}
//				if (k + B[i][j] < offset) {
//					dp[j + 1][k + B[i][j] + offset] |= dp[j][k];
//					dp[j + 1][k + B[i][j]] |= dp[j][k + offset];
//				}
//			}
//
//		}
//		DMP(dp);
//
//		if (i == H - 1) break;
//		auto tmp = make_vec(W + 1, offset * 2, 0);
//		for (int j = 1; j <= W; j++) {
//			for (int k = 0; k < offset; k++) {
//				if (k + A[i + 1][j - 1] < offset) {
//					tmp[j][k + A[i + 1][j - 1]] |= dp[j][k];
//					tmp[j][k + A[i + 1][j - 1] + offset] |= dp[j][k + offset];
//				}
//				if (k + B[i + 1][j - 1] < offset) {
//					tmp[j][k + B[i + 1][j - 1] + offset] |= dp[j][k];
//					tmp[j][k + B[i + 1][j - 1]] |= dp[j][k + offset];
//				}
//			}
//		}
//		swap(tmp, dp);
//		DMP(dp);
//
//	}
//
//	int ans = INF;
//	for (int i = 0; i < offset; i++) {
//		for (int j = 0; j < offset; j++) {
//			if (dp[W][i] & dp[W][j + offset]) chmin(ans, abs(i - j));
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}