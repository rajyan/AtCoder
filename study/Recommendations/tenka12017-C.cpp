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

    lint N;
    cin >> N;

    for (int i = 1; i <= 3500; i++) {
        for (int j = 1; j <= 3500; j++) {

            lint p = N * i * j;
            lint q = 4 * i * j - N * (i + j);

            if (q > 0 && p % q == 0) {
                cout << i << " " << j << " " << p / q << '\n';
                return 0;
            }
        }
    }

    return 0;
}
