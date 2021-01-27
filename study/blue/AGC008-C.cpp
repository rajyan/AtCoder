//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
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
//#include <unordered_map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//#include <bitset>
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
//	lint I, O, J, L, skip;
//	cin >> I >> O >> skip >> J >> L >> skip >> skip;
//	DMP(I, O, J, L);
//
//	lint ans = 0;
//	ans += O;
//	ans += I / 2 * 2;
//	ans += J / 2 * 2;
//	ans += L / 2 * 2;
//
//	auto majority = [](int&& a, int&& b, int&& c) {
//		return a & b | b & c | c & a;
//	};
//
//	if (majority(I & 1, J & 1, L & 1) & !!I & !!J & !!L) ans += 1 + 2 * (I & J & L & 1);
//
//	cout << ans << "\n";
//
//	return 0;
//}
