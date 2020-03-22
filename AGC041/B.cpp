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
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
//	return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint n, m, v, p;
//	cin >> n >> m >> v >> p;
//
//	vector<lint> a(n);
//	for (lint i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	sort(a.begin(), a.end());
//
//	auto judge = [&](auto idx) {
//		
//		
//		if (a[idx] + m < a[n - p]) {
//			return false;
//		}
//		else {
//
//			lint rem = v - (p + idx);
//			lint sum = 0;
//			lint A = a[idx] + m;
//
//			for (lint i = idx + 1; i <= n - p; i++) {
//				sum += max(A - a[i], 0LL);
//			}
//			DMP(idx, sum, rem, m);
//			return sum >= rem * m;
//
//		}
//
//	};
//
//	auto binary_search = [&](auto f) {
//
//		lint ng = -1LL;
//		lint ok = n - p + 1;
//
//		while (abs(ok - ng) > 1) {
//			lint mid = (ok + ng) / 2;
//
//			if (f(mid)) ok = mid;
//			else ng = mid;
//		}
//
//		return ok;
//	};
//
//	lint ans = binary_search(judge);
//	cout << n - ans << "\n";
//
//	return 0;
//}