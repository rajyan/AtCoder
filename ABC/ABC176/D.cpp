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
//	friend ostream& operator<<(ostream& os, const Point2D& p) { return os << p.x << " " << p.y; }
//	template<class U> U& operator[](vector<vector<U>>& v) { return v[x][y]; }
//};
//
//using pnt = Point2D<lint>;
//
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	int H, W;
//	cin >> H >> W;
//
//	pnt st, go;
//	cin >> st >> go;
//	st -= pnt(1, 1);
//	go -= pnt(1, 1);
//
//	vector<vector<char>> grid(H, vector<char>(W));
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> grid[i][j];
//		}
//	}
//
//	auto in_grid = [&](auto p) { return 0 <= p.x && 0 <= p.y && p.x < H&& p.y < W; };
//
//	priority_queue<pair<int, pnt>, vector<pair<int, pnt>>, greater<pair<int, pnt>>> que;
//	que.emplace(0, st);
//	vector<vector<int>> cost(H, vector<int>(W, INF));
//	st[cost] = 0;
//	vector<vector<int>> used(H, vector<int>(W, INF));
//	while (!que.empty()) {
//
//		auto [nowc, now] = que.top();
//		que.pop();
//
//		if (nowc > now[cost]) continue;
//
//		vector<pnt> dxdy{ {1,0},{0,1},{-1,0},{0,-1} };
//		for (const auto& d : dxdy) {
//			auto next = now + d;
//			if (in_grid(next) && next[grid] != '#' && chmin(next[cost], now[cost])) {
//				que.emplace(next[cost], next);
//			}
//		}
//
//		for (int i = -2; i <= 2; i++) {
//			for (int j = -2; j <= 2; j++) {
//				auto d = pnt(i, j);
//				auto next = now + d;
//				if (in_grid(next) && next[grid] != '#' && chmin(next[cost], now[cost] + 1)) {
//					que.emplace(next[cost], next);
//				}
//			}
//		}
//
//	}
//
//	cout << ((go[cost] == INF) ? -1 : go[cost]) << "\n";
//
//	return 0;
//}
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
//	friend ostream& operator<<(ostream& os, const Point2D& p) { return os << p.x << " " << p.y; }
//	template<class U> U& operator[](vector<vector<U>>& v) { return v[x][y]; }
//};
//
//using pnt = Point2D<lint>;
//
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	int H, W;
//	cin >> H >> W;
//
//	pnt st, go;
//	cin >> st >> go;
//	st -= pnt(1, 1);
//	go -= pnt(1, 1);
//
//	vector<vector<char>> grid(H, vector<char>(W));
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> grid[i][j];
//		}
//	}
//
//	auto in_grid = [&](auto p) { return 0 <= p.x && 0 <= p.y && p.x < H&& p.y < W; };
//
//	priority_queue<pair<int, pnt>, vector<pair<int, pnt>>, greater<pair<int, pnt>>> que;
//	que.emplace(0, st);
//	vector<vector<int>> cost(H, vector<int>(W, INF));
//	st[cost] = 0;
//	vector<vector<int>> used(H, vector<int>(W, INF));
//	while (!que.empty()) {
//
//		auto [nowc, now] = que.top();
//		que.pop();
//
//		if (nowc > now[cost]) continue;
//
//		vector<pnt> dxdy{ {1,0},{0,1},{-1,0},{0,-1} };
//		for (const auto& d : dxdy) {
//			auto next = now + d;
//			if (in_grid(next) && next[grid] != '#' && chmin(next[cost], now[cost])) {
//				que.emplace(next[cost], next);
//			}
//		}
//
//		for (int i = -2; i <= 2; i++) {
//			for (int j = -2; j <= 2; j++) {
//				auto d = pnt(i, j);
//				auto next = now + d;
//				if (in_grid(next) && next[grid] != '#' && chmin(next[cost], now[cost] + 1)) {
//					que.emplace(next[cost], next);
//				}
//			}
//		}
//
//	}
//
//	cout << ((go[cost] == INF) ? -1 : go[cost]) << "\n";
//
//	return 0;
//}
