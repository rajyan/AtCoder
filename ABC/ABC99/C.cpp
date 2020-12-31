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
//using lint = long long;
//
//int mypow(int a, int n) {
//	int res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a;
//		a = a * a;
//		n >>= 1;
//	}
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	int six, nine;
//	vector<int> dp(N + 1, INF);
//	dp[0] = 0;
//	for (int i = 0; i <= N; i++) {
//		for (int j = 0; j <= 6; j++) {
//			six = mypow(6, j), nine = mypow(9, j);
//			if (i >= six) dp[i] = min(dp[i], dp[i - six] + 1);
//			if (i >= nine) dp[i] = min(dp[i], dp[i - nine] + 1);
//		}
//	}
//
//	cout << dp[N] << "\n";
//
//	return 0;
//}