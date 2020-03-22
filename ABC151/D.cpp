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
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++)  cin >> grid[i][j];
//	DMP(grid);
//
//	auto shortest_path = [&](pnt st) {
//
//		if (st[grid] == '#') return 0;
//		
//		queue<pnt> que;
//		que.emplace(st);
//		vector<vector<int>> used(H, vector<int>(W, INF));
//		st[used] = 0;
//
//		int res = 0;
//		while (!que.empty()) {
//
//			pnt now = que.front();
//			que.pop();
//			chmax(res, now[used]);
//
//			vector<pnt> dxdy{ {-1,0},{1,0},{0,1},{0,-1} };
//			for (const auto &d : dxdy) {
//				pnt next = now + d;
//				if (0 <= next.x && next.x < H && 0 <= next.y && next.y < W && next[grid] == '.' && next[used] == INF) {
//					que.emplace(next);
//					next[used] = now[used] + 1;
//				}
//			}
//
//		}
//		DMP(used);
//		return res;
//
//	};
//
//	int ans = 0;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			chmax(ans, shortest_path(pnt(i, j)));
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}