//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
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
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//int main() {
//
//	lint N, K;
//	cin >> N >> K;
//
//	lint ans = 0;
//	for (int ab = 2; ab <= 2 * N; ab++) {
//		if (K + 2 > ab || K + 2 * N < ab) continue;
//		int cd = ab - K;
//		ans += 1LL * (N - abs(N + 1 - ab)) * (N - abs(N + 1 - cd));
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
