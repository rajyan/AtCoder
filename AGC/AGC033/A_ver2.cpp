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
//struct pnt {
//	int x, y;
//	constexpr pnt(int x = 0, int y = 0) noexcept : x(x), y(y) {};
//	constexpr bool operator==(const pnt &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator<(const pnt & rhs) const noexcept { return x < rhs.x || x == rhs.x && y < rhs.y; }
//	constexpr pnt operator+(const pnt &rhs) const noexcept { return pnt(x + rhs.x, y + rhs.y); }
//	constexpr pnt operator-(const pnt &rhs) const noexcept { return pnt(x - rhs.x, y - rhs.y); }
//	constexpr pnt operator-() const noexcept { return pnt(-x, -y); }
//	constexpr int operator*(const pnt &rhs) const noexcept { return x * rhs.x + y * rhs.y; }
//	friend istream& operator>>(istream& is, pnt &p) { return is >> p.x >> p.y; }
//	friend ostream& operator<<(ostream& os, const pnt &p) { return os << p.x << " " << p.y << "\n"; }
//	constexpr pnt nor(const pnt &rhs) const noexcept { return pnt(rhs.y, -rhs.x); }
//	template<class T> T& operator[](vector<vector<T>> &v) { return v[x][y]; }
//};
//
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W;
//	cin >> H >> W;
//
//	vector<vector<char>> grid(H, vector<char>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> grid[i][j];
//
//	vector<vector<int>> visited(H, vector<int>(W, -1));
//	queue<pnt> que;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (grid[i][j] == '#') {
//				que.emplace(i, j);
//				visited[i][j] = 0;
//			}
//		}
//	}
//
//
//	auto in_grid = [&](pnt &p) {return 0 <= p.x&&p.x < H && 0 <= p.y&&p.y < W; };
//	int ans = 0;
//	while (!que.empty()) {
//
//		auto now = que.front();
//		que.pop();
//
//		vector<pnt> dxdy{ {-1,0},{1,0},{0,-1},{0,1} };
//		for (const auto &e : dxdy) {
//
//			auto next = now + e;
//			if (in_grid(next) && next[visited] == -1) {
//				next[visited] = now[visited] + 1;
//				chmax(ans, next[visited]);
//				que.emplace(next);
//			}
//
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}