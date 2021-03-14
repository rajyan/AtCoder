#ifdef _DEBUG
#include "../../../library/src/debug_template.hpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <array>
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

int main() {

    int N, M, Q;
    cin >> N >> M >> Q;

    vector<array<int, 2>> WV(N);
    vector<int> X(M);
    for (int i = 0; i < N; i++) cin >> WV[i][0] >> WV[i][1];
    for (int i = 0; i < M; i++) cin >> X[i];

    sort(WV.begin(), WV.end(), [](auto l, auto r) { return l[1] > r[1]; });
    for (int i = 0; i < Q; i++) {

        int l, r;
        cin >> l >> r;

        vector<int> x;
        for (int j = 0; j < M; j++) {
            if (l - 1 <= j && j <= r - 1) continue;
            x.emplace_back(X[j]);
        }
        sort(x.begin(), x.end());

        vector<int> used(x.size());
        int ans = 0;
        for (int j = 0; j < N; j++) {
            auto it = upper_bound(x.begin(), x.end(), WV[j][0] - 1);
            if (it == x.end()) continue;
            x.erase(it);
            ans += WV[j][1];
        }
        
        cout << ans << '\n';
    }

    return 0;
}
