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
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//const int MOD = 1000000007, INF = 1111111111;
//const double EPS = 1e-9;
// 
//lint digit(lint n, lint b) {
//	lint tmp = n, sum = 0;
//	while (tmp > 0) {
//		sum += tmp % b;
//		tmp /= b;
//	}
//	return sum;
//}
//
//int main() {
//
//	cin.tie(0);
//
//	lint n, s;
//	cin >> n >> s;
//
//	lint now = (n + 1) / 2, range = (n + 1) / 2, tmp;
//
//	while (range > 1) {
//
//		tmp = digit(n, now);
//		range = (range + 1) / 2;
//		if (tmp > s && n != tmp) now += range;
//		else if (tmp < s || n == tmp) now -= range;
//		else {
//			
//			if (now == n) {
//				cout << now;
//				return 0;
//			}
//			for (int i = 2; i <= now; i++) {
//				if (digit(n, i) == s) {
//
//					cout << i;
//					return 0;
//				}
//			}
//		}
//	}
//
//	cout << -1;
//	return 0;
//}