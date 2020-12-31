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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int h, w, t;
//	cin >> h >> w >> t;
//
//	struct pnt {
//		int x, y;
//		pnt(int x = 0, int y = 0) :x(x), y(y) {};
//		bool operator==(const pnt &r) { return x == r.x&&y == r.y; }
//		pnt operator+(const pnt&r) { return pnt(x + r.x, y + r.y); }
//	};
//
//	pnt st, go;
//	auto grid = make_vec(h, w, char());
//	for (int r = 0; r < h; r++) for (int c = 0; c < w; c++) {
//		cin >> grid[r][c];
//		if (grid[r][c] == 'S') st = { r,c };
//		if (grid[r][c] == 'G') go = { r,c };
//	}
//
//	queue<pnt> que;
//	que.emplace(st);
//
//	auto vi = make_vec(h, w, pnt(0, 0));
//
//	while (que.size()) {
//
//		pnt now = que.front();
//		que.pop();
//
//		if (now == go) break;
//		vector<pnt>dxdy{ {1,0},{-1,0},{0,1},{0,-1} };
//		for (const auto& d : dxdy) {
//			pnt next = now + d;
//			if (0 <= next.x&&next.x < h && 0 <= next.y&&next.y < w && !vi[next.x][next.y].x) {
//
//				que.emplace(next);
//				vi[next.x][next.y] = vi[now.x][now.y] + pnt(1, grid[next.x][next.y] == '#');
//
//			}
//		}
//
//	}
//
//	DMP(grid);
//	for (const auto &v : vi)for (const auto&e : v)cerr << e.x << " " << e.y << endl;
//
//	pnt vigo = vi[go.x][go.y];
//	cout << (t - (vigo.x - vigo.y)) / vigo.y << endl;
//
//	return 0;
//}