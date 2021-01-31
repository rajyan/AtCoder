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

int main() {

    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; i++) cin >> P[i];

    vector<int> used(N), ans;
    for (int i = 0; i < N - 1; i++) {
        int j = i;
        while (P[j] > P[j + 1]) {
            if (!used[j]) {
                swap(P[j], P[j + 1]);
                ans.emplace_back(j + 1);
                used[j] = 1;
                if (j != 0) j--;
            }
            else break;
        }
    }

    if ((int)ans.size() == N - 1 && is_sorted(P.begin(), P.end())) {
        for (const auto &item : ans) {
            cout << item << '\n';
        }
    }
    else {
        cout << -1 << '\n';
    }

    return 0;
}
