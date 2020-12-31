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
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
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
//	vector<pair<int, int>> memo(M);
//	int a, b;
//	for (int i = 0; i < M; i++) {
//		cin >> a >> b;
//		a--, b--;
//		edge[a].emplace_back(b);
//		edge[b].emplace_back(a);
//		memo[i] = { a, b };
//	}
//
//	auto dfs = [&](auto &&f, int now, int par, int st, vector<int> visited) -> bool {
//
//		visited[now] = 1;
//
//		bool flag = (now == st);
//		for (const auto &e : edge[now]) {
//			if (!visited[e] && e != par) flag |= f(f, e, now, st, visited);
//		}
//		return flag;
//	};
//
//	int cnt = 0;
//	for (int i = 0; i < M; i++) {
//		if (dfs(dfs, memo[i].first, memo[i].second, memo[i].second, vector<int>(N))) cnt++;
//	}
//
//	cout << M - cnt << "\n";
//
//	return 0;
//}