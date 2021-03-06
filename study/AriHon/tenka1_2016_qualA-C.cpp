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
//		priority_queue<int, vector<int>, greater<int>> que;
//		for (int i = 0; i < V; i++) {
//			if (in[i] == 0 && !used[i]) {
//				used[i] = 1;
//				que.emplace(i);
//			}
//		}
//		while (!que.empty()) {
//			int now = que.top();
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
//	int N;
//	cin >> N;
//
//	topological_sort ts(26);
//	bool pos = true;
//	for (int i = 0; i < N; i++) {
//		string a, b;
//		cin >> a >> b;
//
//		int cnt = 0, sz = min(a.size(), b.size());
//		while (cnt < sz && a[cnt] == b[cnt]) cnt++;
//
//		if (cnt == sz && a.size() > b.size()) pos = false;
//		else ts.add_edge(a[cnt] - 'a', b[cnt] - 'a');
//
//	}
//	auto ord = ts.build();
//
//	if (ord.size() == 26 && pos) for (const auto &c : ord) cout << char(c + 'a') << (&c == &ord.back() ? "\n" : "");
//	else cout << -1 << "\n";
//
//	return 0;
//}