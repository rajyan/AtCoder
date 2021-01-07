//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <unordered_map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//#ifdef _DEBUG
//#include "../../../library/src/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<class T = lint, class U = lint>
//struct Point2D {
//	T x, y;
//	constexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};
//	constexpr Point2D(pair<T, T> p) noexcept : x(p.first), y(p.second) {};
//	constexpr bool operator==(const Point2D& rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator!=(const Point2D& rhs) const noexcept { return !((*this) == rhs); }
//	constexpr bool operator< (const Point2D& rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
//	constexpr bool operator> (const Point2D& rhs) const noexcept { return rhs < (*this); }
//	constexpr bool operator<=(const Point2D& rhs) const noexcept { return !((*this) > rhs); }
//	constexpr bool operator>=(const Point2D& rhs) const noexcept { return !((*this) < rhs); }
//	constexpr Point2D  operator+ (const Point2D& rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }
//	constexpr Point2D  operator- (const Point2D& rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }
//	constexpr Point2D  operator* (const T& k) const noexcept { return { k * x, k * y }; }
//	constexpr Point2D  operator/ (const T& k) const noexcept { return { x / k, y / k }; }
//	constexpr Point2D& operator+=(const Point2D& rhs) noexcept { return ((*this) = (*this) + rhs); }
//	constexpr Point2D& operator-=(const Point2D& rhs) noexcept { return ((*this) = (*this) - rhs); }
//	constexpr Point2D& operator*=(const T& k) noexcept { return ((*this) = (*this) * k); }
//	constexpr Point2D& operator/=(const T& k) noexcept { return ((*this) = (*this) / k); }
//	constexpr Point2D  operator- () const noexcept { return { -x, -y }; }
//	constexpr T operator* (const Point2D& rhs) const noexcept { return x * rhs.x + y * rhs.y; }
//	constexpr Point2D nor() const noexcept { return { y, -x }; }
//	constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
//	friend istream& operator>>(istream& is, Point2D& p) { return is >> p.x >> p.y; }
//	friend ostream& operator<<(ostream& os, const Point2D& p) { return os << p.x << " " << p.y << "\n"; }
//	U& operator[](vector<vector<U>>& v) { return v[x][y]; }
//};
//
//using pnt = Point2D<>;
//
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	unordered_map<char, vector<pnt>> XY;
//	for (int it = 0; it < N; it++) {
//		pnt xy;
//		char d;
//		cin >> xy >> d;
//		XY[d].emplace_back(xy);
//	}
//
//	lint ans = LINF;
//	auto update = [&ans](auto &k, auto &r, pnt grad, int speed) {
//
//		sort(k.begin(), k.end(), [](auto p, auto q) { return p.x < q.x; });
//		sort(r.begin(), r.end(), [](auto p, auto q) { return p.x < q.x; });
//
//		unordered_map<lint, vector<lint>> lmap, rmap;
//		for (const auto& xy : k) lmap[xy * grad].emplace_back(xy.x);
//		for (const auto& xy : r) rmap[xy * grad].emplace_back(xy.x);
//
//		for (const auto& [key, vecl] : lmap) {
//			// �����ؕЂ̓_�����݂��邩���m�F����
//			auto it_rmap = rmap.find(key);
//			if (it_rmap != rmap.end()) {
//				// l,r��l<r�ƂȂ�悤�Ɏڎ�肵�Ă���
//				const auto it_end = it_rmap->second.end();
//				auto it = it_rmap->second.begin();
//				for (const auto& xl : vecl) {
//					while (it != it_end && *it < xl) it++;
//					if (it == it_end) break;
//					chmin(ans, (*it - xl) * speed);
//				}
//			}
//		}
//	};
//
//	update(XY['R'], XY['U'], pnt(1,  1), 10);
//	update(XY['D'], XY['L'], pnt(1,  1), 10);
//	update(XY['R'], XY['D'], pnt(1, -1), 10);
//	update(XY['U'], XY['L'], pnt(1, -1), 10);
//	update(XY['R'], XY['L'], pnt(0,  1),  5);
//	for (auto& xy : XY['U']) swap(xy.x, xy.y);
//	for (auto& xy : XY['D']) swap(xy.x, xy.y);
//	update(XY['U'], XY['D'], pnt(0,  1),  5);
//
//	if (ans == LINF) cout << "SAFE" << "\n";
//	else cout << ans << "\n";
//
//	return 0;
//}
//
