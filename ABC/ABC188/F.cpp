
#ifdef _DEBUG
#include "../../../library/src/debug_template.cpp"
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

inline int clz(lint x) {
    union {
        unsigned long long as_uint64;
        double as_double;
    } data{};
    data.as_double = (double)x + 0.5;
    int n = 1054 - (int)(data.as_uint64 >> 52);
    return 32 + n;
}

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

int main() {

    lint X, Y;
    cin >> X >> Y;

    if (X >= Y) {
        cout << X - Y << '\n';
        return 0;
    }
    int ans = INF;
    int s = clz(X) - clz(Y);

    auto asc = [&] (int S) -> int {
        lint x = X << S;
        lint y = Y;
        DMP(x, y, S);
        if (x > y) swap(x, y);
        int bit = 0, res = 0;
        while (y != x && bit <= S) {
            if (((y >> bit) ^ (x >> bit)) & 1) {
                x += (1LL << bit);
                res++;
            }
            bit++;
        }
        DMP(res);
        return res + y - x;
    };

    DMP(s);

    for (int i = 0; i <= s + 1; i++) {
        chmin(ans, i + asc(i));
    }

    cout << ans << '\n';

    return 0;
}
