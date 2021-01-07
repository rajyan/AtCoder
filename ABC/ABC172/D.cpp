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
//#include "../../../library/src/debug_template.cpp"
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
//	vector<lint> cnt(N + 1);
//	for (lint i = 1; i <= N; i++) {
//		for (lint j = 1; j * i <= N; j++) {
//			cnt[i * j]++;
//		}
//	}
//
//	lint ans = 0;
//	for (int i = 1; i <= N; i++) {
//		ans += cnt[i] * i;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
