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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	vector<int> a(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//
//	vector<vector<int>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		int u, v;
//		cin >> u >> v;
//		u--, v--;
//		edges[u].emplace_back(v);
//		edges[v].emplace_back(u);
//	}
//
//	vector<int> ans(N), lis(N, INF);
//	auto dfs = [&](auto &&f, int now) -> void {
//	
//		auto idx = lower_bound(lis.begin(), lis.end(), a[now]) - lis.begin();
//		auto val = lis[idx];
//		lis[idx] = a[now];
//
//		ans[now] = lower_bound(lis.begin(), lis.end(), INF) - lis.begin();
//
//		for (const auto &e : edges[now]) if(!ans[e]) f(f, e);
//
//		lis[idx] = val;
//
//	};
//
//	dfs(dfs, 0);
//
//	for (const auto &e : ans) cout << e << "\n";
//
//	return 0;
//}