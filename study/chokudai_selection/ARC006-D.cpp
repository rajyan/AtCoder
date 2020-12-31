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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class T,class... Size> 
//auto make_vec(T s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//const vector<string> A =
//{
//	".......",
//	"...o...",
//	"..o.o..",
//	".o...o.",
//	".ooooo.",
//	".o...o.",
//	"......."
//};
//
//const vector<string> B =
//{
//	".......",
//	".oooo..",
//	".o...o.",
//	".oooo..",
//	".o...o.",
//	".oooo..",
//	"......."
//};
//
//const vector<string> C =
//{
//	".......",
//	"..ooo..",
//	".o...o.",
//	".o.....",
//	".o...o.",
//	"..ooo..",
//	"......."
//};
//
//int check(const int &h, const int &w, const vector<vector<char>> &grid) {
//
//	const int size = 7;
//	for (int zoom = 1; zoom < 150; zoom++) {
//
//		if (h + size * zoom > grid.size() || w + size * zoom > grid[0].size()) break;
//
//		bool isA = true, isB = true, isC = true;
//		for (int i = 0; i < size * zoom; i++) {
//			for (int j = 0; j < size * zoom; j++) {
//
//				if (isA && grid[h + i][w + j] != A[i / zoom][j / zoom]) isA = false;
//				if (isB && grid[h + i][w + j] != B[i / zoom][j / zoom]) isB = false;
//				if (isC && grid[h + i][w + j] != C[i / zoom][j / zoom]) isC = false;
//
//				if (!isA && !isB && !isC) break;
//
//			}
//			if (!isA && !isB && !isC) break;
//		}
//
//		if (!isA && !isB && !isC) continue;
//
//		if (isA) return 0;
//		if (isB) return 1;
//		if (isC) return 2;
//
//	}
//
//	return 3;
//
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
//	vector<vector<char>> grid_000(H, vector<char>(W));
//	vector<vector<char>> grid_090(W, vector<char>(H));
//	vector<vector<char>> grid_180(H, vector<char>(W));
//	vector<vector<char>> grid_270(W, vector<char>(H));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> grid_000[i][j];
//	for (int i = 0; i < H; i++) reverse_copy(grid_000[i].begin(), grid_000[i].end(), grid_180[H - 1 - i].begin());
//	for (int j = 0; j < W; j++) for (int i = 0; i < H; i++) grid_270[j][i] = grid_000[i][W - 1 - j];
//	for (int j = 0; j < W; j++) reverse_copy(grid_270[j].begin(), grid_270[j].end(), grid_090[W - 1 - j].begin());
//	DMP(grid_090, grid_180, grid_270);
//
//	vector<int> ans(4);
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			ans[check(i, j, grid_000)]++;
//			ans[check(j, i, grid_090)]++;
//			ans[check(i, j, grid_180)]++;
//			ans[check(j, i, grid_270)]++;
//		}
//	}
//	
//	ans.pop_back();
//	cout << ans;
//
//	return 0;
//}