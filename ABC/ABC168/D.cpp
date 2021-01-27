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
//#ifdef _DEBUG
//#include "../../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<class T>
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost=1) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//template<class T>
//vector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {
//
//	const int V = (int)edges.size();
//	vector<int> res(V - 1);
//	const T inf = numeric_limits<T>::max() / 2;
//	vector<T> cost(V, inf);
//	cost[st] = 0;
//
//	priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> pq;
//	pq.emplace(st, cost[st]);
//
//	while (!pq.empty()) {
//
//		Edge<T> now(pq.top().to, pq.top().cost);
//		pq.pop();
//
//		if (cost[now.to] < now.cost) continue;
//		for (const Edge<T> &e : edges[now.to]) {
//			T tmp_cost = now.cost + e.cost;
//			if (cost[e.to] > tmp_cost) {
//				res[e.to - 1] = now.to;
//				cost[e.to] = tmp_cost;
//				pq.emplace(e.to, cost[e.to]);
//			}
//		}
//	}
//
//	return res; // min cost to vertex idx from st
//}
//
//int main() {
//
//	int N, M;
//	cin >> N >> M;
//
//
//	vector<vector<Edge<int>>> edges(N);
//	for (int i = 0; i < M; i++) {
//		int u, v;
//		cin >> u >> v;
//		u--, v--;
//		edges[u].emplace_back(v);
//		edges[v].emplace_back(u);
//	}
//
//	cout << "Yes" << "\n";
//	for (const auto &e : Dijkstra(edges, 0)) cout << e + 1 << "\n";
//
//	return 0;
//}
//
