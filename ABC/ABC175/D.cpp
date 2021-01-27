//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<class T>
//inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> P(N), C(N);
//	for (int i = 0; i < N; i++) cin >> P[i];
//	for (int i = 0; i < N; i++) P[i]--;
//	for (int i = 0; i < N; i++) cin >> C[i];
//
//	lint ans = -LINF;
//	for (int st = 0; st < N; st++) {
//
//		vector<lint> used(N), point(N + 1);
//		int loop = 0, now = st;
//		for (int i = 0; i < min(N, K); i++, loop++) {
//			if (used[now]) break;
//			point[i + 1] = point[i] + C[now];
//			used[now] = 1;
//			now = P[now];
//		}
//		DMP(point, loop);
//		if (point[loop] > 0 && loop < K) {
//			int r = K / loop;
//			point[0] = -LINF;
//			if (chmax(ans, r * point[loop] + *max_element(point.begin(), point.begin() + K % loop + 1))) DMP(1, st, ans, point);
//			if (chmax(ans, (r - 1) * point[loop] + *max_element(point.begin(), point.begin() + loop + 1))) DMP(2, st, ans, point);
//		}
//		else {
//			if (chmax(ans, *max_element(point.begin() + 1, point.begin() + min(loop, K) + 1))) DMP(3, st, ans, point);
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
