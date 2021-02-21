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
constexpr int INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

template<class T>
struct Edge {
    int from{}, to{};
    T cost;
    Edge() = default;
    Edge(int to, T cost) : to(to), cost(cost) {}
    Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
    bool operator>(const Edge &r) const { return this->cost > r.cost; }
};

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

template<class T>
vector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {

    const int V = (int)edges.size();
    const T inf = numeric_limits<T>::max() / 2;
    vector<T> cost(V, inf);
    cost[st] = 0;

    priority_queue<Edge<T>, vector<Edge<T>>, greater<>> pq;
    pq.emplace(st, cost[st]);

    while (!pq.empty()) {

        Edge<T> now(pq.top().to, pq.top().cost);
        pq.pop();

        if (cost[now.to] < now.cost) continue;
        for (const Edge<T> &e : edges[now.to]) {
            T tmp_cost = now.cost + e.cost;
            if (chmin(cost[e.to], tmp_cost)) {
                pq.emplace(e.to, cost[e.to]);
            }
        }
    }

    return cost; // min cost to vertex idx from st
}


int main() {

    int N, M;
    cin >> N >> M;

    vector<vector<Edge<lint>>> edges(N);
    for (int i = 0; i < M; i++) {
        lint u, v, t, k;
        cin >> u >> v >> t >> k;
        u--, v--;
        edges[u].emplace_back(k, v, t);
        edges[v].emplace_back(k, u, t);
    }

    return 0;
}
