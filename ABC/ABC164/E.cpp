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
//template<class T>
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//template<class T>
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//template<class T>
//vector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {
//
//	const int V = (int)edges.size();
//	const T inf = numeric_limits<T>::max() / 2;
//	vector<T> cost(V, inf);
//
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
//				cost[e.to] = tmp_cost;
//				pq.emplace(e.to, cost[e.to]);
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
//	int N, M, S;
//	cin >> N >> M >> S;
//	
//	const int A_max = 2500;
//	vector<vector<Edge<lint>>> edges(N * A_max);
//	for (int i = 0; i < M; i++) {
//		int u, v, time, cost;
//		cin >> u >> v >> cost >> time;
//		u--, v--;
//		for (int j = 0; j + cost < A_max; j++) {
//			edges[u * A_max + j + cost].emplace_back(v * A_max + j, time);
//			edges[v * A_max + j + cost].emplace_back(u * A_max + j, time);
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		int cost, time;
//		cin >> cost >> time;
//		for (int j = 0; j + cost < A_max; j++) {
//			edges[i * A_max + j].emplace_back(i * A_max + cost + j, time);
//		}
//	}
//
//	auto d = Dijkstra(edges, min(S, A_max - 1));
//	for (int i = 1; i < N; i++) {
//		lint ans = LINF;
//		for (int j = 0; j < A_max; j++) {
//			chmin(ans, d[i * A_max + j]);
//		}
//		cout << ans << "\n";
//	}
//
//	return 0;
//}