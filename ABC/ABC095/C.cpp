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
//	int A, B, C, X, Y;
//	cin >> A >> B >> C >> X >> Y;
//
//	lint ans = 0;
//	if (A + B > 2 * C) {
//		if (X > Y) { 
//			ans += 2 * Y * C;
//			X -= Y;
//			Y = 0;
//		}
//		else {
//			ans += 2 * X * C;
//			Y -= X;
//			X = 0;
//		}
//	}
//
//	if (X > 0) {
//		if (A > 2 * C) ans += 2 * C * X;
//		else ans += A * X;
//	}
//	if (Y > 0) {
//		if (B > 2 * C) ans += 2 * C * Y;
//		else ans += B * Y;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}