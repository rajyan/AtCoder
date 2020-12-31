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
//	int H, W;
//	cin >> H >> W;
//
//	vector<vector<char>> grid(H, vector<char>(W)), visited(H, vector<char>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> grid[i][j];
//
//	queue<pair<pair<int,int>, int>> que;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (grid[i][j] == '#') {
//				que.emplace(make_pair(i, j), 0);
//			}
//		}
//	}
//
//	auto inGrid = [&](int row, int col) {
//		return 0 <= row && row < H && 0 <= col && col < W;
//	};
//
//	int ans = 0;
//	while (!que.empty()) {
//
//		auto now = que.front(); que.pop();
//
//		vector<int> dr{ -1,1,0,0 }, dc{ 0,0,-1,1 };
//		for (int i = 0; i < 4; i++) {
//			int r = now.first.first + dr[i];
//			int c = now.first.second + dc[i];
//
//			if (inGrid(r, c) && grid[r][c] == '.') {
//				grid[r][c] = '#';
//				que.emplace(make_pair(r, c), now.second + 1);
//				ans = max(ans, now.second + 1);
//			}
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}