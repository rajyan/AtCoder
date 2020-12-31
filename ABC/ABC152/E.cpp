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
//class Factorial {
//private:
//	vector<lint> fac, inv, finv;
//
//	void build(int N) {
//		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;
//
//		for (int i = 2; i < N; i++) {
//			fac[i] = fac[i - 1] * i % MOD;
//			inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
//			finv[i] = finv[i - 1] * inv[i] % MOD;
//		}
//	}
//
//public:
//	Factorial(int N = 200) : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }
//
//	lint operator() (int n, int k) {
//		if (n < k || k < 0) return 0LL;
//		return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
//	}
//
//	lint Pmod(int n, int k) {
//		if (n < k || k < 0) return 0LL;
//		return fac[n] * finv[n - k] % MOD;
//	}
//};
//
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string N;
//	cin >> N;
//	lint len = N.size();
//
//	int K;
//	cin >> K;
//
//	auto dp = make_vec(len + 1, 4, 2, 0LL);
//	dp[0][0][0] = 1;
//
//	for (int i = 0; i < len; i++) {
//		for (int j = 0; j <= 3; j++) {
//
//			if(j != 3) dp[i + 1][j + 1][1] += dp[i][j][1] * 9;
//			dp[i + 1][j][1] += dp[i][j][1];
//			
//			if (N[i] != '0') {
//				if (j != 3) {
//					dp[i + 1][j + 1][1] += dp[i][j][0] * (N[i] - '0' - 1);
//					dp[i + 1][j + 1][0] += dp[i][j][0];
//				}
//				dp[i + 1][j][1] += dp[i][j][0];
//			}
//			else dp[i + 1][j][0] += dp[i][j][0];
//
//		}
//	}
//
//	cout << (dp[len][K][0] + dp[len][K][1]) << "\n";
//
//	return 0;
//}