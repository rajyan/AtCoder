#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

const int MOD = 1000000007;
using namespace std;
using lint = long long;

template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
	for (int i = 0; i < (int)vec.size(); i++) {
		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
	}
	return os;
}

#ifdef _DEBUG
template <class Head>
void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
template <class Head, class... Tail>
void dump(const char* str, Head &&h, Tail &&... t) {
	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
	dump(str + 1, t...);
}
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

template<class T = lint>
struct Edge {
	int from, to;
	T cost;
	Edge() {}
	Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
};

template<class T>
vector<T> Bellman_Ford(vector<Edge<T>> &edges, int V, int st) {

	const T inf = numeric_limits<T>::max(); // different from INF!!!
	vector<T> dist(V, inf);
	dist[st] = 0;
	for (int i = 0; i < V - 1; i++) {
		for (const auto &e : edges) {
			if (dist[e.from] == inf) continue;
			dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);
		}
	}

	for (int i = 0; i < V; i++) {
		for (const auto &e : edges) { // finding negative loop
			if (dist[e.from] == inf) continue;
			DMP(dist);
			if (dist[e.from] == -inf) dist[e.to] = -inf; // src is nloop -> dst is nloop
			else if (dist[e.to] > dist[e.from] + e.cost) dist[e.to] = -inf; // chmin is possible -> nloop
		}
		DMP(dist);
	}

	return dist;
}

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, M, P;
	cin >> N >> M >> P;

	int a, b, c;
	vector<Edge<int>> edges(M);
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		a--, b--;
		edges[i] = { a, b, P - c };
	}

	auto dist = Bellman_Ford(edges, N, 0);
	
	lint ans = -dist.back();
	if (ans == numeric_limits<int>::max()) cout << "-1\n";
	else if (ans < 0) cout << "0\n";
	else cout << ans << "\n";

	return 0;
}
