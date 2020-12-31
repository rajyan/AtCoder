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
//int main() {
//
//	cin.tie(0);
//
//	int N, A;
//	cin >> N >> A;
//
//	vector<int> x(N);
//	FOR(i, 0, N) cin >> x[i];
//	FOR(i, 0, N) x[i] -= A;
//
//	vector<vector<lint>> dp(51, vector<lint>(5001));
//	dp[0][2500] = 1;
//
//	FOR(i, 1, N + 1) {
//		FOR(j, 0, 5001) {
//		
//			if (j - x[i-1] >= 0 && j - x[i-1] <= 5000) {
//				dp[i][j] += dp[i - 1][j - x[i - 1]];
//			}
//			dp[i][j] += dp[i - 1][j];
//		}
//	}
//
//	cout << dp[N][2500] - 1;
//	return 0;
//}