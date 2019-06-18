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
//	int N, T;
//	cin >> N >> T;
//
//	vector<int> t(N);
//	FOR(i, 0, N) cin >> t[i];
//
//	lint ans = T;
//
//	FOR(i, 1, N) {
//	
//		if (t[i] - t[i - 1] > T) ans += T;
//		else ans += t[i] - t[i - 1];
//	}
//
//	cout << ans;
//}
