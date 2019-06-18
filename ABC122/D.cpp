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
//lint dp[101][4][4][4];
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	// AGC, ACG, GAC, A?GC, AG?C (021, 012, 201, 0?21, 02?1)の4つがダメ、3つ前までを見れば帰納的に求まる。
//	// ACGTに0123を対応
//
//	dp[0][3][3][3] = 1;
//
//	for (int len = 0; len < N; len++) {
//
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 4; j++) {
//				for (int k = 0; k < 4; k++) {
//
//					if (dp[len][i][j][k] == 0) continue;
//
//					for (int add = 0; add < 4; add++) {
//
//						if (j == 0 && k == 2 && add == 1) continue;
//						if (j == 0 && k == 1 && add == 2) continue;
//						if (j == 2 && k == 0 && add == 1) continue;
//						if (i == 0 && k == 2 && add == 1) continue;
//						if (i == 0 && j == 2 && add == 1) continue;
//
//						dp[len + 1][j][k][add] += dp[len][i][j][k];
//						dp[len + 1][j][k][add] %= MOD;
//					}
//				}
//			}
//		}
//	}
//
//	lint ans = 0;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			for (int k = 0; k < 4; k++) {
//
//				ans += dp[N][i][j][k];
//				ans %= MOD;
//			}
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
