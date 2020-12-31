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
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	string s, t;
//	cin >> s >> t;
//
//	vector<vector<int>> dp(s.length() + 1, vector<int>(t.length() + 1));
//
//	for (int i = 1; i <= s.length(); i++) {
//		for (int j = 1; j <= t.length(); j++) {
//
//			if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
//			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//
//		}
//	}
//	
//	string ans;
//	int x = s.length(), y = t.length();
//	while (x > 0 && y > 0) {
//
//		if (dp[x][y] == dp[x - 1][y]) x--;
//		else if (dp[x][y] == dp[x][y - 1]) y--;
//		else {
//			ans = s[x - 1] + ans;
//			x--, y--;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//
//}