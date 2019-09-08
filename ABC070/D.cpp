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
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
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
//	const T INF = numeric_limits<T>::max();
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
//	return cost; // min cost to vertex idx from st
//}
//
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	
//	vector<vector<Edge<lint>>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		int a, b;
//		lint c;
//		cin >> a >> b >> c;
//		a--, b--;
//		edges[a].emplace_back(b, c);
//		edges[b].emplace_back(a, c);
//	}
//
//	int Q, K;
//	cin >> Q >> K;
//	auto distK = Dijkstra(edges, K - 1);
//
//	for (int i = 0; i < Q; i++) {
//		int x, y;
//		cin >> x >> y;
//		x--, y--;
//		cout << distK[x] + distK[y] << "\n";
//	}
//	
//	return 0;
//}