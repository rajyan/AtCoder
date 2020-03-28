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
//	friend ostream &operator<< (ostream &os, Edge e) { return os << "to: " << e.to << " cost: " << e.cost << endl; }
//};
//
//template<class T>
//vector<T> Dijkstra(vector<vector<Edge<T>>> &edges, int st) {
//
//	int V = (int)edges.size();
//	const T inf = 1e5;
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
//		int n, m, p, a, b;
//		cin >> n >> m >> p >> a >> b;
//		if (n == 0) break;
//		a--, b--;
//
//		vector<int> t(n);
//		for (int i = 0; i < n; i++) cin >> t[i];
//
//		const int bit_max = (1 << n);
//		const double dinf = 1e5;
//
//		vector<vector<Edge<double>>> edges(m*bit_max);
//		for (int i = 0; i < p; i++) {
//
//			int x, y;
//			double z;
//			cin >> x >> y >> z;
//			x--, y--;
//
//			for (int bit = 0; bit < bit_max; bit++) {
//				for (int j = 0; j < n; j++) {
//					int next_bit = bit | (1 << j);
//					if (bit != next_bit) {
//						edges[x*bit_max + bit].emplace_back(y*bit_max + next_bit, z / t[j]);
//						edges[y*bit_max + bit].emplace_back(x*bit_max + next_bit, z / t[j]);
//					}
//				}
//			}
//
//		}
//
//		auto dist = Dijkstra(edges, a*bit_max);
//		double ans = dinf;
//		for (int bit = 0; bit < bit_max; bit++) {
//			chmin(ans, dist[b*bit_max + bit]);
//		}
//
//		if (ans == dinf) cout << "Impossible" << "\n";
//		else cout << fixed << setprecision(5) << ans << "\n";
//
//	}
//
//	return 0;
//}