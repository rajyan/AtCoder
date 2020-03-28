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
//	Edge(int to, T cost = 1) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
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
//	vector<vector<Edge<int>>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		int u, v, len;
//		cin >> u >> v >> len;
//		u--, v--;
//		edges[u].emplace_back(v, len);
//		edges[v].emplace_back(u, len);
//	}
//
//	vector<int> used(N), ans(N);
//	auto dfs = [&](auto && f, int d) -> void {
//		
//		for (const auto &e : edges[d]) {
//			if (!used[e.to]) {
//				ans[e.to] = ans[d] ^ (e.cost & 1);
//				used[e.to] = 1;
//				f(f, e.to);
//			}
//		}
//
//	};
//
//	dfs(dfs, 0);
//	cout << ans << "\n";
//
//	return 0;
//}