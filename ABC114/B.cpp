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
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	string S;
//	cin >> S;
//
//	int tmp = (S[0] - '0') * 100 + (S[1] - '0') * 10 + (S[2] - '0');
//	int ans = abs(753 - tmp);
//	for (int i = 3; i < S.size(); i++) {
//
//		tmp = tmp % 100 * 10 + S[i] - '0';
//		ans = min(ans, abs(753 - tmp));
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}