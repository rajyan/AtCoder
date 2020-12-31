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
//	bool operator==(const pnt &rhs) const { return (r == rhs.r && c == rhs.c); }
//	const pnt operator+(const pnt &rhs) const { return pnt(r + rhs.r, c + rhs.c); }
//	friend ostream &operator<<(ostream &os, const pnt &p) { os << p.r << " " << p.c << "\n"; return os; }
//};
//
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W, N;
//	cin >> H >> W >> N;
//
//	vector<pnt> cheese(N + 1);
//	vector<vector<char>> grid(H, vector<char>(W));
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> grid[i][j];
//			if ('0' < grid[i][j] && grid[i][j] <= '9') {
//				cheese[grid[i][j] - '0'] = { i,j };
//			}
//			else if (grid[i][j] == 'S') cheese[0] = { i,j };
//		}
//	}
//
//	auto InGrid = [&](pnt &p) { return 0 <= p.r && p.r < H && 0 <= p.c && p.c < W; };
//
//	auto ShortestPath = [&](const pnt &start, const pnt &goal) {
//
//		vector<vector<int>> memo(H, vector<int>(W, INF));
//		memo[start.r][start.c] = 0;
//		queue<pnt> que;
//		que.emplace(start);
//		while (!que.empty()) {
//		
//			pnt now = que.front();
//			que.pop();
//			if (now == goal) break;
//
//			for (const auto &mov : vector<pnt>{ {0, 1}, {0, -1}, {1, 0}, {-1, 0} }) {
//				pnt next = now + mov;
//
//				if (InGrid(next) &&
//					grid[next.r][next.c] != 'X' &&
//					chmin(memo[next.r][next.c], memo[now.r][now.c] + 1)) que.emplace(next);
//			}
//		}
//		return memo[goal.r][goal.c];
//	};
//
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		ans += ShortestPath(cheese[i], cheese[i + 1]);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}