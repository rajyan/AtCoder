#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <random>
#include <chrono>

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111;
using namespace std;
using lint = long long;

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	if (M % 2 == 1) {
		cout << -1 << "\n";
		return 0;
	}

	int u, v;
	map<pair<int, int>, int> dir;
	vector<vector<int>> edge(N);
	vector<int> out(N);
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		u--, v--;
		edge[u].emplace_back(v);
		edge[v].emplace_back(u);
		if (u > v) swap(u, v);
		dir[{u, v}] = 1; // intial direction is u->v when u < v
		out[u] ^= 1;
	}

	vector<int> visited(N);
	struct graph {
		int now, prev, flip;
		graph(int now, int prev, int flip) :now(now), prev(prev), flip(flip) {}
	};
	queue<graph> que;
	que.emplace(0, -1, 0);

	while (!que.empty()) {

		auto g = que.front();
		que.pop();
		visited[g.now] = 1;

		DMP(g.prev);
		DMP(g.now);
		DMP(g.flip);

		if (out[g.now]) g.flip ^= 1;

		for (const auto &e : edge[g.now]) {
			if (!visited[e] && e != g.prev) {

				out[e] ^= g.flip;
				if (g.prev >= 0) {
					dir[minmax(g.now, g.prev)] ^= g.flip;
					out[g.prev] ^= g.flip;
				}
				que.emplace(e, g.now, g.flip);

			}
		}

	}
	if (*min_element(visited.begin(), visited.end()) == 0) exit(-1);

	for (const auto &elem : out) DMP(elem);
	for (auto &e : dir) {
		if (e.second == 1) cout << e.first.first + 1 << " " << e.first.second + 1 << "\n";
		else cout << e.first.second + 1 << " " << e.first.first + 1 << "\n";
	}

	return 0;
}
