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
//lint dfs(string &input, int ptr, int len, int carry = 0) {
//	
//	if (carry == 0) {
//		if (ptr == len - 1) {
//			if (input[len - ptr - 1] == '1') return 1;
//			else return 0;
//		}
//		else if (input[len - ptr - 1] == '0') {
//			return 3 * dfs(input, ptr + 1, len) % MOD;
//		}
//		else if (input[len - ptr - 1] == '1') {
//			return (2 * dfs(input, ptr + 1, len) + dfs(input, ptr + 1, len, 1)) % MOD;
//		}
//	}
//	else {
//		if (ptr == len - 1) {
//			if (input[len - ptr - 1] == '1') return 3;
//			else return 1;
//		}
//		else if (input[len - ptr - 1] == '0') {
//			return (2 * dfs(input, ptr + 1, len) + dfs(input, ptr + 1, len, 1)) % MOD;
//		}
//		else if (input[len - ptr - 1] == '1') {
//			return 3 * dfs(input, ptr + 1, len, 1) % MOD;
//		}
//	}
//
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string L;
//
//
//	
//	for (int i = 0; i < 100; i++) {
//		cin >> L;
//		vector<vector<lint>> dp(L.size() + 1, vector<lint>(2));
//		dp[0][0] = 1;
//
//		for (int i = 0; i < L.size(); i++) {
//			if (L[i] == '0') {
//				dp[i + 1][0] += dp[i][0];
//				dp[i + 1][1] += dp[i][1] * 3 % MOD;
//			}
//			else {
//				dp[i + 1][0] += dp[i][0] * 2 % MOD;
//				dp[i + 1][1] += (dp[i][0] + dp[i][1] * 3) % MOD;
//			}
//		}
//
//		cout << (dp[L.size()][0] + dp[L.size()][1]) % MOD << "\n";
//		cout << dfs(L, 0, L.size(), 1) << "\n";
//	}
//
//	return 0;
//}