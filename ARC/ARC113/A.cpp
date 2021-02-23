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

template<class T, class F>
T bisearch(T OK, T NG, F f) {
    T ok = OK;
    T ng = NG;

    while (abs(ok - ng) > 1) {
        auto mid = (ok + ng) / 2;

        if (f(mid)) ok = mid;
        else ng = mid;
    }

    return ok;
}

int main() {

    int K;
    cin >> K;

    lint ans = 0;
    for (int i = 1; i * i <= K; i++) {
        for (int j = i; j * j <= K; j++) {
            auto check = [&](int k) { return 1LL * i * j * k <= K; };
            int k = bisearch(0, K + 1, check);
            DMP(i, j, k);
            if (j > k) continue;
            if (i == j) {
                ans += 3 * (k - j);
                ans += 1;
            }
            else {
                ans += 6 * (k - j);
                ans += 3;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}
