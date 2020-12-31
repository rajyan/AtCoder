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
//#define DMP(x) cerr << #x << ": " << x << "\n"
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//
//
//int main() {
//
//	cin.tie(0);
//	
//	lint N, A, B, ans = 0;
//	cin >> N >> A >> B;
//
//	vector<lint> X(N);
//	FOR(i, 0, N) cin >> X[i];
//
//	FOR(i, 0, N - 1) {
//		if ((X[i + 1] - X[i]) * A < B) ans += (X[i + 1] - X[i]) * A;
//		else ans += B;
//	}
//
//	cout << ans;
//
//	return 0;
//}