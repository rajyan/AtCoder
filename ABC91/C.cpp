#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111; 
using namespace std;
using lint = long long;

struct BipartiteMatching {
	vector< vector< int > > graph;
	vector< int > match, alive, used;
	int timestamp;

	BipartiteMatching(int n) : graph(n), alive(n, 1), used(n, 0), match(n, -1), timestamp(0) {}

	void add_edge(int u, int v) {
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	bool dfs(int idx) {
		used[idx] = timestamp;
		for (auto &to : graph[idx]) {
			int to_match = match[to];
			if (alive[to] == 0) continue;
			if (to_match == -1 || (used[to_match] != timestamp && dfs(to_match))) {
				match[idx] = to;
				match[to] = idx;
				return true;
			}
		}
		return false;
	}

	int bipartite_matching() {
		int ret = 0;
		for (int i = 0; i < graph.size(); i++) {
			if (alive[i] == 0) continue;
			if (match[i] == -1) {
				++timestamp;
				ret += dfs(i);
			}
		}
		return ret;
	}

	void output() {
		for (int i = 0; i < graph.size(); i++) {
			if (i < match[i]) {
				cout << i << "-" << match[i] << endl;
			}
		}
	}
};

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<pair<int, int>> ab(N), cd(N);
	for (int i = 0; i < N; i++) cin >> ab[i].first >> ab[i].second;
	for (int i = 0; i < N; i++) cin >> cd[i].first >> cd[i].second;

	BipartiteMatching bm(2 * N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {

			if (ab[i].first < cd[j].first && ab[i].second < cd[j].second) {
				bm.add_edge(i, N + j);
			}

		}
	}

	cout << bm.bipartite_matching() << "\n";

	return 0;
}