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

int main() {


    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int x, y;
        cin >> x >> y;

        string s;
        cin >> s;

        string ss;
        for (const auto &c : s) {
            if (c != '?') ss += c;
        }

        int ans = 0;
        for (int i = 0; i < (int)s.size() - 1; i++) {
            if (s[i] == 'C' && s[i + 1] == 'J') ans += x;
            if (s[i] == 'J' && s[i + 1] == 'C') ans += y;
        }

        cout << "Case #" << (t + 1) << ": " << ans << '\n';
    }

    return 0;
}
