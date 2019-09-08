//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << p.first << " " << p.second;
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << "[" << e << "] ";
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
//	friend istream& operator>>(istream& is, pnt &p) { is >> p.c >> p.r; p.r--, p.c--; return is; }
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
//	pnt start, goal;
//	cin >> start >> goal;
//
//	vector<string> grid(H);
//	for (int i = 0; i < H; i++) cin >> grid[i];
//	DMP(grid);
//
//	auto inGrid = [&](pnt p) {
//		return 0 <= p.r && p.r < W && 0 <= p.c && p.c < H;
//	};
//	
//	vector<vector<int>> visited(H, vector<int>(W));
//	vector<pnt> dxdy{ {-1,0}, {1,0}, {0,-1}, {0,1} };
//	queue<pair<pnt,int>> que;
//	visited[start.c][start.r] = 1;
//	que.emplace(start, 0);
//	while (!que.empty()) {
//		pnt now; int cnt;
//		tie(now, cnt) = que.front(); que.pop();
//		cnt++;
//
//		if (now == goal) break;
//
//		for (const auto &dp : dxdy) {
//			pnt next = now + dp;
//
//			if (inGrid(next) && !visited[next.c][next.r] && grid[next.c][next.r] != '#') {
//				visited[next.c][next.r] = cnt;
//				que.emplace(next, cnt);
//			}
//		}
//	}
//	DMP(visited);
//	cout << visited[goal.c][goal.r] << "\n";
//
//	return 0;
//}