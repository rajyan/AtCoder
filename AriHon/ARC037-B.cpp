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
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<int>> edge(N);
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		a--, b--;
//		edge[a].emplace_back(b);
//		edge[b].emplace_back(a);
//	}
//
//	vector<int> visited(N);
//	auto dfs = [&](auto &&f, int now, int par) -> bool {
//		DMP(now);
//		visited[now] = 1;
//		bool tree = true;
//		for (const auto &e : edge[now]) {
//
//			if (e == par) continue;
//			if (visited[e]) tree = false;
//			else tree &= f(f, e, now);
//
//		}
//
//		return tree;
//	};
//
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		DMP(visited);
//		if (!visited[i]) ans += dfs(dfs, i, -1);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}