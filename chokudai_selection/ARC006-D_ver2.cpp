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
//	auto dfs = [&](auto &&f, int h, int w) -> pair<int, int> {
//
//		visited[h][w] = 1;
//		int res = 1, max_h = h;
//		vector<int> del{ 0,-1,1 };
//		for (const auto &r : del) {
//			for (const auto &c : del) {
//
//				int nh = h + r;
//				int nw = w + c;
//				if (0 < nh && nh <= H && 0 < nw && nw <= W && grid[nh][nw] == 'o' && !visited[nh][nw]) {
//					auto tmp = f(f, nh, nw);
//					res += tmp.first;
//					max_h = max(max_h, tmp.second);
//				}
//			}
//		}
//
//		return {res, max_h};
//	};
//
//	map<int, int> ans;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (grid[i][j] == 'o' && !visited[i][j]) {
//				auto tmp = dfs(dfs, i, j);
//				int mag = (tmp.second - i + 1) / 5;
//				ans[tmp.first / (mag * mag)]++;
//			}
//		}
//	}
//
//	cout << ans[12] << " " << ans[16] << " " << ans[11] << "\n";
//
//	return 0;
//}