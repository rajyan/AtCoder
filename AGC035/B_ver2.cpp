//#define _CRT_SECURE_NO_WARNINGS
//
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
//	scanf("%d%d", &N, &M);
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
//		scanf("%d%d", &u, &v);
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
//	int idx = 1;
//	que.emplace(0);
//	while (!que.empty()) {
//		
//		int now = que.top();
//		que.pop();
//
//		int fliping = out[now];
//		DMP(now);
//		DMP(fliping);
//		
//		if (!used[now]) used[now] = idx++;
//
//		bool all_used = true;
//		for (const auto &e : edge[now]) {
//			if (!used[e]) {
//				dir[minmax(now, e)] ^= fliping;
//				out[now] ^= fliping;
//				out[e] ^= fliping;
//				que.emplace(e);
//				all_used = false;
//				break;
//			}
//		}
//
//		if (all_used) {
//			int max = 0, next = -1;
//			for (const auto &e : edge[now]) {
//				if (used[e] < used[now]) {
//					if (max < used[e]) {
//						max = used[e];
//						next = e;
//					}
//				}
//			}
//
//			if (next==-1) break;
//			dir[minmax(now, next)] ^= fliping;
//			out[now] ^= fliping;
//			out[next] ^= fliping;
//			que.emplace(next);
//
//		}
//		
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		DMP(out[i]);
//	}
//	for (int i = 0; i < N; i++){
//		DMP(used[i]);
//	}
//
//	for (auto &e : dir) {
//		if (e.second == 1) printf("%d %d\n", e.first.first + 1, e.first.second + 1);
//		else printf("%d %d\n", e.first.second + 1, e.first.first + 1);
//	}
//
//	return 0;
//}
