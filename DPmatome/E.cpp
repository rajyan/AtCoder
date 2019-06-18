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
//	int N, W;
//	cin >> N >> W;
//
//	struct item { int w, val; };
//	vector<item> item(N);
//	for (int i = 0; i < N; i++) cin >> item[i].w >> item[i].val;
//
//	vector<vector<lint>> dp(N + 1, vector<lint>(100001, INF));
//	dp[0][0] = 0;
//	for (int i = 1; i <= N; i++) {
//
//		for (int j = 0; j <= 100000; j++) {
//			if (j - item[i - 1].val >= 0) dp[i][j] = min(dp[i - 1][j - item[i - 1].val] + item[i - 1].w, dp[i - 1][j]);
//			else dp[i][j] = dp[i - 1][j];
//		}
//	}
//
//	int ans = 0;
//	for (int j = 0; j <= 100000; j++) if (dp[N][j] <= W) ans = j;
//
//	cout << ans;
//
//	return 0;
//}