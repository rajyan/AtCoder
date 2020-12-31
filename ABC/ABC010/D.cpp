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
//int bit_cnt(long bits) {
//	bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
//	bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
//	bits = (bits & 0x0f0f0f0f) + (bits >> 4 & 0x0f0f0f0f);
//	bits = (bits & 0x00ff00ff) + (bits >> 8 & 0x00ff00ff);
//	return (bits & 0x0000ffff) + (bits >> 16 & 0x0000ffff);
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
//	int N, G, E;
//	cin >> N >> G >> E;
//
//	vector<int> p(G);
//	for (int i = 0; i < G; i++) cin >> p[i];
//
//	vector<vector<int>> edges(N);
//	map<pair<int, int>, int> id;
//	for (int i = 0; i < E; i++) {
//		int u, v;
//		cin >> u >> v;
//		edges[u].emplace_back(v);
//		edges[v].emplace_back(u);
//		id[minmax(u, v)] = i;
//	}
//
//	int ans = INF;
//	for (int bit = 0b0; bit < (1 << E); bit++) {
//		
//		queue<int> que;
//		que.emplace(0);
//		vector<int> used(N);
//		used[0] = 1;
//		while (!que.empty()) {
//			
//			int now = que.front();
//			que.pop();
//			for (const auto &e : edges[now]) {
//				if (!used[e] && !((1 << id[minmax(now, e)]) & bit)) {
//					used[e] = 1;
//					que.emplace(e);
//				}
//			}
//
//		}
//
//		DMP(used);
//		int cnt = bit_cnt(bit);
//		for (int i = 0; i < G; i++) cnt += used[p[i]];
//		chmin(ans, cnt);
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}