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
//	int N;
//	cin >> N;
//
//	vector<vector<int>> plan(N, vector<int>(3));
//	for (int i = 0; i < N; i++) cin >> plan[i][0] >> plan[i][1] >> plan[i][2];
//
//	vector<vector<int>> dp(N, vector<int>(3));
//	dp[0] = plan[0];
//	for (int i = 1; i < N; i++) {
//
//		for (int j = 0; j < 3; j++) {
//
//			dp[i][j] = max(dp[i - 1][(j + 1) % 3] + plan[i][j], dp[i - 1][(j + 2) % 3] + plan[i][j]);
//		}
//
//	}
//
//	cout << max({ dp[N - 1][0], dp[N - 1][1], dp[N - 1][2] });
//
//	return 0;
//}