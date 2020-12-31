//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//const int MOD = 998244353, INF = 1111111111;
//const double EPS = 1e-9;
//
//class Combi {
//private:
//	vector<lint> fac, inv, finv;
//
//public:
//	vector<vector<lint>> Ctb;
//	void tbinit(int N = 2000) {
//		Ctb.resize(N + 1, vector<lint>(N + 1));
//		for (int i = 0; i <= N; i++) {
//			Ctb[i][0] = 1;
//			Ctb[i][i] = 1;
//		}
//		for (int j = 1; j <= N; j++) {
//			for (int k = 1; k < j; k++) {
//				Ctb[j][k] = (Ctb[j - 1][k - 1] + Ctb[j - 1][k]) % MOD;
//			}
//		}
//	}
//
//	void init(int N = 100000) {
//		fac.resize(N); inv.resize(N); finv.resize(N);
//		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;
//
//		for (int i = 2; i < N; i++) {
//			fac[i] = fac[i - 1] * i % MOD;
//			inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
//			finv[i] = finv[i - 1] * inv[i] % MOD;
//		}
//	}
//
//	lint Cmod(int n, int k) {
//		if (n < k) return 0;
//		if (n < 0 || k < 0) return 0;
//		return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
//	}
//};
//
//int main() {
//
//	cin.tie(0);
//
//	int N;
//	cin >> N;
//
//	vector<int> a(N);
//	FOR(i, 0, N) cin >> a[i];
//
//	lint ans = 0;
//	Combi C;
//
//	
//	return 0;
//}