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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W, T;
//	cin >> H >> W >> T;
//
//	vector<vector<char>> grid(H, vector<char>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> grid[i][j];
//
//	pnt start, goal;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (grid[i][j] == 'S') start = pnt(i, j);
//			if (grid[i][j] == 'G') goal = pnt(i, j);
//		}
//	}
//
//	auto judge = [&](int x) {
//		
//		vector<vector<lint>> cost(H, vector<lint>(W, LINF));
//		start[cost] = 0;
//
//		queue<pnt> que;
//		que.emplace(start);
//		while (!que.empty()) {
//			
//			pnt now = que.front();
//			que.pop();
//
//			if (now == goal) continue;
//
//			vector<pnt> dxdy{ {0,1},{0,-1},{1,0},{-1,0} };
//			for (const auto &del : dxdy) {
//
//				pnt next = now + del;
//				if (0 <= next.x&&next.x < H && 0 <= next.y&&next.y < W) {
//					if (now[cost] + (next[grid] == '#' ? x : 1) < next[cost]) {
//						next[cost] = now[cost] + (next[grid] == '#' ? x : 1);
//						que.emplace(next);
//					}
//				}
//			
//			}
//
//
//		}
//		DMP(x, cost, goal[cost]);
//		return goal[cost] <= T ;
//
//	};
//
//	auto biSearch = [&](auto f) {
//		int ok = -1;
//		int ng = INF;
//
//		while (abs(ok - ng) > 1) {
//			int mid = (ok + ng) / 2;
//
//			if (f(mid)) ok = mid;
//			else ng = mid;
//		}
//
//		return ok;
//	};
//
//	cout << biSearch(judge) << "\n";
//
//	return 0;
//}