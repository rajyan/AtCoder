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
//int main() {
//
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	string N;
//
//
//		cin >> N;
//
//		vector<vector<vector<int>>> dp(N.size() + 1, vector<vector<int>>(2, vector<int>(8)));
//		dp[0][0][0] = 1;
//		for (int i = 0; i < N.size(); i++) {
//
//			dp[i + 1][1][0] = 1;
//			for (int mask = 0; mask < 8; mask++) for (int bit = 0; bit <= 2; bit++) dp[i + 1][1][mask | (1 << bit)] += dp[i][1][mask];
//			if (N[i] > '3') {
//				for (int mask = 0; mask < 8; mask++) dp[i + 1][1][mask | 1] += dp[i][0][mask];
//			}
//			if (N[i] > '5') {
//				for (int mask = 0; mask < 8; mask++) dp[i + 1][1][mask | 2] += dp[i][0][mask];
//			}
//			if (N[i] > '7') {
//				for (int mask = 0; mask < 8; mask++) dp[i + 1][1][mask | 4] += dp[i][0][mask];
//			}
//			if (N[i] == '3') {
//				for (int mask = 0; mask < 8; mask++) dp[i + 1][0][mask | 1] += dp[i][0][mask];
//			}
//			if (N[i] == '5') {
//				for (int mask = 0; mask < 8; mask++) dp[i + 1][0][mask | 2] += dp[i][0][mask];
//			}
//			if (N[i] == '7') {
//				for (int mask = 0; mask < 8; mask++) dp[i + 1][0][mask | 4] += dp[i][0][mask];
//			}
//		}
//
//		cout << dp[N.size()][0][7] + dp[N.size()][1][7] << "\n";
//
//
//	return 0;
//
//}
