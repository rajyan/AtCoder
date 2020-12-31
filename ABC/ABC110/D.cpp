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
//vector<pair<lint, int>> Pfact(lint num) {
//	vector<pair<lint, int>> res;
//	for (lint i = 2; i * i <= num; i++) {
//		int cnt = 0;
//		while (num % i == 0) {
//			cnt++;
//			num /= i;
//		}
//		if (cnt) res.emplace_back(i, cnt);
//	}
//	if (num != 1) res.emplace_back(make_pair(num, 1));
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
//	Combi(int N) : fac(N + 1), inv(N + 1), finv(N + 1) { init(N + 1); }
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
//	int N, M;
//	cin >> N >> M;
//
//	auto pfM = Pfact(M);
//	
//	Combi C(100030); // 30 > log2(10^9)
//	lint ans = 1;
//	for (const auto &elem : pfM) {
//
//		ans *= C.Cmod(N - 1 + elem.second, N - 1);
//		ans %= MOD;
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}