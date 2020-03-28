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
//				used[i] = 1;
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
//					used[e] = used[now] + 1;
//					que.emplace(e);
//				}
//			}
//		}
//
//		return res;
//	}
//
//	int longest_path() {
//		if (none_of(used.begin(), used.end(), [](int u) { return u > 0; })) build();
//		return *max_element(used.begin(), used.end());
//	}
//
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	auto id = [&](int l, int r) { return min(l, r)*N + max(l, r); };
//
//	topological_sort ts(N * N);
//	for (int i = 0; i < N; i++) {
//		vector<int> A(N - 1);
//		for (int j = 0; j < N - 1; j++) cin >> A[j];
//		for (int j = 0; j < N - 2; j++) ts.add_edge(id(i, A[j] - 1), id(i, A[j + 1] - 1));
//	}
//
//	if (ts.build().size() != N * N) cout << -1 << "\n";
//	else cout << ts.longest_path() << "\n";
//
//	return 0;
//}
