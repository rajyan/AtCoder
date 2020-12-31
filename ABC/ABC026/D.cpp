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
//	// f(t) = At + B sin(C pi t) - 100
//
//	int A, B, C;
//	cin >> A >> B >> C;
//
//	using ld = long double;
//	const ld pi = acosl(-1);
//	ld t = 100.0L / A;
//
//	// ニュートン法
//	for (int i = 0; i < 10000; i++) {
//
//		ld y_t = A * t + B * sinl(C * t * pi) - 100;
//		ld grad = A + B * C * pi * cosl(C * t * pi);
//
//		t = -y_t / grad + t;
//
//	}
//
//	cout << fixed << setprecision(10) << t << "\n";
//
//	return 0;
//}