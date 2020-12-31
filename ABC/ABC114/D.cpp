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
//void Pfact(lint num, vector<int> &divisor) {
//	vector<pair<lint, int>> res;
//	for (lint i = 2; i * i <= num; i++) {
//		int cnt = 0;
//		while (num % i == 0) {
//			cnt++;
//			num /= i;
//		}
//		if (cnt) divisor[i] +=cnt;
//	}
//	if (num != 1) divisor[num]++;
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
//	Combi(int N = 10000) : fac(N + 1), inv(N + 1), finv(N + 1) { init(N + 1); }
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
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<int> divisor(101);
//	for (int i = 2; i <= N; i++) Pfact(i, divisor);
//
//	int rng1_2 = 0, rng2_4 = 0, rng4_14 = 0, rng14_24 = 0, rng24_74 = 0, rng74_ = 0;
//
//	for (const auto &elem : divisor) {
//
//		if ( 2 <= elem && elem <  4) rng2_4++;
//		if ( 4 <= elem && elem < 14) rng4_14++;
//		if (14 <= elem && elem < 24) rng14_24++;
//		if (24 <= elem && elem < 74) rng24_74++;
//		if (74 <= elem             ) rng74_++;
//
//	}
//
//	int ans = 0;
//	Combi C;
//	int rng4_ = rng4_14 + rng14_24 + rng24_74 + rng74_;
//	int rng14_ = rng4_ - rng4_14;
//	
//	ans += rng2_4 * C.Cmod(rng4_, 2) + C.Cmod(rng4_, 3) * 3;
//	ans += rng4_14 * rng14_ + C.Pmod(rng14_, 2);
//	ans += (rng2_4 + rng4_14 + rng14_24) * (rng24_74 + rng74_) + C.Pmod(rng24_74 + rng74_, 2);
//	ans += rng74_;
//
//	cout << ans << "\n";
//
//	return 0;
//}