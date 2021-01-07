//#ifdef _DEBUG
//#include "../../../library/src/debug_template.cpp"
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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	int H, W;
//	cin >> H >> W;
//
//	auto grid = make_vec(H, W, '.');
//	auto in_grid = [&](pnt p) { return 0 <= p.x && p.x < H && 0 <= p.y && p.y < W; };
//	vector<vector<pnt>> alpha(26);
//	vector<int> used(26);
//	pnt st, go;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> grid[i][j];
//			char gij = grid[i][j];
//			if (gij == 'S') st = pnt(i, j);
//			if (gij == 'G') go = pnt(i, j);
//			if (islower(gij)) alpha[gij - 'a'].emplace_back(pnt(i, j));
//		}
//	}
//
//	auto cost = make_vec(H, W, INF);
//	st[cost] = 0;
//	priority_queue<pair<int, pnt>, vector<pair<int, pnt>>, greater<>> pq;
//	pq.emplace(st[cost], st);
//
//	while (!pq.empty()) {
//		auto [c, now] = pq.top();
//		pq.pop();
//		if (c > now[cost]) continue;
//
//		vector<pnt> dxdy{ {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
//		for (const auto& d : dxdy) {
//			pnt next = now + d;
//
//			if (in_grid(next) && next[grid] != '#' && chmin(next[cost], now[cost] + 1)) {
//				if (next == go) continue;
//				if (next[grid] == '.') {
//					pq.emplace(next[cost], next);
//				}
//				else {
//					pq.emplace(next[cost], next);
//					if (used[next[grid] - 'a']) continue;
//					used[next[grid] - 'a'] = 1;
//					for (auto& tele : alpha[next[grid] - 'a']) {
//						if (chmin(tele[cost], next[cost] + 1)) {
//							pq.emplace(tele[cost], tele);
//						}
//					}
//				}
//			}
//
//		}
//	}
//
//	cout << (go[cost] == INF ? -1 : go[cost]) << "\n";
//
//	return 0;
//}
