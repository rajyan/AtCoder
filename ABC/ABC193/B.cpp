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

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

int main() {

    int N;
    cin >> N;

    int ans = INF;
    for (int i = 0; i < N; i++) {
        int a, p, x;
        cin >> a >> p >> x;
        if (x - a > 0) chmin(ans, p);
    }

    cout << ((ans == INF) ? -1 : ans) << '\n';

    return 0;
}
