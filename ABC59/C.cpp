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
//
//int main() {
//
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//
//	vector<lint> a(n);
//	FOR(i, 0, n) cin >> a[i];
//	FOR(i, 1, n) a[i] = a[i - 1] + a[i];
//
//	for (const auto &ele : a) DMP(ele);
//
//	lint tmp1 = 0, tmp2 = 0, ans1 = 0, ans2 = 0;
//
//	FOR(i, 0, n) {
//
//		if (i % 2 == 0) {
//			if (a[i] + tmp1 >= 0) {
//				ans1 += a[i] + tmp1 + 1;
//				tmp1 -= a[i] + tmp1 + 1;
//			}
//			if (a[i] + tmp2 <= 0) {
//				ans2 -= a[i] + tmp2 - 1;
//				tmp2 -= a[i] + tmp2 - 1;
//			}
//		}
//		else {
//			if (a[i] + tmp1 <= 0) {
//				ans1 -= a[i] + tmp1 - 1;
//				tmp1 -= a[i] + tmp1 - 1;
//			}
//			if (a[i] + tmp2 >= 0) {
//				ans2 += a[i] + tmp2 + 1;
//				tmp2 -= a[i] + tmp2 + 1;
//			}
//		}
//	}
//
//	cout << min(ans1,ans2);
//
//	return 0;
//}