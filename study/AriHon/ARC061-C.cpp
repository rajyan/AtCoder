//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
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
//lint pow(lint n, lint a = 10) {
//	lint res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a;
//		a = a * a;
//		n >>= 1;
//	}
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint s;
//	cin >> s;
//
//	lint ans = 0, sz = to_string(s).size() - 1;
//	for (int bit = 0b0; bit < (1 << sz); bit++) {
//
//		lint tmp = s, div = 10;
//		for (int i = 0; i < sz; i++) {
//			if (bit & (1 << i)) {
//				ans += tmp % div;
//				tmp /= div;
//				div = 1;
//			}
//			div *= 10;
//		}
//		ans += tmp;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}