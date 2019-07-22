//#include <cassert>
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
//	int A, B, C, X, tmp, ans = 0;
//	cin >> A >> B >> C >> X;
//
//	for (int a = 0; a <= A; a++) {
//		for (int b = 0; b <= B; b++) {
//
//			tmp = X - 500 * a - 100 * b;
//			if (0 <= tmp && tmp <= C * 50 && tmp % 50 == 0) ans++;
//
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}