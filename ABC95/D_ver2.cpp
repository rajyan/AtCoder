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
//	int N;
//	lint C;
//	cin >> N >> C;
//
//	vector<lint> x(N + 1), v(N + 1);
//	for (int i = 1; i <= N; i++) cin >> x[i] >> v[i];
//
//	vector<lint> rcw(N + 1), Midx(N + 1), ccw(N);
//	lint sum = 0;
//	for (int i = 1; i <= N; i++) {
//		sum += v[i];
//		rcw[i] = sum - x[i];
//	}
//	for (int i = 1; i <= N; i++) {
//		if (rcw[i] < rcw[i - 1]) {
//			rcw[i] = rcw[i - 1];
//			Midx[i] = Midx[i - 1];
//		}
//		else {
//			Midx[i] = i;
//		}
//	}
//
//	sum = 0;
//
//	for (int i = N - 1; i >= 0; i--) {
//		sum += v[i + 1];
//		ccw[i] = sum - (C - x[i + 1]);
//	}
//
//	lint ans = rcw[N];
//	for (int i = 0; i < N; i++) {
//		ans = max( ans, rcw[i] + ccw[i] - min(x[Midx[i]], (C - x[i + 1])));
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}