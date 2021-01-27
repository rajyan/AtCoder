#ifdef _DEBUG
#include "../../../library/src/debug_template.hpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
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

struct init {
    init() {
        cin.tie(nullptr); ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

class LCA {
private:

    int N, lg_N;
    vector<int> depth;
    vector<vector<int>> par;

    void build(const vector<vector<int>>& tree, int root) {

        auto dfs = [&](auto&& f, int now) -> void {
            for (const auto& next : tree[now]) {
                if (par[0][next] == -1) {
                    par[0][next] = now;
                    depth[next] = depth[now] + 1;
                    f(f, next);
                }
            }
        };

        par[0][root] = root;
        dfs(dfs, root);

        for (int bit = 0; bit < lg_N; bit++) {
            for (int i = 0; i < N; i++) {
                par[bit + 1][i] = par[bit][par[bit][i]];
            }
        }
    }

    int ancestor(int now, int n) {
        if (n <= 0) return now;
        for (int i = 0, lg_n = 32 - nlz(n); i < lg_n; i++) {
            if (n & (1LL << i)) now = par[i][now];
        }
        return now;
    }

    int nlz(unsigned int x) {
        union {
            unsigned int as_uint32;
            float as_float;
        } data;
        data.as_float = (float)x + 0.5;
        int n = 158 - (data.as_uint32 >> 23);
        return n;
    }

public:
    LCA(const vector<vector<int>>& tree, int root = 0) : N(tree.size()), lg_N(32 - nlz(N)), depth(N),
                                                         par(lg_N + 1, vector<int>(N, -1)) {
        build(tree, root);
    }

    int get_lca(int u, int v) {

        if (depth[u] < depth[v]) swap(u, v);
        u = ancestor(u, depth[u] - depth[v]);
        if (u == v) return u;

        for (int i = 32 - nlz(depth[u]); i >= 0; i--) {
            if (par[i][u] != par[i][v]) {
                u = par[i][u];
                v = par[i][v];
            }
        }
        return par[0][u];
    }

    int dist(int u, int v) {
        return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];
    }
};


int main() {

    int N;
    cin >> N;
    vector<vector<int>> edges(N);
    vector<int> a(N), b(N);
    for (int i = 0; i < N - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        a[i] = u;
        b[i] = v;
        edges[u].emplace_back(v);
        edges[v].emplace_back(u);
    }

    int Q;
    cin >> Q;
    vector<int> t(Q), e(Q), x(Q);
    for (int i = 0; i < Q; i++) cin >> t[i] >> e[i] >> x[i];

    LCA tree(edges, 0);
    vector<lint> c(N);

    for (int i = 0; i < Q; i++) {
        e[i]--;
        int ai = a[e[i]], bi = b[e[i]];
        if (t[i] == 2) swap(ai, bi);
        int lca = tree.get_lca(ai, bi);
        DMP(lca);
        if (lca == bi) c[ai] += x[i];
        else {
            c[bi] -= x[i];
            c[0] += x[i];
        }
    }

    auto dfs = [&](auto &&f, int now, int par) -> void {
        for (const auto& e : edges[now]) {
            if (e == par) continue;
            c[e] += c[now];
            f(f, e, now);
        }
    };

    dfs(dfs, 0, -1);

    for (int i = 0; i < N; i++) {
        cout << c[i] << "\n";
    }

    return 0;
}
