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
//const int MOD = 1000000007;
//const int INF = 1000000009;
//const double EPS = 1e-9;
//
//lint divisor(lint n) {
//	lint min = INF, tmp, cnt;
//	for (lint i = 1; i * i <= n; i++) {
//		if (n % i == 0) {
//			tmp = n / i;
//			cnt = 0;
//			while (tmp != 0) {
//				tmp /= 10;
//				++cnt;
//			}
//			min = min > cnt ? cnt : min;
//		}
//	}
//	return min;
//}
//
//int main() {
//
//	cin.tie(0);
//
//	lint N;
//	cin >> N;
//
//	cout << divisor(N);
//
//	return 0;
//}