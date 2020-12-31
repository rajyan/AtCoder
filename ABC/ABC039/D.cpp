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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : "");
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
//	bool operator==(const pnt &rhs) const { return r == rhs.r && c == rhs.c; }
//	bool operator<(const pnt & rhs) const { return r < rhs.r || r == rhs.r && c < rhs.c; }
//	const pnt operator+(const pnt &rhs) { return pnt(r + rhs.r, c + rhs.c); }
//	friend istream& operator>>(istream& is, pnt &p) { is >> p.c >> p.r; p.r--, p.c--; return is; }
//	template<class T> T& operator[](vector<vector<T>> &v) { return v[r][c]; }
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
//	vector<vector<char>> grid(H, vector<char>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> grid[i][j];
//
//	auto in_grid = [&](const pnt &p) {return 0 <= p.r&&p.r < H && 0 <= p.c&&p.c < W; };
//
//	vector<vector<char>> ans(H, vector<char>(W, '.'));
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//
//			if (grid[i][j] == '#') {
//				
//				vector<pnt> dxdy = { {-1,-1},{-1,0},{-1,1},{0,-1},{0,0},{0,1},{1,-1},{1,0},{1,1} };
//				bool all_black = true;
//				for (const auto &del : dxdy) {
//					pnt tmp = pnt(i, j) + del;
//					if (in_grid(tmp) && tmp[grid] != '#') all_black = false;
//				}
//				if (all_black) ans[i][j] = '#';
//			}
//
//		}
//	}
//
//	DMP(ans);
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (grid[i][j] == '#') {
//
//				bool restorable = false;
//				vector<pnt> dxdy = { {-1,-1},{-1,0},{-1,1},{0,-1},{0,0},{0,1},{1,-1},{1,0},{1,1} };
//				for (const auto &del : dxdy) {
//					pnt tmp = pnt(i, j) + del;
//					if (in_grid(tmp) && tmp[ans] == '#') restorable = true;
//				}
//				if (!restorable) {
//					cout << "impossible" << "\n";
//					return 0;
//				}
//			}
//		}
//	}
//
//	cout << "possible" << "\n";
//	cout << ans;
//
//	return 0;
//}