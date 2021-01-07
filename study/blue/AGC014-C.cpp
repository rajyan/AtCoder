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
//#include <unordered_map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//#include <bitset>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//struct init {
//    init() {
//        cin.tie(nullptr); ios::sync_with_stdio(false);
//        cout << fixed << setprecision(10);
//    }
//} init_;
//
//template<class T>
//struct Point2D {
//    T x, y;
//    constexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};
//    constexpr Point2D(pair<T, T>& p) noexcept : x(p.first), y(p.second) {};
//    constexpr bool operator==(const Point2D& rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//    constexpr bool operator!=(const Point2D& rhs) const noexcept { return !((*this) == rhs); }
//    constexpr bool operator< (const Point2D& rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
//    constexpr bool operator> (const Point2D& rhs) const noexcept { return rhs < (*this); }
//    constexpr bool operator<=(const Point2D& rhs) const noexcept { return !((*this) > rhs); }
//    constexpr bool operator>=(const Point2D& rhs) const noexcept { return !((*this) < rhs); }
//    constexpr Point2D  operator+ (const Point2D& rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }
//    constexpr Point2D  operator- (const Point2D& rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }
//    constexpr Point2D  operator* (const T& k) const noexcept { return { k * x, k * y }; }
//    constexpr Point2D  operator/ (const T& k) const noexcept { return { x / k, y / k }; }
//    constexpr Point2D& operator+=(const Point2D& rhs) noexcept { return ((*this) = (*this) + rhs); }
//    constexpr Point2D& operator-=(const Point2D& rhs) noexcept { return ((*this) = (*this) - rhs); }
//    constexpr Point2D& operator*=(const T& k) noexcept { return ((*this) = (*this) * k); }
//    constexpr Point2D& operator/=(const T& k) noexcept { return ((*this) = (*this) / k); }
//    constexpr Point2D  operator- () const noexcept { return { -x, -y }; }
//    constexpr T operator* (const Point2D& rhs) const noexcept { return x * rhs.x + y * rhs.y; }
//    constexpr Point2D nor() const noexcept { return { y, -x }; }
//    constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
//    friend istream& operator>>(istream& is, Point2D& p) { return is >> p.x >> p.y; }
//    friend ostream& operator<<(ostream& os, const Point2D& p) { return os << p.x; }
//    template<class U> U& operator[](vector<vector<U>>& v) { return v[x][y]; }
//};
//
//using pnt = Point2D<lint>;
//
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//    int h, w, k;
//    cin >> h >> w >> k;
//
//    vector<vector<char>> grid(h, vector<char>(w));
//    pnt s;
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            cin >> grid[i][j];
//            if (grid[i][j] == 'S') s = pnt(i, j);
//        }
//    }
//
//    using type = pair<pnt, pnt>;
//    priority_queue<type, vector<type>, greater<type>> pq;
//    vector<vector<pnt>> cost(h, vector<pnt>(w, { LINF, 0 }));
//    pq.emplace(pnt(0, 0), s);
//    while (!pq.empty()) {
//        auto [c, now] = pq.top();
//        pq.pop();
//        if (now[cost] <= c) continue;
//        DMP(c, now);
//        chmin(now[cost], c);
//
//        vector<int> dx{ 1,-1,0,0 };
//        vector<int> dy{ 0,0,1,-1 };
//        for (int i = 0; i < 4; i++) {
//            pnt next = now + pnt(dx[i], dy[i]);
//            if (next.x < 0 || next.x >= h || next.y < 0 || next.y >= w) continue;
//            if (next[cost] <= c) continue;
//            if (next[grid] == '#') {
//                if (c.x / k * k >= c.y + 1) pq.emplace(now[cost] + pnt(1, 1), next);
//                else pq.emplace(c + pnt(k - c.x % k + 1, 0), next);
//            }
//            else pq.emplace(c + pnt(1, 0), next);
//        }
//    }
//
//    DMP(cost);
//
//    lint ans = LINF;
//    for (int i = 0; i < h; i++) {
//        chmin(ans, (cost[i][0].x - 1) / k);
//        chmin(ans, (cost[i][w - 1].x - 1) / k);
//    }
//    for (int j = 0; j < w; j++) {
//        chmin(ans, (cost[0][j].x - 1) / k);
//        chmin(ans, (cost[h - 1][j].x - 1) / k);
//    }
//
//    cout << ans + 1 << endl;
//}
