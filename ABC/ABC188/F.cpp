
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

    map<lint, lint> mp;
    mp[X] = 0;
    auto dfs = [&](auto &&f, lint now) -> lint {

        if (now == 0) return LINF;
        if (mp.find(now) != mp.end()) return mp[now];

        mp[now] = abs(now - X);
        if (now % 2 == 0) {
            chmin(mp[now], f(f, now / 2) + 1);
        }
        else {
            chmin(mp[now], f(f, now + 1) + 1);
            chmin(mp[now], f(f, now - 1) + 1);
        }

        return mp[now];
    };

    cout << dfs(dfs, Y) << '\n';

    DMP(mp);

    return 0;
}
