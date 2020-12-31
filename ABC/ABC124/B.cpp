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
//	int N;
//	cin >> N;
//
//	vector<int> H(N);
//	FOR(i, 0, N) cin >> H[i];
//
//	int ans = 1;
//
//	FOR(i, 0, N) {
//		FOR(j, 0, i) {
//			if (H[j] > H[i]) break;
//			if (j == i - 1) ans++;
//		}
//	}
//
//	cout << ans;
//	return 0;
//}