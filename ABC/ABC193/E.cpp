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


void solve() {

    mp::cpp_int X, Y, P, Q;
    cin >> X >> Y >> P >> Q;

    const mp::cpp_int r = 2 * (X + Y);

    mp::cpp_int st = P - X;
    while (st <= 0) st += P + Q;
    mp::cpp_int now = st;
    for (int i = 0; i < 1000000; i++, now += P + Q) {
        if (now % r < Y) {
            cout << now + X << '\n';
            return;
        }
        if ((now + Q - 1) % r < Y) {
            cout << (now + Q - 1) / r * r + X << '\n';
            return;
        }
    }
    cout << "infinity" << '\n';
}

int main() {

    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        solve();
    }

    return 0;
}
