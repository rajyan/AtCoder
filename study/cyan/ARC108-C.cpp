//#ifdef _DEBUG
//#include "../../../library/src/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <set>
//#include <map>
//#include <unordered_map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//#include <bitset>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<class T = lint>
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost = 1) : to(to), cost(cost) {}
//	bool operator>(const Edge& r) const { return this->cost > r.cost; }
//};
//
//int main() {
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<Edge<int>>> edges(N);
//	for (int i = 0; i < M; i++) {
//		int u, v, len;
//		cin >> u >> v >> len;
//		u--, v--;
//		edges[u].emplace_back(v, len);
//		edges[v].emplace_back(u, len);
//	}
//
//	vector<int> ans(N, -1);
//	queue<pair<int, Edge<int>>> que;
//	que.emplace(0, Edge<int>(0, 0));
//	while (!que.empty()) {
//
//		const auto [now, edge] = que.front();
//		que.pop();
//		if (ans[now] != -1) continue;
//
//		const auto &[prev, p_cost] = edge;
//		if (ans[prev] != p_cost) ans[now] = p_cost;
//		else ans[now] = 0;
//
//		for (auto [next, cost] : edges[now]) {
//			if (ans[next] != -1) continue;
//			que.emplace(next, Edge<int>(now, cost));
//		}
//	}
//	
//	vector<int> used(N + 1);
//	for (int i = 0; i < N; i++) {
//		used[ans[i]] = 1;
//	}
//
//	int not_used = -1;
//	for (int i = 0; i <= N; i++) {
//		if (!used[i]) {
//			not_used = i;
//			break;
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (ans[i] == 0) ans[i] = not_used;
//	}
//
//	for (const auto& e : ans) cout << e << "\n";
//
//	return 0;
//}
