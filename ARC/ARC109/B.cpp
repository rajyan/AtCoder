
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

int main() {

    lint n;
    cin >> n;

    auto judge = [&](auto key) {
        return (key + 1) <= 2 * (n + 1) / key;
    };

    auto bisearch = [&](auto f) {

        auto ng = n + 1;
        auto ok = 1LL;

        while (abs(ok - ng) > 1) {
            auto mid = (ok + ng) / 2;

            if (f(mid)) ok = mid;
            else ng = mid;
        }

        return ok;
    };

    cout << n + 1 - bisearch(judge) << '\n';


    return 0;
}
