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
#include <variant>

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
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

template<class T>
struct Edge {
    int from{}, to{};
    T cost;
    Edge() = default;
    Edge(int to, T cost) : to(to), cost(move(cost)) {}
    Edge(int from, int to, T cost) : from(from), to(to), cost(move(cost)) {}
    bool operator>(const Edge &r) const { return this->cost > r.cost; }
};

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

    int R, C;
    cin >> R >> C;

    vector<vector<Edge<lint>>> edges(R * C * 2);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C - 1; j++) {
            int a;
            cin >> a;
            edges[i * C + j].emplace_back(i * C + j + 1, a);
            edges[i * C + j + 1].emplace_back(i * C + j, a);
        }
    }
    for (int i = 0; i < R - 1; i++) {
        for (int j = 0; j < C; j++) {
            int b;
            cin >> b;
            edges[i * C + j].emplace_back((i + 1) * C + j, b);
            edges[(i + 1) * C + j].emplace_back(i * C + j + R * C, 1);
        }
    }
    for (int i = 0; i < R - 1; i++) {
        for (int j = 0; j < C; j++) {
            edges[(i + 1) * C + j + R * C].emplace_back(i * C + j + R * C, 1);
        }
    }
    for (int i = 0; i < R - 1; i++) {
        for (int j = 0; j < C; j++) {
            edges[i * C + j + R * C].emplace_back(i * C + j, 1);
        }
    }
    
    cout << Dijkstra(edges, 0)[R * C - 1] << '\n';

    return 0;
}
