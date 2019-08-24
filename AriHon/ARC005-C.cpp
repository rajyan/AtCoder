//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
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
//	int r, c; 
//	pnt(int r = 0, int c = 0) :r(r), c(c) {};
//	bool operator==(const pnt &rhs) { return (r == rhs.r && c == rhs.c); }
//	const pnt operator+(const pnt &rhs) { return pnt(r + rhs.r, c + rhs.c); }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W;
//	cin >> H >> W;
//
//	vector<string> grid(H);
//	for (int i = 0; i < H; i++) cin >> grid[i];
//	DMP(grid);
//
//	pnt start, goal;
//	for (int r = 0; r < H; r++) {
//		for (int c = 0; c < W; c++) {
//			if (grid[r][c] == 's') start = pnt(r, c);
//			if (grid[r][c] == 'g') goal = pnt(r, c);
//		}
//	}
//
//	auto inGrid = [&](pnt p) {
//		return 0 <= p.r && p.r < H && 0 <= p.c && p.c < W;
//	};
//
//	vector<vector<int>> memo(H, vector<int>(W, INF));
//	memo[start.r][start.c] = 0;
//
//	queue<pnt> que;
//	que.push(start);
//	while (!que.empty()) {
//
//		pnt now = que.front();
//		que.pop();
//
//		for (const auto &dp : vector<pnt>{ {-1,0}, {1,0}, {0,-1}, {0,1} }) {
//			pnt next = now + dp;
//			if (inGrid(next) && memo[now.r][now.c] + (grid[next.r][next.c] == '#') < 3 && memo[now.r][now.c] + (grid[next.r][next.c] == '#') < memo[next.r][next.c]) {
//				memo[next.r][next.c] = memo[now.r][now.c] + (grid[next.r][next.c] == '#');
//				que.emplace(next);
//			}
//		}
//
//	}
//
//	DMP(memo);
//
//	if (memo[goal.r][goal.c] <= 2) cout << "YES" << "\n";
//	else cout << "NO" << "\n";
//
//	return 0;
//}