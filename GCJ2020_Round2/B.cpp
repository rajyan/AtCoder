#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
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

#ifdef _DEBUG
#include "../../../library/library/debug_template.cpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

template<class T = int, class U = lint>
struct Point2D {
	T x, y;
	constexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};
	constexpr Point2D(pair<T, T> p) noexcept : x(p.first), y(p.second) {};
	constexpr bool operator==(const Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
	constexpr bool operator!=(const Point2D &rhs) const noexcept { return !((*this) == rhs); }
	constexpr bool operator< (const Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
	constexpr bool operator> (const Point2D &rhs) const noexcept { return rhs < (*this); }
	constexpr bool operator<=(const Point2D &rhs) const noexcept { return !((*this) > rhs); }
	constexpr bool operator>=(const Point2D &rhs) const noexcept { return !((*this) < rhs); }
	constexpr Point2D  operator+ (const Point2D &rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }
	constexpr Point2D  operator- (const Point2D &rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }
	constexpr Point2D  operator* (const T &k) const noexcept { return { k * x, k * y }; }
	constexpr Point2D  operator/ (const T &k) const noexcept { return { x / k, y / k }; }
	constexpr Point2D& operator+=(const Point2D &rhs) noexcept { return ((*this) = (*this) + rhs); }
	constexpr Point2D& operator-=(const Point2D &rhs) noexcept { return ((*this) = (*this) - rhs); }
	constexpr Point2D& operator*=(const T &k) noexcept { return ((*this) = (*this) * k); }
	constexpr Point2D& operator/=(const T &k) noexcept { return ((*this) = (*this) / k); }
	constexpr Point2D  operator- () const noexcept { return { -x, -y }; }
	constexpr T operator* (const Point2D &rhs) const noexcept { return x * rhs.x + y * rhs.y; }
	constexpr Point2D nor() const noexcept { return { y, -x }; }
	constexpr double hypot() const noexcept { return ::hypot(x, y); }
	friend istream& operator>>(istream& is, Point2D &p) { return is >> p.x >> p.y; }
	friend ostream& operator<<(ostream& os, const Point2D &p) { return os << p.x << " " << p.y << "\n"; }
	U& operator[](vector<vector<U>> &v) { return v[x][y]; }
};

using pnt = Point2D<>;

template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

lint gcd(lint a, lint b) { return b ? gcd(b, a%b) : a; }

int main() {

	int Q;
	cin >> Q;
	
	for (int q = 0; q < Q; q++) {

		int N;
		cin >> N;
		vector<pnt> XY(N);
		for (int i = 0; i < N; i++) cin >> XY[i];

		map<pnt, map<lint, set<int>>> mp;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				
				pnt sub = XY[i] - XY[j];
				if (sub < pnt(0, 0)) sub = -sub;

				lint g = gcd(sub.x, sub.y);
				sub /= g;

				lint id = sub.nor() * XY[i];

				mp[sub][id].emplace(i);
				mp[sub][id].emplace(j);

			}
		}

		int ans = 1;
		for (const auto &e : mp) {
			int sum = 0;
			bool even = true;
			for (const auto &ee : e.second) {
				int sz = ee.second.size();
				if (sz >= 2) {
					sum += sz;
					even ^= (sz & 1);
				}
			}
			chmax(ans, min(sum + 1 + even, N));
		}

		cout << "Case #" << q + 1 << ": " << ans << endl;
	}

	return 0;
}

