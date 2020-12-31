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
//#include <random>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#define INF  1000000000
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//random_device rnd;
//
//int dp[45][410][410];
//
//int main() {
//
//	cin.tie(0);
//	
//	int N, M_a, M_b, ans = INF;
//	cin >> N >> M_a >> M_b;
//
//	vector<int> a(N), b(N), c(N);
//	FOR(i, 0, N) cin >> a[i] >> b[i] >> c[i];
//
//	FOR(i, 0, 45)FOR(j, 0, 410)FOR(k, 0, 410) {
//	
//		dp[i][j][k] = INF;
//	}
//
//	dp[0][0][0] = 0;
//
//	FOR(i, 0, N) {
//		FOR(j, 0, 400) {
//			FOR(k, 0, 400) {
//
//				dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
//				dp[i + 1][j + a[i]][k + b[i]] = min(dp[i + 1][j + a[i]][k + b[i]], dp[i][j][k] + c[i]);
//			}
//		}
//	}
//
//	for (int i = 1; i * max(M_a, M_b) < 410; i++) ans = ans > dp[N][i*M_a][i*M_b] ? dp[N][i*M_a][i*M_b] : ans;
//	if (ans == INF) cout << "-1";
//	else cout << ans;
//
//	return 0;
//}