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
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

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
pair<vector<T>, vector<int>> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {

    const int V = (int)edges.size();
    const T inf = numeric_limits<T>::max() / 2;
    vector<T> cost(V, inf);
    vector<int> prev(V);
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
                prev[e.to] = now.to;
                pq.emplace(e.to, cost[e.to]);
            }
        }
    }

    return {cost, prev}; // min cost to vertex idx from st
}

int main() {

    string f, l;
    cin >> f >> l;

    int N;
    cin >> N;
    vector<string> s(N);
    for (int i = 0; i < N; i++) cin >> s[i];
    s.emplace_back(f);
    s.emplace_back(l);
    N += 2;

    const int sz = f.size();
    vector<vector<Edge<int>>> edges(N);
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int cnt = 0;
            for (int k = 0; k < sz; k++) {
                cnt += s[i][k] != s[j][k];
            }
            if (cnt <= 1) {
                edges[i].emplace_back(j, 1);
                edges[j].emplace_back(i, 1);
            }
        }
    }

    auto[cost, prev] = Dijkstra(edges, N - 2);
    if (cost[N - 1] > INF) {
        cout << -1 << '\n';
        return 0;
    }

    cout << cost[N - 1] - 1 << '\n';
    vector<string> ans{l};
    int index = N - 1;
    while (index != N - 2) {
        ans.emplace_back(s[prev[index]]);
        index = prev[index];
    }
    reverse(ans.begin(), ans.end());
    for (const auto &item : ans) {
        cout << item << '\n';
    }

    return 0;
}
