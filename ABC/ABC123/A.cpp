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
//const int MOD = 100000007;
//const int INF = 1 << 29;
//const double EPS = 1e-9;
//
//
//int main() {
//
//	cin.tie(0);
//
//	int a[5], k;
//	FOR(i,0,5) cin >> a[i];
//	cin >> k;
//
//	FOR(i, 0, 5)FOR(j, 0, 5) {
//		if (a[i] - a[j] > k) {
//			cout << ":(";
//			return 0;
//		}
//	}
//	cout << "Yay!";
//	return 0;
//}