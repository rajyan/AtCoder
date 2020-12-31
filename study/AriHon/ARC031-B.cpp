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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	const int N = 10;
//	string input;
//	vector<string> grid(N);
//	for (int i = 0; i < N; i++) cin >> grid[i];
//	DMP(grid);
//
//	vector<int> dr{ -1,1,0,0 }, dc{ 0,0,-1,1 };
//	auto dfs = [&](auto &&f, int row, int col, vector<string> &memo) -> void {
//		
//		memo[row][col] = 'v';
//		
//		for (int i = 0; i < 4; i++) {
//			int r = row + dr[i];
//			int c = col + dc[i];
//			if (0 <= r && r < N && 0 <= c && c < N && memo[r][c] == 'o') f(f, r, c, memo);
//		}
//	};
//
//	bool ok = false;
//
//
//	for (int row = 0; row < N; row++) {
//		for (int col = 0; col < N; col++) {
//
//			if (grid[row][col] == 'o') continue;
//
//			int cnt = 0;
//			auto memo = grid;
//			memo[row][col] = 'o';
//
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					if (memo[i][j] == 'o') {
//						cnt++;
//						dfs(dfs, i, j, memo);
//					}
//				}
//			}
//			DMP(cnt);
//			if (cnt <= 1) ok = true;
//		}
//	}
//
//	
//
//	if (ok) cout << "YES" << "\n";
//	else cout << "NO" << "\n";
//
//	return 0;
//}