//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
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
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<class T>
//struct Point2D {
//	T x, y;
//	constexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};
//	constexpr Point2D(pair<T, T>& p) noexcept : x(p.first), y(p.second) {};
//	constexpr bool operator==(const Point2D& rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator!=(const Point2D& rhs) const noexcept { return !((*this) == rhs); }
//	constexpr bool operator< (const Point2D& rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
//	constexpr bool operator> (const Point2D& rhs) const noexcept { return rhs < (*this); }
//	constexpr bool operator<=(const Point2D& rhs) const noexcept { return !((*this) > rhs); }
//	constexpr bool operator>=(const Point2D& rhs) const noexcept { return !((*this) < rhs); }
//	constexpr Point2D  operator+ (const Point2D& rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }
//	constexpr Point2D  operator- (const Point2D& rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }
//	constexpr Point2D  operator* (const T& d1) const noexcept { return { d1 * x, d1 * y }; }
//	constexpr Point2D  operator/ (const T& d1) const noexcept { return { x / d1, y / d1 }; }
//	constexpr Point2D& operator+=(const Point2D& rhs) noexcept { return ((*this) = (*this) + rhs); }
//	constexpr Point2D& operator-=(const Point2D& rhs) noexcept { return ((*this) = (*this) - rhs); }
//	constexpr Point2D& operator*=(const T& d1) noexcept { return ((*this) = (*this) * d1); }
//	constexpr Point2D& operator/=(const T& d1) noexcept { return ((*this) = (*this) / d1); }
//	constexpr Point2D& operator--(int) noexcept { return ((*this) -= Point2D(1, 1)); };
//	constexpr Point2D& operator++(int) noexcept { return ((*this) += Point2D(1, 1)); };
//	constexpr Point2D  operator- () const noexcept { return { -x, -y }; }
//	constexpr T operator* (const Point2D& rhs) const noexcept { return x * rhs.x + y * rhs.y; }
//	constexpr Point2D nor() const noexcept { return { y, -x }; }
//	constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
//	friend istream& operator>>(istream& is, Point2D& p) { return is >> p.x >> p.y; }
//	friend ostream& operator<<(ostream& os, const Point2D& p) { return os << p.x << " " << p.y; }
//	template<class U> U& operator[](vector<vector<U>>& v) { return v[x][y]; }
//};
//
//using pnt = Point2D<lint>;
//
//void coxit(string ans) {
//	cout << ans << "\n";
//	exit(0);
//}
//
//int main() {
//
//	pnt p, q;
//	cin >> p >> q;
//
//	if (p == q) coxit("0");
//
//	pnt l(1, 1), r(1, -1);
//	pnt sub = p - q;
//	if (p * l == q * l || p * r == q * r || abs(sub.x) + abs(sub.y) <= 3) coxit("1");
//
//	if (~(sub.x + sub.y) & 1) coxit("2");
//
//	vector<pnt> d1{ {-3,0},{-1,0},{1,0},{3,0} };
//	if (any_of(d1.begin(), d1.end(), 
//		[&](pnt d) {
//			return (p + d) * l == q * l || (p + d) * r == q * r;
//		}
//	)) coxit("2");
//
//	vector<pnt> d2{ {-3,0},{3,0},{0,-3},{0,3} };
//	if (any_of(d2.begin(), d2.end(),
//		[&](pnt d) {
//			return abs((sub + d).x) + abs((sub + d).y) <= 3;
//		}
//	)) coxit("2");
//
//	coxit("3");
//
//	return 0;
//}
