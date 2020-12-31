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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
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
//	return cost; // min cost to vertex idx from st
//}
//
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	while (true) {
//
//		int c, n, m, s, d;
//		cin >> c >> n >> m >> s >> d;
//		if (c == 0) break;
//		s--, d--;
//
//		vector<vector<Edge<int>>> edges(n*(c + 1));
//		for (int i = 0; i < m; i++) {
//			int u, v, len;
//			cin >> u >> v >> len;
//			u--, v--;
//			for (int j = 0; j <= c; j++) {
//				edges[u * (c + 1) + j].emplace_back(v * (c + 1) + j, len);
//				edges[v * (c + 1) + j].emplace_back(u * (c + 1) + j, len);
//				if (j != c) {
//					edges[u * (c + 1) + j].emplace_back(v * (c + 1) + (j + 1), len / 2);
//					edges[v * (c + 1) + j].emplace_back(u * (c + 1) + (j + 1), len / 2);
//				}
//			}
//		}
//
//		auto cost = Dijkstra(edges, s * (c + 1));
//
//		int ans = INF;
//		for (int i = 0; i <= c; i++) chmin(ans, cost[d*(c + 1) + i]);
//
//		cout << ans << "\n";
//	}
//
//	return 0;
//}