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
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string S;
//	cin >> S;
//
//	vector<vector<lint>> dp(S.size() + 1, vector<lint>(4));
//	dp[0][0] = 1;
//	for (int i = 0; i < S.size(); i++) {
//		for (int j = 0; j <= 3; j++) {
//			for (int k = 0; k <= 2; k++) {
//				if (!(S[i] != '?' && S[i] != 'A' + k)) {
//
//					dp[i + 1][j] += dp[i][j];
//					dp[i + 1][j] %= MOD;
//
//					if (j == k) {
//						dp[i + 1][j + 1] += dp[i][j];
//						dp[i + 1][j + 1] %= MOD;
//					}
//
//				}
//			}
//		}
//	}
//
//	cout << dp[S.size()][3] << "\n";
//
//	return 0;
//}