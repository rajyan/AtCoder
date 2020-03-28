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
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int n, x;
//	cin >> n >> x;
//	x--;
//
//	vector<int> h(n);
//	for (int i = 0; i < n; i++) cin >> h[i];
//
//	vector<vector<int>> d(n, vector<int>(n, INF));
//	for (int i = 0; i < n; i++) d[i][i] = 0;
//
//	map<pair<int, int>, int> mp;
//	for (int i = 0; i < n - 1; i++) {
//		int a, b;
//		cin >> a >> b;
//		a--, b--;
//		d[a][b] = 1;
//		d[b][a] = 1;
//		mp[minmax(a, b)] = i;
//	}
//
//	for (int k = 0; k < n; k++) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				chmin(d[i][j], d[i][k] + d[k][j]);
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//
//			if (i == x || j == x || i == j) continue;
//			if (h[i] == 0) continue;
//
//			if(d[i][j] + d[j][x] == d[i][x]) 
//
//		}
//	}
//
//	cout << dfs(dfs, x) << "\n";
//
//	return 0;
//}