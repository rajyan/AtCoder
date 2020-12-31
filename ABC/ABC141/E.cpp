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
//#include <chrono>
//#include <cstring>
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
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//int dp[5010][5010];
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	string s;
//	cin >> s;
//
//	auto check = [&](int cut) {
//		int res = 0;
//		memset(dp, 0, sizeof(dp));
//		for (int i = 0; i < cut; i++) {
//			for (int j = cut; j < N; j++) {
//				if (s[i] == s[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
//				chmax(res, dp[i + 1][j + 1]);
//			}
//		}
//		return res;
//	};
//
//	// 3•ª’Tõ
//	int lb = 0, ub = N, ans = 0;
//	for (int i = 0; i < 25; i++) {
//
//		int t1 = (2.5 * lb + ub) / 3.5;
//		int t2 = (lb + 2.5 * ub) / 3.5;
//
//		int c1 = check(t1);
//		int c2 = check(t2);
//		if (c1 < c2) lb = t1;
//		else ub = t2;
//
//		chmax(ans, max(c1, c2));
//		DMP(t1, t2);
//	}
//
//	DMP(ub, lb);
//	cout << ans << "\n";
//
//	return 0;
//}
