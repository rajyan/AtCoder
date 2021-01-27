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
//vector<int> factorize(lint N) {
//
//	vector<int> res;
//	for (lint i = 2; i * i <= N; i++) {
//		int cnt = 0;
//		while (N % i == 0) {
//			cnt++;
//			N /= i;
//		}
//		if (cnt) res.emplace_back(cnt);
//	}
//	if (N != 1) res.emplace_back(1);
//
//	return res;
//
//}
//
//int main() {
//
//	lint N;
//	cin >> N;
//
//	auto num = factorize(N);
//
//	int ans = 0;
//	for (auto& e : num) {
//		for (int i = 1; i < N; i++, ans++) {
//			e -= i;
//			if (e < 0) break;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
#include <cassert>
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
//vector<int> factorize(lint N) {
//
//	vector<int> res;
//	for (lint i = 2; i * i <= N; i++) {
//		int cnt = 0;
//		while (N % i == 0) {
//			cnt++;
//			N /= i;
//		}
//		if (cnt) res.emplace_back(cnt);
//	}
//	if (N != 1) res.emplace_back(1);
//
//	return res;
//
//}
//
//int main() {
//
//	lint N;
//	cin >> N;
//
//	auto num = factorize(N);
//
//	int ans = 0;
//	for (auto& e : num) {
//		for (int i = 1; i < N; i++, ans++) {
//			e -= i;
//			if (e < 0) break;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
