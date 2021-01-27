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
//template<class T>
//vector<T> divisor(const T n) {
//	vector<T> res;
//	for (T i = 1; i * i <= n; i++) {
//		if (n % i == 0) {
//			res.emplace_back(i);
//			if (i * i != n) res.emplace_back(n / i);
//		}
//	}
//	sort(res.begin(), res.end());
//	return res;
//}
//
//int main() {
//
//	lint N;
//	cin >> N;
//
//	auto d = divisor(N);
//
//	for (const auto& e : d) cout << e << "\n";
//
//	return 0;
//}
