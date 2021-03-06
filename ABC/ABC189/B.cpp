
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

    int N, X;
    cin >> N >> X;
    X *= 100;

    vector<int> V(N), P(N);
    for (int i = 0; i < N; i++) cin >> P[i] >> V[i];

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += V[i] * P[i];
        if (sum > X) {
            cout << i + 1 << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';

    return 0;
}
