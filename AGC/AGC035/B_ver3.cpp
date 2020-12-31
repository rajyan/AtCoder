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
//	vector<vector<int>> pathfrom0;
//	vector<int> visited(N);
//	visited[0] = 1;
//	queue<pair<int, vector<int>>> que;
//	que.emplace(0, vector<int>());
//	while (!que.empty()) {
//
//		int now = que.front().first;
//		auto memo = que.front().second;
//		que.pop();
//		memo.emplace_back(now);
//		if (out[now]) pathfrom0.emplace_back(memo);
//
//		for (const auto &e : edge[now]) {
//			if (!visited[e]) {
//				auto tmp = memo;
//				que.emplace(e, memo);
//				visited[e] = 1;
//			}
//		}
//
//	}
//
//	for (int i = 0; i < pathfrom0.size(); i++) {
//		for (int j = 0; j < pathfrom0[i].size() - 1; j++) {
//			dir[minmax(pathfrom0[i][j], pathfrom0[i][j+1])] ^= 1;
//		}
//	}
//		
//	for (auto &e : dir) {
//		if (e.second == 1) printf("%d %d\n", e.first.first + 1, e.first.second + 1);
//		else printf("%d %d\n", e.first.second + 1, e.first.first + 1);
//	}
//
//	return 0;
//}
