//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <functional>
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//typedef long long lint;
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
//template<class T = lint>
//vector<T> Dijkstra(vector<vector<Edge<T>>> &edges, int st) {
//
//	int V = (int)edges.size();
//	const int INF = numeric_limits<T>::max();
//	vector<T> dist(V, INF);
//	dist[st] = 0;
//
//	priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> p_que;
//	p_que.emplace(dist[st], st);
//
//	while (!p_que.empty()) {
//
//		Edge<T> now(p_que.top().to, p_que.top().cost);
//		p_que.pop();
//
//		if (dist[now.to] < now.cost) continue;
//		for (const Edge<T> &e : edges[now.to]) {
//			T tmp_cost = now.cost + e.cost;
//			if (dist[e.to] > tmp_cost) {
//				dist[e.to] = tmp_cost;
//				p_que.emplace(e.to, dist[e.to]);
//			}
//		}
//	}
//
//	return dist;
//}
//
//// 入力例（無向グラフ）
////int u, v, len;
////vector<vector<Edge<int>>> edges(N);
////for (int i = 0; i < M; i++) {
////	cin >> u >> v >> len;
////	edges[u - 1].emplace_back(v - 1, len);
////	edges[v - 1].emplace_back(u - 1, len);
////}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	int u, v, len;
//	vector<vector<Edge<int>>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		cin >> u >> v >> len;
//		edges[u - 1].emplace_back(v - 1, len % 2);
//		edges[v - 1].emplace_back(u - 1, len % 2);
//	}
//
//	auto ans = Dijkstra<int>(edges, 0);
//
//	for (const auto& i : ans) {
//		if (i % 2) cout << '1' << "\n";
//		else cout << '0' << "\n";
//	}
//
//	return 0;
//}
