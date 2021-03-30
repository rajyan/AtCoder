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
#include <array>
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

auto f_ = [](lint x, array<lint, 2> at) {
    auto[a, t] =at;
    if (t == 1) {
        return x + a;
    }
    else if (t == 2) {
        return max(x, a);
    }
    else if (t == 3) {
        return min(x, a);
    }
    else abort();
};

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

    int N;
    cin >> N;

    vector<array<lint, 2>> at(N);
    for (int i = 0; i < N; i++) cin >> at[i][0] >> at[i][1];

    auto f_N = [&at](lint x) {
        for (auto i : at) {
            x = f_(x, i);
        }
        return x;
    };

    lint low = bisearch(-INF, INF, [&](lint x) {
        return f_N(-INF) == f_N(x);
    });
    lint high = bisearch(INF, -INF, [&](lint x) {
        return f_N(INF) == f_N(x);
    });
    lint offset = 0;
    for (const auto &[a, t] : at) {
        if (t == 1) offset += a;
    }
    
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        lint x;
        cin >> x;
        x = clamp(x, low, high);
        cout << x + offset << '\n';
    }

    return 0;
}
