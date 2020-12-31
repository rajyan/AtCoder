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
//const int MOD = 1000000007, INF = 1111111111;
//const double EPS = 1e-9;
//
//struct itmdata { lint val; int cnt; };
//vector<vector<itmdata>> dp(101,vector<itmdata>(100000));
//
//int main() {
//
//	cin.tie(0);
//
//	int N, W;
//	cin >> N >> W;
//
//	vector<int> weight(N), value(N);
//	FOR(i, 0, N) cin >> weight[i] >> value[i];
//
//	int w0 = weight[0];
//	FOR(i, 0, N) weight[i] -= w0 - 1;
//	
//	FOR(i, 0, N) {
//		FOR(j,0,100000){
//
//			if ((j >= weight[i]) &&
//				((dp[i][j].cnt + 1) * (w0 - 1) + weight[i] <= W) &&
//				(dp[i][j - weight[i]].val + value[i] > dp[i][j].val)) {
//
//					dp[i + 1][j].val = dp[i][j - weight[i]].val + value[i];
//					dp[i + 1][j].cnt = dp[i][j - weight[i]].cnt + 1;
//			}
//			else dp[i + 1][j] = dp[i][j];
//		}
//	}
//
//	int cnt = 0;
//	while ((dp[N][cnt].cnt * (w0 - 1) + cnt < W) && (cnt < W))cnt++;
//	cout << dp[N][cnt].val;
//	return 0;
//}