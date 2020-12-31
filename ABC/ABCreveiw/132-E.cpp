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
//template<class T>
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	auto edge = make_vec(N, 0, 0);
//	for (int i = 0; i < M; i++) {
//		int u, v;
//		cin >> u >> v;
//		u--, v--;
//		edge[u].emplace_back(v);
//	}
//
//	int s, t;
//	cin >> s >> t;
//	s--, t--;
//
//	auto dp = make_vec(N, 3, INF);
//	dp[s][0] = 0;
//
//	auto dfs = [&](auto &&f, int now) -> void {
//	
//		for (const auto &e : edge[now]) {
//
//			bool update = false;
//			for (int i = 0; i < 3; i++) {
//				if (chmin(dp[e][(i + 1) % 3], dp[now][i] + 1)) update = true;
//			}
//			if(update) f(f, e);
//
//		}
//
//	};
//
//	dfs(dfs,s);
//	DMP(dp);
//
//	cout << (dp[t][0] == INF ? -1 : dp[t][0] / 3) << "\n";
//
//	return 0;
//}