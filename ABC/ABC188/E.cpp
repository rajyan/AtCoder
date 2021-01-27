
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
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <functional>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

class TopologicalSort {
private:
    int V;
    vector<vector<int>> edges;
    vector<int> used;

public:
    explicit TopologicalSort(int n) : V(n), edges(n), used(n) {}
    explicit TopologicalSort(vector<vector<int>> &edges) : V(edges.size()), used(edges.size()) { this->edges = edges; }

    void add_edge(int from, int to) { edges[from].emplace_back(to); }

    vector<int> build() {

        vector<int> res, in(V);
        for (int i = 0; i < V; i++) for (const auto &e : edges[i]) in[e]++;

        res.reserve(V);
        queue<int> que;
        for (int i = 0; i < V; i++) {
            if (in[i] == 0 && !used[i]) {
                used[i] = 1;
                que.emplace(i);
            }
        }
        while (!que.empty()) {
            int now = que.front();
            DMP(now, in);
            que.pop();
            res.emplace_back(now);
            for (const auto &e : edges[now]) {
                in[e]--;
                if (in[e] == 0) {
                    if (used[e]) return vector<int>(); // unable to sort
                    used[e] = used[now] + 1;
                    que.emplace(e);
                }
            }
        }

        return res;
    }

    int longest_path() {
        if (none_of(used.begin(), used.end(), [](int u) { return u > 0; })) build();
        return *max_element(used.begin(), used.end()) - 1;
    }

};

template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

int main() {

    int N, M;
    cin >> N >> M;

    vector<lint> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<vector<int>> edges(N);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        edges[u].emplace_back(v);
    }

    lint ans = -LINF;
    vector<lint> m(N, LINF);
    TopologicalSort ts(edges);
    auto v = ts.build();
    for (int i = 0; i < N; i++) {
        int now = v[i];
        chmax(ans, A[now] - m[now]);
        chmin(m[now], A[now]);
        for (const auto &next : edges[now]) {
            chmin(m[next], m[now]);
        }
    }

    cout << ans << '\n';

    return 0;
}
