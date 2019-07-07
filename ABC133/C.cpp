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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint L, R;
//	cin >> L >> R;
//
//	lint ans = numeric_limits<long long>::max();
//	if (R - L >= 2018) ans = 0;
//	else {
//		for (lint i = L; i <= R; i++) {
//			for (lint j = i + 1; j <= R; j++) {
//				
//				ans = min(ans, i*j % 2019);
//
//			}
//		}
//	}
//
//	cout << ans << "\n";
//	
//	return 0;
//}