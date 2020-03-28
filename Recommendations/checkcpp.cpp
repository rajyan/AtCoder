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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
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
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//lint calc(string s) {
//	lint res = 1;
//	for (const auto &c : s) if (c != '0')res *= c - '0';
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//	int n; cin >> n;
//	//for (lint n = 2; n < 1000000000; n++) {
//		string m = to_string(n);
//		lint ans = calc(m);
//		for (auto it = m.rbegin(); it != m.rend(); it++) {
//			char o = *it;
//			*it = '9';
//			lint c = stol(m);
//			if (c < n) chmax(ans, calc(m));
//			else if(o != '0') {
//				*it = o - 1;
//				chmax(ans, calc(m));
//				*it = '9';
//			}
//		}
//	//}
//		cout << ans << "\n";
//
//	return 0;
//}