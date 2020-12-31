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
//
//// https://ei1333.github.io/luzhiled/snippets/graph/dinic.html
//template< typename flow_t >
//struct Dinic {
//	const flow_t INF;
//
//	struct edge {
//		int to;
//		flow_t cap;
//		int rev;
//		bool isrev;
//		int idx;
//	};
//
//	vector< vector< edge > > graph;
//	vector< int > min_cost, iter;
//
//	Dinic(int V) : INF(numeric_limits< flow_t >::max()), graph(V) {}
//
//	void add_edge(int from, int to, flow_t cap, int idx = -1) {
//		graph[from].emplace_back((edge) { to, cap, (int)graph[to].size(), false, idx });
//		graph[to].emplace_back((edge) { from, 0, (int)graph[from].size() - 1, true, idx });
//	}
//
//	bool bfs(int s, int t) {
//		min_cost.assign(graph.size(), -1);
//		queue< int > que;
//		min_cost[s] = 0;
//		que.push(s);
//		while (!que.empty() && min_cost[t] == -1) {
//			int p = que.front();
//			que.pop();
//			for (auto &e : graph[p]) {
//				if (e.cap > 0 && min_cost[e.to] == -1) {
//					min_cost[e.to] = min_cost[p] + 1;
//					que.push(e.to);
//				}
//			}
//		}
//		return min_cost[t] != -1;
//	}
//
//	flow_t dfs(int idx, const int t, flow_t flow) {
//		if (idx == t) return flow;
//		for (int &i = iter[idx]; i < graph[idx].size(); i++) {
//			edge &e = graph[idx][i];
//			if (e.cap > 0 && min_cost[idx] < min_cost[e.to]) {
//				flow_t d = dfs(e.to, t, min(flow, e.cap));
//				if (d > 0) {
//					e.cap -= d;
//					graph[e.to][e.rev].cap += d;
//					return d;
//				}
//			}
//		}
//		return 0;
//	}
//
//	flow_t max_flow(int s, int t) {
//		flow_t flow = 0;
//		while (bfs(s, t)) {
//			iter.assign(graph.size(), 0);
//			flow_t f = 0;
//			while ((f = dfs(s, t, INF)) > 0) flow += f;
//		}
//		return flow;
//	}
//
//	void output() {
//		for (int i = 0; i < graph.size(); i++) {
//			for (auto &e : graph[i]) {
//				if (e.isrev) continue;
//				auto &rev_e = graph[e.to][e.rev];
//				cout << i << "->" << e.to << " (flow: " << rev_e.cap << "/" << e.cap + rev_e.cap << ")" << endl;
//			}
//		}
//	}
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, G, E;
//	cin >> N >> G >> E;
//
//	Dinic<int> flow(N + 1);
//	for (int i = 0; i < G; i++) {
//		int p;
//		cin >> p;
//		flow.add_edge(p, N, 1);
//	}
//
//	
//	for (int i = 0; i < E; i++) {
//		int u, v;
//		cin >> u >> v;
//		flow.add_edge(u, v, 1);
//		flow.add_edge(v, u, 1);
//	}
//
//	cout << flow.max_flow(0, N) << "\n";
//
//	return 0;
//}