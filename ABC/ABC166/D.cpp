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
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int X;
//	cin >> X;
//
//	auto div = divisor(X);
//
//	for (const auto &e : div) {
//		
//		for (lint i = -5000000; i < 5000000; i++) {
//
//			lint p = i + e;
//			lint q = i - e;
//
//			if (i*i*i*i*i - p * p*p*p*p == X) {
//				cout << i << " " << p << "\n";
//				return 0;
//			}
//			if (i*i*i*i*i - q * q*q*q*q == X) {
//				cout << i << " " << q << "\n";
//				return 0;
//			}
//
//		}
//
//	}
//
//	assert(false);
//	return 0;
//}