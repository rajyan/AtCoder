
#define PROBLEM "https://judge.yosupo.jp/problem/lca"

#include "../../library/library/makevec.cpp"
#include "../../library/library/nlz.cpp"
#include "../../library/library/LowestCommonAncestor.cpp"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

int main() {

	int N, Q;
	cin >> N >> Q;

	auto edges = make_vec(N, 0, 0);
	for (int i = 0; i < N - 1; i++) {
		int p;
		cin >> p;
		edges[p].emplace_back(i + 1);
		edges[i + 1].emplace_back(p);
	}

	LCA lca(edges);
	for (int i = 0; i < Q; i++) {
		int u, v;
		cin >> u >> v;
		cout << lca.get_lca(u, v) << "\n";
	}

	return 0;
}
