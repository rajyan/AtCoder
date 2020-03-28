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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int R, C, K;
//	cin >> R >> C >> K;
//
//	int N;
//	cin >> N;
//
//	vector<vector<int>> grid(R, vector<int>(C)), r(R, vector<int>(C)), l(R, vector<int>(C)), u(R, vector<int>(C)), d(R, vector<int>(C));
//	for (int i = 0; i < N; i++) {
//		int x, y;
//		cin >> x >> y;
//		x--, y--;
//		grid[x][y] = 1;
//		r[x][y] = l[x][y] = u[x][y] = d[x][y] = 1;
//	}
//	DMP(grid);
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (j != C - 1) r[i][j + 1] += r[i][j];
//			if (i != R - 1) d[i + 1][j] += d[i][j];
//		}
//	}
//
//	for (int i = R - 1; i >= 0; i--) {
//		for (int j = C - 1; j >= 0; j--) {
//			if (j != 0) l[i][j - 1] += l[i][j];
//			if (i != 0) u[i - 1][j] += u[i][j];
//		}
//	}
//
//	DMP(l, u, r, d);
//
//	int ans = 0;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			ans += (l[i][j] + r[i][j] + u[i][j] + d[i][j] - 3 * grid[i][j] == K);
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}