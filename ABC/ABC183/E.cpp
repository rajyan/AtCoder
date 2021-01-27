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
//template<int Modulo = MOD>
//struct Mint {
//
//	lint val;
//	constexpr Mint(lint v = 0) noexcept : val(v% Modulo) { if (val < 0) val += Modulo; }
//
//	constexpr Mint& operator+=(const Mint& r) noexcept {
//		val += r.val;
//		if (val >= Modulo) val -= Modulo;
//		return *this;
//	}
//	constexpr Mint& operator-=(const Mint& r) noexcept {
//		val -= r.val;
//		if (val < 0) val += Modulo;
//		return *this;
//	}
//	constexpr Mint& operator*=(const Mint& r) noexcept {
//		val = val * r.val % Modulo;
//		return *this;
//	}
//	constexpr Mint& operator/=(const Mint& r) noexcept {
//		lint a = r.val, b = Modulo, u = 1, v = 0;
//		while (b) {
//			lint t = a / b;
//			a -= t * b; swap(a, b);
//			u -= t * v; swap(u, v);
//		}
//		val = val * u % Modulo;
//		if (val < 0) val += Modulo;
//		return *this;
//	}
//
//	constexpr Mint operator+(const Mint& r) const noexcept { return Mint(*this) += r; }
//	constexpr Mint operator-(const Mint& r) const noexcept { return Mint(*this) -= r; }
//	constexpr Mint operator*(const Mint& r) const noexcept { return Mint(*this) *= r; }
//	constexpr Mint operator/(const Mint& r) const noexcept { return Mint(*this) /= r; }
//
//	constexpr Mint operator-() const noexcept { return val ? Modulo - val : 0; }
//
//	constexpr bool operator==(const Mint& r) const noexcept { return val == r.val; }
//	constexpr bool operator!=(const Mint& r) const noexcept { return !((*this) == r); }
//	constexpr bool operator< (const Mint& r) const noexcept { return val < r.val; }
//
//	friend ostream& operator << (ostream& os, const Mint<Modulo>& x) noexcept { return os << x.val; }
//	friend istream& operator >> (istream& is, Mint<Modulo>& x) noexcept {
//		lint tmp; is >> tmp;
//		x = Mint(tmp);
//		return is;
//	}
//
//	constexpr Mint pow(lint n) const noexcept {
//		Mint res = 1, tmp = val;
//		while (n > 0) {
//			if (n & 1) res *= tmp;
//			tmp *= tmp;
//			n >>= 1;
//		}
//		return res;
//	}
//};
//
//using mint = Mint<>;
//
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
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
//	constexpr Point2D  operator* (const T& k) const noexcept { return { k * x, k * y }; }
//	constexpr Point2D  operator/ (const T& k) const noexcept { return { x / k, y / k }; }
//	constexpr Point2D& operator+=(const Point2D& rhs) noexcept { return ((*this) = (*this) + rhs); }
//	constexpr Point2D& operator-=(const Point2D& rhs) noexcept { return ((*this) = (*this) - rhs); }
//	constexpr Point2D& operator*=(const T& k) noexcept { return ((*this) = (*this) * k); }
//	constexpr Point2D& operator/=(const T& k) noexcept { return ((*this) = (*this) / k); }
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
//using pnt = Point2D<int>;
//
//
//int main() {
//
//	int H, W;
//	cin >> H >> W;
//
//	auto grid = make_vec(H, W, '.');
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> grid[i][j];
//
//	auto dp = make_vec(H, W, 3, 2, mint(0));
//	auto used = make_vec(H, W, 0);
//	queue<pnt> que;
//	que.emplace(0, 0);
//	dp[0][0][0][1] = 1;
//	dp[0][0][1][1] = 1;
//	dp[0][0][2][1] = 1;
//
//	auto in_grid = [&](pnt p) { return 0 <= p.x && p.x < H && 0 <= p.y && p.y < W; };
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			pnt now = pnt(i, j);
//			vector<pnt> dxdy{ {1,0},{0,1},{1,1} };
//			mint sum = now[dp][0][0] + now[dp][1][0] + now[dp][2][0];
//			for (int k = 0; k < 3; k++) {
//				pnt next = now + dxdy[k];
//				if (in_grid(next) && next[grid] == '.') {
//					next[dp][k][0] += sum + now[dp][k][1];
//					next[dp][k][1] += sum + now[dp][k][1];
//				}
//			}
//		}
//	}
//
//	pnt go(H, W);
//	go--;
//	cout << go[dp][0][0] + go[dp][1][0] + go[dp][2][0] << "\n";
//
//	return 0;
//}
