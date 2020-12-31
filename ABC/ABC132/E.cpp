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
//	Edge(int to, T cost = 0) : to(to), cost(cost) {}
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
//	int u, v;
//	vector<vector<Edge<lint>>> edges(N);
//	for (int i = 0; i < M; i++) {
//		cin >> u >> v;
//		u--, v--;
//		edges[u].emplace_back(v);
//	}
//
//	int st, go;
//	cin >> st >> go;
//	st--, go--;
//
//	vector<vector<lint>> cost(N, vector<lint>(3, INF));
//	queue<Edge<lint>> que;
//	que.emplace(st);
//	cost[st][0] = 0;
//
//	while (!que.empty()) {
//
//		Edge<lint> now(que.front().to);
//		que.pop();
//
//		for (int i = 0; i < 3; i++) {
//			for (const auto &e : edges[now.to]) {
//				lint tmp_cost = cost[now.to][i] + 1;
//				if (cost[e.to][(i + 1) % 3] > tmp_cost) {
//					cost[e.to][(i + 1) % 3] = tmp_cost;
//					que.emplace(e.to);
//				}
//			}
//		}
//	}
//
//	if (cost[go][0] % 3 == 0) cout << cost[go][0] / 3 << "\n";
//	else cout << "-1\n";
//	
//	return 0;
//}