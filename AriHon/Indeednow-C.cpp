//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
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
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint N, M;
//	cin >> N >> M;
//
//	auto dp = make_vec(101, 101, 101, lint(0));
//	for (int i = 0; i < N; i++) {
//		lint a, b, c, w;
//		cin >> a >> b >> c >> w;
//		chmax(dp[a][b][c], w);
//	}
//
//	for (int i = 1; i <= 100; i++) {
//		for (int j = 1; j <= 100; j++) {
//			for (int k = 1; k <= 100; k++) {
//				chmax(dp[i][j][k], dp[i - 1][j][k]);
//				chmax(dp[i][j][k], dp[i][j - 1][k]);
//				chmax(dp[i][j][k], dp[i][j][k - 1]);
//				chmax(dp[i][j][k], dp[i - 1][j - 1][k]);
//				chmax(dp[i][j][k], dp[i][j - 1][k - 1]);
//				chmax(dp[i][j][k], dp[i - 1][j - 1][k]);
//				chmax(dp[i][j][k], dp[i - 1][j - 1][k - 1]);
//			}
//		}
//	}
//
//	for (int i = 0; i < M; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		cout << dp[a][b][c] << "\n";
//	}
//
//	return 0;
//}