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
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> h(N + K);
//	for (int i = 0; i < N; i++) cin >> h[i];
//
//	vector<int> dp(N + K, INF);
//	dp[0] = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 1; j <= K; j++) {
//
//			dp[i + j] = min(dp[i + j], dp[i] + abs(h[i + j] - h[i]));
//		}
//	}
//
//	cout << dp[N - 1];
//
//	return 0;
//}