
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

int div(lint k, lint r, lint m) noexcept {
    lint a = (r % m + m) % m, b = m, u = 1, v = 0;
    while (b) {
        lint t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    k = k * u % m;
    if (k < 0) k += m;
    return k;
}

int main() {

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        lint n, s, k;
        cin >> n >> s >> k;
        int g = gcd(gcd(n, s), k);
        n /= g, s /= g, k /= g;
        
        if (s != 0 && gcd(n, k) != 1) {
            cout << -1 << '\n';
            continue;
        }
        
        cout << div(s, -k, n) << '\n';

    }

    return 0;
}
