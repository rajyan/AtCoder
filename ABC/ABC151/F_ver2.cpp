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
//#include <random>
//#include <complex>
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
//using ld = long double;
//using pnt = complex<ld>;
//constexpr ld EPS = 1e-12;
//
//template<class T>
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//ld cross(const pnt &a, const pnt &b) { return a.real() * b.imag() - a.imag() * b.real(); }
//
//template <class iter>
//std::pair<pnt, ld> min_ball(iter left, iter right, int seed = 1333) {
//	const int n = right - left;
//
//	assert(n >= 1);
//	if (n == 1) {
//		return { *left, ld(0) };
//	}
//
//	std::mt19937 mt(seed);
//	std::shuffle(left, right, mt);
//	// std::random_shuffle(left, right); // simple but deprecated
//
//	iter ps = left;
//	using circle = std::pair<pnt, ld>;
//
//	auto make_circle_3 = [](const pnt &a, const pnt &b, const pnt &c) -> circle {
//		ld A = std::norm(b - c), B = std::norm(c - a), C = std::norm(a - b),
//			S = cross(b - a, c - a);
//		pnt p = (A * (B + C - A) * a + B * (C + A - B) * b + C * (A + B - C) * c) / (4 * S * S);
//		ld r2 = std::norm(p - a);
//		return { p, r2 };
//	};
//
//	auto make_circle_2 = [](const pnt &a, const pnt &b) -> circle {
//		pnt c = (a + b) / (ld)2;
//		ld r2 = std::norm(a - c);
//		return { c, r2 };
//	};
//
//	auto in_circle = [](const pnt &a, const circle &c) -> bool {
//		return std::norm(a - c.first) <= c.second + EPS;
//	};
//
//	circle c = make_circle_2(ps[0], ps[1]);
//
//	// MiniDisc
//	for (int i = 2; i < n; ++i) {
//		if (!in_circle(ps[i], c)) {
//			// MiniDiscWithPoint
//			c = make_circle_2(ps[0], ps[i]);
//			for (int j = 1; j < i; ++j) {
//				if (!in_circle(ps[j], c)) {
//					// MiniDiscWith2Points
//					c = make_circle_2(ps[i], ps[j]);
//					for (int k = 0; k < j; ++k) {
//						if (!in_circle(ps[k], c)) {
//							c = make_circle_3(ps[i], ps[j], ps[k]);
//						}
//					}
//				}
//			}
//		}
//	}
//	return c;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<pnt> xy(N);
//	for (int i = 0; i < N; i++) {
//		ld x, y;
//		cin >> x >> y;
//		xy[i] = { x,y };
//	}
//	cout << setprecision(20) << sqrt(min_ball<decltype(xy.begin())>(xy.begin(), xy.end()).second) << "\n";
//
//	return 0;
//}