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
//	for (const auto &e : vec) os << setw(5) << e << (&e == &vec.back() ? "\n" : " ");
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
//	int H, W, K;
//	cin >> H >> W >> K;
//
//	vector<vector<char>> grid(H, vector<char>(W));
//	vector<vector<int>> ans(H, vector<int>(W));
//	int cnt = 1;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> grid[i][j];
//			if (grid[i][j] == '#') ans[i][j] = cnt++;
//		}
//	}
//
//	auto dfs_r = [&](auto &&f, int row, int col) -> void {
//		if (col - 1 >= 0 && ans[row][col - 1] == 0) {
//			ans[row][col - 1] = ans[row][col];
//			f(f, row, col - 1);
//		}
//		if (col + 1 < W && ans[row][col + 1] == 0) {
//			ans[row][col + 1] = ans[row][col];
//			f(f, row, col + 1);
//		}
//	};
//
//	auto dfs_c = [&](auto &&f, int row, int col) -> void {
//		if (row - 1 >= 0 && ans[row - 1][col] == 0) {
//			ans[row - 1][col] = ans[row][col];
//			f(f, row - 1, col);
//		}
//		if (row + 1 < H && ans[row + 1][col] == 0) {
//			ans[row + 1][col] = ans[row][col];
//			f(f, row + 1, col);
//		}
//	};
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (ans[i][j]) dfs_c(dfs_c, i, j);
//		}
//	}
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (ans[i][j]) dfs_r(dfs_r, i, j);
//		}
//	}
//
//	cout  << ans << "\n";
//
//	return 0;
//}