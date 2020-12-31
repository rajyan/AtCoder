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
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
//	return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
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
//	const T inf = numeric_limits<T>::max() / 2;
//	vector<T> cost(V, inf);
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
//		if (cost[now.to] < now.cost || now.to / 28 == V / 28 - 1) continue;
//		for (const Edge<T> &e : edges[now.to]) {
//			T tmp_cost = now.cost + e.cost;
//			if (cost[e.to] > tmp_cost) {
//				cost[e.to] = tmp_cost;
//				p_que.emplace(e.to, cost[e.to]);
//			}
//		}
//	}
//
//	return cost; // min cost to vertex idx from st
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<Edge<int>>> edges(N * 28);
//	for (int i = 0; i < M; i++) {
//		int u, v, len;
//		cin >> u >> v >> len;
//		for (int d = 0; d < 28; d++) {
//			edges[u * 28 + d].emplace_back(v * 28 + (len + d) % 28, len);
//			edges[v * 28 + d].emplace_back(u * 28 + (len + d) % 28, len);
//		}
//	}
//
//	int ans = INF;
//	auto cost = Dijkstra(edges, 0);
//	DMP(Dijkstra(edges, 0));
//	for (int i = 0; i < 28; i++) {
//		if(i % 4 == 0 || i % 7 == 0) ans = min(ans, cost[28 * (N - 1) + i]);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}