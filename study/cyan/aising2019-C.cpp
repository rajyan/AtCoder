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
//class UnionFind {
//private:
//	vector<int> data;
//
//public:
//	UnionFind(int size) : data(size, -1) { }
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
//	bool is_same(int x, int y) { return root(x) == root(y); }
//	int size(int x) { return -data[root(x)]; }
//
//	bool unify(int x, int y) {
//		x = root(x); y = root(y);
//		if (x != y) {
//			if (data[y] < data[x]) swap(x, y);
//			data[x] += data[y]; data[y] = x;
//			return true;
//		}
//		return false;
//	}
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
//	UnionFind uf(H*W);
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//
//			if (i + 1 < H && grid[i][j] != grid[i + 1][j]) {
//				uf.unify(i*W + j, (i + 1)*W + j);
//			}	
//			if (j + 1 < W && grid[i][j] != grid[i][j + 1]) {
//				uf.unify(i*W + j, i*W + (j + 1));
//			}
//
//		}
//	}
//
//	map<int, pair<int,int>> mp;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (grid[i][j] == '#') mp[uf.root(i*W + j)].first++;
//			else mp[uf.root(i*W + j)].second++;
//		}
//	}
//
//	lint ans = 0;
//	for (const auto &e : mp) {
//		ans += 1LL * e.second.first * e.second.second;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}