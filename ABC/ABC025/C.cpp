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
//	auto b = make_vec(2, 3, 0);
//	auto c = make_vec(3, 2, 0);
//
//	for (int i = 0; i < 2; i++) for (int j = 0; j < 3; j++) cin >> b[i][j];
//	for (int i = 0; i < 3; i++) for (int j = 0; j < 2; j++) cin >> c[i][j];
//
//	auto calc_res = [&](auto &grid) {
//
//		int res = 0;
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 3; j++) {
//				res += (grid[i][j] == grid[i + 1][j]) * b[i][j];
//			}
//		}
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 2; j++) {
//				res += (grid[i][j] == grid[i][j + 1]) * c[i][j];
//			}
//		}
//
//		return res;
//	};
//
//	auto id = [&](const auto &grid) {
//		// 3i–@‚Åindex‚ð•t‚¯‚é
//		int res = 0, tmp = 1;
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				res += (grid[i][j] + 1) * tmp;
//				tmp *= 3;
//			}
//		}
//		return res;
//	};
//
//	vector<int> memo(19683, -1); // 19683 = 3^9
//	auto dfs = [&](auto &&f, const auto &grid, const int turn) -> int {
//
//		if (memo[id(grid)] != -1) return memo[id(grid)];
//		if (turn == 9) return memo[id(grid)] = calc_res(grid);
//
//		bool is_chokudai = !(turn & 1);
//		int res = is_chokudai ? 0 : INF;
//
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//
//				if (grid[i][j] != -1) continue;
//				auto tmp = grid;
//				tmp[i][j] = is_chokudai;
//
//				if (is_chokudai) res = max(res, f(f, tmp, turn + 1));
//				else res = min(res, f(f, tmp, turn + 1));
//
//			}
//		}
//
//		return memo[id(grid)] = res;
//
//	};
//
//	int choukudai = dfs(dfs, make_vec(3, 3, -1), 0);
//	int sum = 0;
//	for (int i = 0; i < 2; i++) for (int j = 0; j < 3; j++) sum += b[i][j];
//	for (int i = 0; i < 3; i++) for (int j = 0; j < 2; j++) sum += c[i][j];
//
//	cout << choukudai << "\n";
//	cout << sum - choukudai << "\n";
//
//	return 0;
//}