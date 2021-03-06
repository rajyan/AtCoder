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
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M, L;
//	cin >> N >> M >> L;
//
//	vector<vector<int>> dist(N, vector<int>(N, INF));
//	vector<vector<int>> cost(N, vector<int>(N, INF));
//
//	for (int i = 0; i < N; i++) dist[i][i] = 0;
//	for (int i = 0; i < N; i++) cost[i][i] = 0;
//
//	for (int i = 0; i < M; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		a--, b--;
//		dist[a][b] = c;
//		dist[b][a] = c;
//	}
//
//	for (int k = 0; k < N; k++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				chmin(dist[i][j], dist[i][k] + dist[k][j]);
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i == j) continue;
//			if (dist[i][j] <= L) cost[i][j] = 1;
//		}
//	}
//
//	for (int k = 0; k < N; k++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				chmin(cost[i][j], cost[i][k] + cost[k][j]);
//			}
//		}
//	}
//
//	DMP(cost);
//
//	int Q;
//	cin >> Q;
//	for (int i = 0; i < Q; i++) {
//		int s, t;
//		cin >> s >> t;
//		s--, t--;
//		auto tmp = cost[s][t];
//		if (tmp != INF) cout << tmp - 1 << "\n";
//		else cout << -1 << "\n";
//	}
//
//	return 0;
//}