//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
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
//class topological_sort {
//
//	int V;
//	vector<vector<int>> edges;
//	vector<int> in;
//
//public:
//	topological_sort(int n) :V(n), edges(n), in(n) {}
//	topological_sort(vector<vector<int>> &edges) :V(edges.size()), in(edges.size()) { this->edges = edges; }
//
//	void add_edge(int from, int to) { edges[from].emplace_back(to); }
//
//	vector<int> build() {
//
//		for (int i = 0; i < V; i++) for (const auto &e : edges[i]) in[e]++;
//		vector<int> used(V), res;
//		res.reserve(V);
//		for (int i = 0; i < V; i++) {
//			if (in[i] == 0 && !used[i]) {
//				used[i] = 1;
//				queue<int> que;
//				que.emplace(i);
//				while (!que.empty()) {
//					int now = que.front();
//					DMP(now, in);
//					que.pop();
//					res.emplace_back(now);
//					for (const auto &e : edges[now]) {
//						in[e]--;
//						if (in[e] == 0) {
//							if (used[e]) return vector<int>(); // unable to sort
//							used[e] = 1;
//							que.emplace(e);
//						}
//					}
//				}
//			}
//		}
//
//		return res;
//	}
//
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int n, e;
//	cin >> n >> e;
//
//	vector<vector<int>> edges(n);
//	for (int i = 0; i < e; i++) {
//		int s, t;
//		cin >> s >> t;
//		edges[s].emplace_back(t);
//	}
//
//	topological_sort ts(edges);
//	auto ans = ts.build();
//	for (const auto &e : ans) cout << e << "\n";
//
//	return 0;
//}