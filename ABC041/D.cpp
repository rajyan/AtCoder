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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//template<class T>
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int n, m;
//	cin >> n >> m;
//
//	vector<vector<int>> edges(n);
//	for (int i = 0; i < m; i++) {
//		int x, y;
//		cin >> x >> y;
//		x--, y--;
//		edges[x].emplace_back(y);
//	}
//
//	auto dp = make_vec(n + 1, (1 << n), 0LL);
//	dp[0][(1 << n) - 1] = 1;
//
//	for (int i = 0; i < n; i++) {
//		for (int bit = 0; bit < (1 << n); bit++) {
//			for (int j = 0; j < n; j++) {
//				if (any_of(edges[j].begin(), edges[j].end(), [&](int e) {return (1 << e) & bit; })) continue;
//				if (bit & (1 << j)) dp[i + 1][bit - (1 << j)] += dp[i][bit];
//			}
//		}
//	}
//
//	lint ans = 0;
//	for (int bit = 0; bit < (1 << n); bit++) chmax(ans, dp[n][bit]);
//
//	cout << ans << "\n";
//
//	return 0;
//}
