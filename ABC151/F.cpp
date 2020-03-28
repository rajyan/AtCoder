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
//using ld = long double;
//constexpr ld EPS = 1e-12;
//
//struct pnt {
//	ld x, y;
//	constexpr pnt(ld x = 0, ld y = 0) noexcept : x(x), y(y) {};
//	constexpr bool operator==(const pnt &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator<(const pnt & rhs) const noexcept { return x < rhs.x || x == rhs.x && y < rhs.y; }
//	constexpr pnt operator+(const pnt &rhs) const noexcept { return pnt(x + rhs.x, y + rhs.y); }
//	constexpr pnt operator-(const pnt &rhs) const noexcept { return pnt(x - rhs.x, y - rhs.y); }
//	constexpr pnt operator-() const noexcept { return pnt(-x, -y); }
//	constexpr pnt operator*(const ld &k) const noexcept { return pnt(k * x, k * y); }
//	friend istream& operator>>(istream& is, pnt &p) { return is >> p.x >> p.y; }
//	friend ostream& operator<<(ostream& os, const pnt &p) { return os << p.x << " " << p.y << "\n"; }
//	template<class T> T& operator[](vector<vector<T>> &v) { return v[x][y]; }
//};
//
//ld dist(const pnt &p, const pnt &q) { return hypot(p.x - q.x, p.y - q.y); };
//pnt mid(const pnt &p, const pnt &q) { return pnt((p.x + q.x) / 2, (p.y + q.y) / 2); };
//pnt nor(const pnt &p) { return pnt(p.y, -p.x); }
//
//template<class T>
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
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
//	for (int i = 0; i < N; i++) cin >> xy[i].x >> xy[i].y;
//
//	auto circle2 = [&](pnt &p, pnt &q) {
//
//		pnt m = mid(p, q);
//		ld radius = dist(p, m);
//
//		if (all_of(xy.begin(), xy.end(), [&](pnt &_p) {
//			return dist(m, _p) <= radius + EPS;
//		})) return radius;
//		else return ld(INF);
//
//	};
//
//	auto circle3 = [&](pnt &p, pnt &q, pnt &r) {
//
//		pnt m1 = mid(p, q), m2 = mid(q, r);
//		pnt nor1 = nor(p - q), nor2 = nor(q - r);
//
//		ld k = (nor2.y*m2.x - nor2.x*m2.y - (nor2.y*m1.x - nor2.x*m1.y)) / (nor1.x*nor2.y - nor1.y*nor2.x);
//		pnt center = m1 + nor1 * k;
//
//		ld radius = dist(p, center);
//
//		if(all_of(xy.begin(), xy.end(), [&](pnt &_p) {
//			return dist(center, _p) <= radius + EPS;
//		})) return radius;
//		else return ld(INF);
//
//	};
//
//	ld ans = INF;
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//			chmin(ans, circle2(xy[i], xy[j]));
//			for (int k = j + 1; k < N; k++) {
//				chmin(ans, circle3(xy[i], xy[j], xy[k]));
//			}
//		}
//	}
//
//	cout << setprecision(20) << ans << "\n";
//
//	return 0;
//}