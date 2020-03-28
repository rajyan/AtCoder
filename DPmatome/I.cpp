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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<double> p(N);
//	for (int i = 0; i < N; i++) cin >> p[i];
//
//	vector<double> dp(N + 1);
//	dp[0] = 1;
//	for (int i = 0; i < N; i++) {
//		for (int front = N; front >= 0; front--) {
//			dp[front] = dp[front] * (1 - p[i]);
//			if (front != 0) dp[front] += dp[front - 1] * p[i];
//		}
//		DMP(dp);
//	}
//
//	cout << fixed << setprecision(10);
//	cout << accumulate(dp.begin() + (N + 1) / 2, dp.end(), 0.0) << "\n";
//
//	return 0;
//}