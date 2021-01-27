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
//	lint R, B, x, y;
//	cin >> R >> B >> x >> y;
//
//	auto judge = [&](auto key) {
//		lint r = R - key;
//		lint b = B - key;
//		return r >= 0 && b >= 0 && (r / (x - 1) + b / (y - 1) >= key);
//	};
//
//	auto bisearch = [&](auto f) {
//
//		auto ng = LINF;
//		auto ok = -1LL;
//
//		while (abs(ok - ng) > 1) {
//			auto mid = (ok + ng) / 2;
//
//			if (f(mid)) ok = mid;
//			else ng = mid;
//		}
//
//		return ok;
//	};
//
//	cout << bisearch(judge) << "\n";
//
//	return 0;
//}
