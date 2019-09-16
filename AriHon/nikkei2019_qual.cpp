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
//class topological_sort {
//private:
//	int V;
//	vector<vector<int>> edges;
//	vector<int> used;
//public:
//	topological_sort(int n) :V(n), edges(n), used(n) {}
//	topological_sort(vector<vector<int>> &edges) :V(edges.size()), used(edges.size()) { this->edges = edges; }
//
//	void add_edge(int from, int to) { edges[from].emplace_back(to); }
//
//	vector<int> build() {
//
//		vector<int> res, in(V);
//		for (int i = 0; i < V; i++) for (const auto &e : edges[i]) in[e]++;
//
//		res.reserve(V);
//		queue<int> que;
//		for (int i = 0; i < V; i++) {
//			if (in[i] == 0 && !used[i]) {
//				used[i] = -1;
//				que.emplace(i);
//			}
//		}
//		while (!que.empty()) {
//			int now = que.front();
//			DMP(now, in);
//			que.pop();
//			res.emplace_back(now);
//			for (const auto &e : edges[now]) {
//				in[e]--;
//				if (in[e] == 0) {
//					if (used[e]) return vector<int>(); // unable to sort
//					used[e] = now + 1;
//					que.emplace(e);
//				}
//			}
//		}
//
//		return used;
//	}
//
//	int longest_path() {
//		if (none_of(used.begin(), used.end(), [](int u) { return u > 0; })) build();
//		return *max_element(used.begin(), used.end()) - 1;
//	}
//
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int n, m;
//	cin >> n >> m;
//
//	topological_sort ts(n);
//	vector<vector<int>> edges(n);
//	for (int i = 0; i < n - 1 + m; i++) {
//		int s, t;
//		cin >> s >> t;
//		s--, t--;
//		ts.add_edge(s, t);
//	}
//	
//	auto par = ts.build();
//	for (const auto &e : par) {
//		if (e == -1) cout << 0 << "\n";
//		else cout << e << "\n";
//	}
//
//	return 0;
//}