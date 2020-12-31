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
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//template<class T>
//vector<T> Dijkstra(vector<vector<Edge<T>>> &edges, int st) {
//
//	int V = (int)edges.size();
//	const int INF = numeric_limits<T>::max();
//	vector<T> cost(V, INF);
//	cost[st] = 0;
//
//	priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> p_que;
//	p_que.emplace(st, cost[st]);
//
//	while (!p_que.empty()) {
//
//		Edge<T> now(p_que.top().to, p_que.top().cost);
//		p_que.pop();
//
//		if (cost[now.to] < now.cost) continue;
//		for (const Edge<T> &e : edges[now.to]) {
//			T tmp_cost = now.cost + e.cost;
//			if (cost[e.to] > tmp_cost) {
//				cost[e.to] = tmp_cost;
//				p_que.emplace(e.to, cost[e.to]);
//			}
//		}
//	}
//
//	return cost; // min costance to vertex idx from st
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W;
//	cin >> H >> W;
//
//	vector<vector<Edge<int>>> c(10);
//	int tmp;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			cin >> tmp;
//			c[j].emplace_back(i, tmp); // Ç†Ç¶ÇƒãtÇ…ì¸ÇÍÇÈÅistÇ‹Ç≈ÇÃç≈è¨Ç™ÇŸÇµÇ¢ÇÃÇ≈Åj
//		}
//	}
//
//	auto d = Dijkstra(c, 1);
//
//	lint ans = 0;
//	for (int i = 0; i < H*W; i++) {
//		cin >> tmp;
//		if(tmp != -1) ans += d[tmp];
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}