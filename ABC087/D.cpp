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
//template<class T = lint>
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	int u, v, len;
//	vector<vector<Edge<int>>> edges(N);
//	for (int i = 0; i < M; i++) {
//		cin >> u >> v >> len;
//		edges[u - 1].emplace_back(v - 1, len);
//		edges[v - 1].emplace_back(u - 1, -len);
//	}
//
//	vector<lint> visited(N, numeric_limits<lint>::max());
//	auto dfs = [&](auto &&f, int now) -> bool {
//
//		bool flag = true;
//		for (const auto &e : edges[now]) {
//			if (visited[e.to] == numeric_limits<lint>::max()) {
//				visited[e.to] = visited[now] + e.cost;
//				flag &= f(f, e.to);
//			}
//			else if (visited[e.to] != visited[now] + e.cost) flag = false;
//		}
//
//		return flag;
//	};
//
//	bool ans = true;
//	for (int i = 0; i < N; i++) {
//		if (visited[i] == numeric_limits<lint>::max()) {
//			visited[i] = 0;
//			ans &= dfs(dfs, i);
//		}
//		else ans &= dfs(dfs, i);
//	}
//
//	if (ans) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}