#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

#ifdef _DEBUG
#include "../../library/library/debug_template.cpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

template<class T>
struct Edge {
	int to;
	T cost;
	Edge() {}
	Edge(int to, T cost) : to(to), cost(cost) {}
	bool operator>(const Edge &r) const { return this->cost > r.cost; }
};

template<class T>
vector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {

	const int V = (int)edges.size();
	const T inf = numeric_limits<T>::max() / 2;
	vector<T> cost(V, inf);
	cost[st] = 0;

	priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> pq;
	pq.emplace(st, cost[st]);

	while (!pq.empty()) {

		Edge<T> now(pq.top().to, pq.top().cost);
		pq.pop();

		if (cost[now.to] < now.cost) continue;
		for (const Edge<T> &e : edges[now.to]) {
			T tmp_cost = now.cost + e.cost;
			if (cost[e.to] > tmp_cost) {
				cost[e.to] = tmp_cost;
				pq.emplace(e.to, cost[e.to]);
			}
		}
	}

	return cost; // min cost to vertex idx from st
}

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

class UnionFind {
private:
	vector<int> data;
public:
	UnionFind(int size) : data(size, -1) { }
	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
	bool is_same(int x, int y) { return root(x) == root(y); }
	int size(int x) { return -data[root(x)]; }

	bool unify(int x, int y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y]; data[y] = x;
			return true;
		}
		return false;
	}
};


int main() {

	int N, M;
	cin >> N >> M;

	vector<vector<Edge<int>>> edges(N);
	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		edges[u].emplace_back(v, 1);
		edges[v].emplace_back(u, 1);
	}

	int s, K;
	cin >> s >> K;
	s--;
	vector<int> t(K + 1);
	for (int i = 0; i < K; i++) {
		cin >> t[i];
		t[i]--;
	}

	DMP(t);

	vector<vector<int>> td(K + 1);
	for (int i = 0; i < K; i++) {
		td[i] = Dijkstra(edges, t[i]);
	}
	DMP(td);

	priority_queue<pair<int, pair<int, int>>> pq;
	for (int i = 0; i < K; i++) {
		for (int j = i + 1; j < K; j++) {
			pq.emplace(td[find(t.begin(), t.end(), t[i]) - t.begin()][t[j]], make_pair(t[i], t[j]));
		}
	}

	lint ans = 0;
	UnionFind uf(N);
	while (!pq.empty()) {

		auto &[len, p] = pq.top();
		pq.pop();
		auto &[u, v] = p;

		if (!uf.is_same(u, v)) {
			uf.unify(u, v);
			ans += len;
		}

	}

	int st = INF;
	auto ds = Dijkstra(edges, s);
	for (int i = 0; i < K; i++) {
		chmin(st, ds[t[i]]);
	}

	cout << ans + st << "\n";

	return 0;
}

