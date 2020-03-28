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
//lint gcd(lint a, lint b) { return b ? gcd(b, a%b) : a; }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint N, M;
//	cin >> N >> M;
//
//	vector<lint> a(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//
//	lint lcm_a = 1;
//	for (lint i = 0; i < N; i++) {
//		lint tmp = gcd(lcm_a, a[i]);
//		lcm_a = lcm_a * a[i] / tmp;
//		if (lcm_a / 2 > M) {
//			cout << 0 << "\n";
//			return 0;
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (lcm_a / a[i] % 2 == 0) {
//			cout << 0 << "\n";
//			return 0;
//		}
//	}
//
//	DMP(lcm_a);
//	cout << (M - lcm_a / 2) / lcm_a + 1 << "\n";
//
//	return 0;
//}