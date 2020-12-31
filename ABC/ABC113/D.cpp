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
//class Fibonacci {
//private:
//	vector<lint> fibo;
//public:
//	Fibonacci(int N) : fibo(N + 1) { // N > 0
//		fibo[0] = 1, fibo[1] = 1;
//		for (int i = 2; i <= N; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
//	}
//
//	lint val(int N) { return fibo[N]; }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W, K;
//	cin >> H >> W >> K;
//
//	// H=1,W=NÇÃvalidÇ»í ÇËÅ®Fibonacci(1 1 2 3 5.....)
//	Fibonacci Fibo(W);
//
//	vector<vector<lint>> dp(H + 1, vector<lint>(W));
//	dp[0][0] = 1;
//	for (int i = 1; i <= H; i++) {
//		for (int j = 0; j < W; j++) {
//
//			dp[i][j] += dp[i - 1][j] * Fibo.val(W - 1 - j) % MOD * Fibo.val(j) % MOD;
//			if (j != 0) {
//				dp[i][j] += dp[i - 1][j - 1] * Fibo.val(W - 1 - j) % MOD * Fibo.val(j - 1) % MOD;
//				dp[i][j] %= MOD;
//			}
//			if (j != W - 1) {
//				dp[i][j] += dp[i - 1][j + 1] * Fibo.val(W - 1 - (j + 1)) % MOD * Fibo.val(j) % MOD;
//				dp[i][j] %= MOD;
//			}
//		}
//	}
//
//	cout << dp[H][K - 1] << "\n";
//
//	return 0;
//}