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
//const int INF = 1000000000;
//const double EPS = 1e-9;
//
//
//int main() {
//
//	cin.tie(0);
//
//	int n, m;
//	cin >> n >> m;
//	
//	vector<lint> x(n), y(m);
//	FOR(i, 0, n) cin >> x[i];
//	FOR(j, 0, m) cin >> y[j];
//
//	lint sum_x = 0, sum_y = 0;
//
//	FOR(i, 0, n) {
//		sum_x += x[i] * (1 - n + 2 * i);
//		sum_x %= MOD;
//	}
//	FOR(j, 0, m) {
//		sum_y += y[j] * (1 - m + 2 * j);
//		sum_y %= MOD;
//	}
//
//	cout << sum_x * sum_y % MOD;
//
//	return 0;
//}