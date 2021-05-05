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
#include <array>

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

template<class T>
vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
template<class... Size>
auto make_vec(size_t s, Size... tail) {
    return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
}

int main() {

    int N;
    cin >> N;

    vector<array<int, 5>> ability(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> ability[i][j];
        }
    }

    auto judge = [&](int now) -> bool {
        auto dp = make_vec((1 << 5), 3, 0);
        for (int i = 0; i < N; i++) {
            int bit = 0;
            for (int j = 0; j < 5; j++) {
                if (now <= ability[i][j]) bit += (1 << j);
            }
            dp[bit][0] = 1;
            for (int j = 0; j < (1 << 5); j++) {
                for (int k = 0; k < 2; k++) {
                    dp[j | bit][k + 1] |= dp[j][k];
                }
            }
        }
        DMP(dp);
        return dp[(1 << 5) - 1][2];
    };

    cout << bisearch(0, INF, judge);

    return 0;
}
