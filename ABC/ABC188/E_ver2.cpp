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
    for (int i = 0; i < N; i++) {
        chmax(ans, A[i] - m[i]);
        chmin(m[i], A[i]);
        for (const auto &next : edges[i]) {
            chmin(m[next], m[i]);
        }
    }

    cout << ans << '\n';

    return 0;
}
