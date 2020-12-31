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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint n, s;
//	cin >> n >> s;
//
//	auto check = [&](lint b) {
//		if (b < 2) return false;
//		lint tmp = n, sum = 0;
//		while (tmp) {
//			sum += tmp % b;
//			tmp /= b;
//		}
//		return sum == s;
//	};
//
//	auto end = [&](lint b) {
//		cout << b << "\n";
//		exit(0);
//	};
//
//	if (n < s) end(-1);
//	else if (n == s) end(n + 1);
//
//	for (int i = 2; i < 320000; i++) if (check(i)) end(i);
//	for (int i = 320000; i >= 1; i--) {
//		lint b = (n - s) / i + 1;
//		if (check(b)) end(b);
//	}
//
//	end(-1);
//
//}
