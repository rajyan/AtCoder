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

void solve(int n, int c) {
    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 1);
    do {
        auto L = ans;
        int now = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i; j < n; j++) {
                if (i == L[j] - 1) {
                    now += j - i + 1;
                    reverse(L.begin() + i, L.begin() + j + 1);
                }
            }
        }
        if (now == c) {
            for (const auto &item : ans) {
                cout << item << ((&item != &ans.back()) ? ' ' : '\n');
            }
            return;
        }

    } while (next_permutation(ans.begin(), ans.end()));
    cout << "IMPOSSIBLE" << '\n';
}

int main() {

    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int n, c;
        cin >> n >> c;
        cout << "Case #" << (t + 1) << ": ";
        solve(n, c);
    }

    return 0;
}
