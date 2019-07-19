//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <stack>
//#include <queue>
//#include <algorithm>
//#include <random>
//#include <chrono>
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//int main() {
//
//	int N, M;
//	scanf_s("%d%d", &N, &M);
//
//	if (M % 2 == 1) {
//		printf("-1\n");
//		return 0;
//	}
//
//	int u, v;
//	map<pair<int, int>, int> dir;
//	vector<vector<int>> edge(N);
//	vector<int> out(N);
//	for (int i = 0; i < M; i++) {
//		scanf_s("%d%d", &u, &v);
//		u--, v--;
//		edge[u].emplace_back(v);
//		edge[v].emplace_back(u);
//		if (v < u) swap(u, v);
//		dir[{u, v}] = 1; // intial direction is u->v when u < v
//		out[u] ^= 1;
//	}
//
//	stack<int> que;
//	vector<int> used(N);
//	int idx = 2;
//	que.emplace(0);
//	int fliping = 0;
//	while (!que.empty()) {
//		
//		int now = que.top();
//		que.pop();
//		DMP(now);
//		DMP(fliping);
//
//		idx++;
//		used[now] = idx;
//		if (out[now]) fliping ^= 1;
//
//		for (const auto &e : edge[now]) {
//			if (!used[e] && used[e] != used[now] - 1) {
//				dir[minmax(now, e)] ^= fliping;
//				out[now] ^= fliping;
//				out[e] ^= fliping;
//				que.emplace(e);
//			}
//		}
//
//		//if (all_used && fliping) {
//		//	for (const auto &e : edge[now]) {
//		//		if (used[e] < used[now]) {
//		//			dir[minmax(now, e)] ^= fliping;
//		//			out[now] ^= fliping;
//		//			out[e] ^= fliping;
//		//			que.emplace(e);
//		//			all_used = false;
//		//		}
//		//	}
//		//}
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		DMP(out[i]);
//		DMP(used[i]);
//	}
//	for (auto &e : dir) {
//		if (e.second == 1) printf("%d %d\n", e.first.first + 1, e.first.second + 1);
//		else printf("%d %d\n", e.first.second + 1, e.first.first + 1);
//	}
//
//	return 0;
//}
