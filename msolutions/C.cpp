//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007, INF = 1111111111; 
//using namespace std;
//typedef long long lint;
//
//
//lint powmod(lint a, lint n, lint mod = MOD) {
//	lint res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a % mod;
//		a = a * a % mod;
//		n >>= 1;
//	}
//	return res;
//}
//
//class Combi {
//private:
//	vector<lint> fac, inv, finv;
//
//	void init(int N) {
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
//	Combi(int N = 100000) : fac(N + 1), inv(N + 1), finv(N + 1) { init(N + 1); }
//
//	lint Cmod(int n, int k) {
//		if (n < k) return 0;
//		if (n < 0 || k < 0) return 0;
//		return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
//	}
//
//	lint Pmod(int n, int k) {
//		if (n < k) return 0;
//		if (n < 0 || k < 0) return 0;
//		return fac[n] * finv[n - k] % MOD;
//	}
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, A, B, C;
//	cin >> N >> A >> B >> C;
//	Combi Combi(N * 2);
//
//	lint tmp = 0;
//	for (int i = 0; i < N; i++) {
//
//		tmp += (N + i) * powmod(A, N) % MOD * powmod(B, i) % MOD * powmod(powmod(100 - C, N + i), MOD - 2) % MOD * Combi.Cmod(N + i - 1, i) % MOD;
//		tmp %= MOD;
//		tmp += (N + i) * powmod(B, N) % MOD * powmod(A, i) % MOD * powmod(powmod(100 - C, N + i), MOD - 2) % MOD * Combi.Cmod(N + i - 1, i) % MOD;
//		tmp %= MOD;	
//
//	}
//
//	lint ans = 0;
//	ans += 100 * powmod(100 - C, MOD - 2) % MOD * tmp % MOD;
//	ans %= MOD;
//
//	cout << ans << "\n";
//
//	return 0;
//}