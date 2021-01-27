//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <string>
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
//	int N;
//	cin >> N;
//
//	lint val = 10;
//	for (int i = 0; i < N; i++, val*= 10) {
//		val /= 5;
//	}
//	while (val % 10 == 0) {
//		val /= 10;
//	}
//
//	string s_val = to_string(val);
//
//	string ans = "0.";
//	ans += string(N - s_val.size(), '0');
//	ans += s_val;
//
//	cout << ans << "\n";
//
//	return 0;
//}
