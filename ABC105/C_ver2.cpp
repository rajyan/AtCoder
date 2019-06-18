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
//	lint N;
//	cin >> N;
//
//	string ans;
//
//	if (!N) ans = '0';
//	while (N != 0) {
//	if (N % 2) ans += '1', N--;
//		else ans += '0';
//		N /= -2;
//	}
//
//	reverse(ans.begin(), ans.end());
//	cout << ans << "\n";
//
//	return 0;
//}