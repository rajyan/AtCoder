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
//int main() {
//
//	lint N;
//	cin >> N;
//
//	lint ans = 1LL * N * (N + 1) * (N + 2) / 6;
//	for (int i = 0; i < N - 1; i++) {
//		int u, v;
//		cin >> u >> v;
//		if (u > v) swap(u, v);
//		ans -= 1LL * u * (N - v + 1);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
