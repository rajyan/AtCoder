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
//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
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
//template<class T = int>
//struct Point2D {
//	T x, y;
//	constexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};
//	constexpr Point2D(pair<T, T> p) noexcept : x(p.first), y(p.second) {};
//	constexpr bool operator==(const Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator!=(const Point2D &rhs) const noexcept { return !((*this) == rhs); }
//	constexpr bool operator< (const Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
//	constexpr bool operator> (const Point2D &rhs) const noexcept { return rhs < (*this); }
//	constexpr bool operator<=(const Point2D &rhs) const noexcept { return !((*this) > rhs); }
//	constexpr bool operator>=(const Point2D &rhs) const noexcept { return !((*this) < rhs); }
//	constexpr Point2D  operator+ (const Point2D &rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }
//	constexpr Point2D  operator- (const Point2D &rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }
//	constexpr Point2D  operator* (const T &k) const noexcept { return { k * x, k * y }; }
//	constexpr Point2D  operator/ (const T &k) const noexcept { return { x / k, y / k }; }
//	constexpr Point2D& operator+=(const Point2D &rhs) noexcept { return ((*this) = (*this) + rhs); }
//	constexpr Point2D& operator-=(const Point2D &rhs) noexcept { return ((*this) = (*this) - rhs); }
//	constexpr Point2D& operator*=(const T &k) noexcept { return ((*this) = (*this) * k); }
//	constexpr Point2D& operator/=(const T &k) noexcept { return ((*this) = (*this) / k); }
//	constexpr Point2D  operator- () const noexcept { return { -x, -y }; }
//	constexpr T operator* (const Point2D &rhs) const noexcept { return x * rhs.x + y * rhs.y; }
//	constexpr Point2D nor() const noexcept { return { y, -x }; }
//	constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
//	friend istream& operator>>(istream& is, Point2D &p) { return is >> p.x >> p.y; }
//	friend ostream& operator<<(ostream& os, const Point2D &p) { return os << p.x << " " << p.y << "\n"; }
//	template<class U> U& operator[](vector<vector<U>> &v) { return v[x][y]; }
//};
//
//using pnt = Point2D<>;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	constexpr int H = 440;
//	constexpr int W = H;
//	constexpr int offset = H / 2;
//	int N;
//	cin >> N;
//
//	vector<vector<char>> grid(H, vector<char>(W, '.'));
//
//	pnt start = {offset, offset}, goal;
//	cin >> goal;
//	goal += {offset, offset};
//
//	start[grid] = 'S';
//	goal[grid] = 'G';
//
//	for (int i = 0; i < N; i++) {
//		pnt xy;
//		cin >> xy;
//		xy += {offset, offset};
//		xy[grid] = '#';
//	}
//
//	DMP(grid);
//
//	auto inGrid = [&](pnt p) {
//		return 0 <= p.x && p.x < W && 0 <= p.y && p.y < H;
//	};
//
//	vector<vector<int>> visited(H, vector<int>(W, INF));
//	vector<pnt> dxdy{ {-1,0}, {1,0}, {0,-1}, {0,1}, {1,1}, {-1,1} };
//	queue<pair<pnt, int>> que;
//	start[visited] = 1;
//	que.emplace(start, 0);
//	while (!que.empty()) {
//
//		pnt now; int cnt;
//		tie(now, cnt) = que.front(); que.pop();
//		cnt++;
//
//		for (const auto &dp : dxdy) {
//			pnt next = now + dp;
//
//			if (inGrid(next) && next[visited] > cnt && next[grid] != '#') {
//				next[visited] = cnt;
//				que.emplace(next, cnt);
//			}
//		}
//	}
//	DMP(visited);
//
//	if (goal[visited] == INF) cout << -1 << "\n";
//	else cout << goal[visited] << "\n";
//
//}