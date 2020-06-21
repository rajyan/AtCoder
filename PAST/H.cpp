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
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, L;
//	cin >> N >> L;
//
//	vector<int> x(L + 10);
//	for (int i = 0; i < N; i++) {
//		int a;
//		cin >> a;
//		x[a] = 1;
//	}
//
//	int t1, t2, t3;
//	cin >> t1 >> t2 >> t3;
//
//	vector<vector<lint>> dp(L + 10, vector<lint>(2, LINF)); //Å@1: ãÛíÜ
//	dp[0][1] = 0;
//	dp[0][0] = 0;
//	for (int i = 0; i < L; i++) {
//		chmin(dp[i + 1][0], dp[i][0] + t1 + x[i + 1] * t3);
//		chmin(dp[i + 1][1], dp[i][0] + t1 / 2 + t2 / 2);
//		chmin(dp[i + 2][0], dp[i][0] + t1 + t2 + x[i + 2] * t3);
//		chmin(dp[i + 2][1], dp[i][0] + t1 / 2 + t2 / 2 * 3);
//		chmin(dp[i + 3][1], dp[i][0] + t1 / 2 + t2 / 2 * 5);
//		chmin(dp[i + 4][0], dp[i][0] + t1 + t2 * 3 + x[i + 4] * t3);
//	}
//
//	cout << min(dp[L][0], dp[L][1]) << "\n";
//
//	return 0;
//}