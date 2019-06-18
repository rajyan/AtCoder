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
//typedef long long lint;
//
//template<class T = lint>
//vector<T> Dijkstra(vector<vector<pair<int, T>>> &edges, int st) {
//
//	int V = (int)edges.size();
//	const T INF = numeric_limits<T>::max();
//	vector<T> dist(V, INF);
//	dist[st] = 0;
//
//	priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> que;
//	que.emplace(dist[st], st);
//
//	while (!que.empty()) {
//		T cost;
//		int idx;
//		tie(cost, idx) = que.top();
//		que.pop();
//
//		if (dist[idx] < cost) continue;
//		for (auto &e : edges[idx]) {
//			auto tmp_cost = cost + e.second;
//			if (dist[e.first] > tmp_cost) {
//				dist[e.first] = tmp_cost;
//				que.emplace(dist[e.first], e.first);
//			}
//		}
//	}
//
//	return dist;
//
//}
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
//	vector<vector<pair<int, int>>> edges(N);
//
//	for (int i = 0; i < N - 1; i++) {
//		cin >> u >> v >> len;
//		edges[u - 1].emplace_back(make_pair(v - 1, len % 2));
//		edges[v - 1].emplace_back(make_pair(u - 1, len % 2));
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
