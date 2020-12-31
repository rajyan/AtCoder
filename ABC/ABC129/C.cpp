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
//	int N, M;
//	cin >> N >> M;
//	
//	vector<int> broken(N + 1);
//	int tmp;
//	for (int i = 0; i < M; i++) {
//		cin >> tmp;
//		broken[tmp] = 1;
//	}
//
//	vector<int> dp(N + 1);
//	dp[0] = 1;
//
//	for (int i = 1; i <= N; i++) {
//
//		if (!broken[i]) {
//			dp[i] += dp[i - 1];
//			if (i != 1) dp[i] += dp[i - 2];
//			dp[i] %= MOD;
//		}
//	}
//
//	cout << dp[N] << "\n";
//
//	return 0;
//}