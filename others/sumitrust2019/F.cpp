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
//	lint t1, t2, a1, a2, b1, b2;
//	cin >> t1 >> t2 >> a1 >> a2 >> b1 >> b2;
//
//	if (a1 < b1) {
//		swap(a1, b1);
//		swap(a2, b2);
//	}
//
//	lint sub = t1 * b1 + t2 * b2 - t1 * a1 - t2 * a2;
//	if (sub == 0) {
//		cout << "infinity" << "\n";
//		return 0;
//	}
//
//	if (sub < 0) {
//		cout << "0" << "\n";
//		return 0;
//	}
//
//	lint A = t1 * (a1 - b1);
//	lint ans = A / sub * 2 + (A % sub != 0);
//
//	cout << ans << "\n";
//
//	return 0;
//}