#ifdef _DEBUG
#include "../../library/library/debug_template.cpp"
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

	int H, W, N, M;
	cin >> H >> W >> N >> M;

	vector<pnt> AB(N), CD(M);
	for (int i = 0; i < N; i++) cin >> AB[i];
	for (int i = 0; i < N; i++) AB[i] -= pnt(1, 1);
	for (int i = 0; i < M; i++) cin >> CD[i];
	for (int i = 0; i < M; i++) CD[i] -= pnt(1, 1);

	auto grid_r = make_vec(H, W, '.');
	for (int i = 0; i < M; i++) CD[i][grid_r] = '#';
	auto grid_c = grid_r;
	auto in_grid = [&](pnt p) {return 0 <= p.x && p.x < H && 0 <= p.y && p.y < W; };

	for (int i = 0; i < N; i++) {
		pnt now = AB[i];
		while (in_grid(now) && now[grid_r] == '.') {
			now[grid_r] = '*';
			now += pnt(1, 0);
		}
		now = AB[i] + pnt(-1, 0);
		while (in_grid(now) && now[grid_r] == '.') {
			now[grid_r] = '*';
			now += pnt(-1, 0);
		}
		now = AB[i];
		while (in_grid(now) && now[grid_c] == '.') {
			now[grid_c] = '*';
			now += pnt(0, 1);
		}
		now = AB[i] + pnt(0, -1);
		while (in_grid(now) && now[grid_c] == '.') {
			now[grid_c] = '*';
			now += pnt(0, -1);
		}
	}

	int ans = 0;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			ans += grid_r[i][j] == '*' || grid_c[i][j] == '*';
		}
	}

	cout << ans << "\n";

	return 0;
}
