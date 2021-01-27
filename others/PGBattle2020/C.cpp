#ifdef _DEBUG
#include "../../../library/src/debug_template.hpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

template<class T>
vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
template<class... Size>
auto make_vec(size_t s, Size... tail) {
	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
}

template<class T>
struct Point2D {
	T x, y;
	constexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};
	constexpr Point2D(pair<T, T>& p) noexcept : x(p.first), y(p.second) {};
	constexpr bool operator==(const Point2D& rhs) const noexcept { return x == rhs.x && y == rhs.y; }
	constexpr bool operator!=(const Point2D& rhs) const noexcept { return !((*this) == rhs); }
	constexpr bool operator< (const Point2D& rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
	constexpr bool operator> (const Point2D& rhs) const noexcept { return rhs < (*this); }
	constexpr bool operator<=(const Point2D& rhs) const noexcept { return !((*this) > rhs); }
	constexpr bool operator>=(const Point2D& rhs) const noexcept { return !((*this) < rhs); }
	constexpr Point2D  operator+ (const Point2D& rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }
	constexpr Point2D  operator- (const Point2D& rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }
	constexpr Point2D  operator* (const T& k) const noexcept { return { k * x, k * y }; }
	constexpr Point2D  operator/ (const T& k) const noexcept { return { x / k, y / k }; }
	constexpr Point2D& operator+=(const Point2D& rhs) noexcept { return ((*this) = (*this) + rhs); }
	constexpr Point2D& operator-=(const Point2D& rhs) noexcept { return ((*this) = (*this) - rhs); }
	constexpr Point2D& operator*=(const T& k) noexcept { return ((*this) = (*this) * k); }
	constexpr Point2D& operator/=(const T& k) noexcept { return ((*this) = (*this) / k); }
	constexpr Point2D  operator- () const noexcept { return { -x, -y }; }
	constexpr T operator* (const Point2D& rhs) const noexcept { return x * rhs.x + y * rhs.y; }
	constexpr Point2D nor() const noexcept { return { y, -x }; }
	constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
	friend istream& operator>>(istream& is, Point2D& p) { return is >> p.x >> p.y; }
	friend ostream& operator<<(ostream& os, const Point2D& p) { return os << p.x << " " << p.y; }
	template<class U> U& operator[](vector<vector<U>>& v) { return v[x][y]; }
};

using pnt = Point2D<lint>;

int main() {

	int H, W;
	cin >> H >> W;

	auto grid = make_vec(H, W, '0');
	auto memo = make_vec(H, W, 4, 0);

	pnt st, go;
	cin >> st >> go;
	st -= pnt(1, 1);
	go -= pnt(1, 1);

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> grid[i][j];
		}
	}

	auto in_grid = [&H, &W](auto p) {
		return 0 <= p.x && p.x < H && 0 <= p.y && p.y < W;
	};

	// l,u,r,d
	vector<pnt> dxdy{ {-1,0}, {0,1}, {1,0}, {0,-1} };
	queue<pnt> q;
	q.emplace(st);
	int d = 1;
	int ans = 0;
	while (!q.empty()) {

		auto now = q.front();
		q.pop();

		if (now == go) {
			cout << ans << "\n";
			return 0;
		}

		DMP(now);

		for (int i = 0; i < 4; i++) {

			int nd = (d + 3 + i) % 4;
			auto next = now + dxdy[nd];
			if (in_grid(next) && next[grid] == '.' && !next[memo][nd]) {
				next[memo][nd] = 1;
				d = nd;
				q.emplace(next);
				ans++;
				break;
			}
		}

	}

	cout << -1 << "\n";

	return 0;
}
