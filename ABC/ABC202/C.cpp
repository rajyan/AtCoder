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

    int N;
    cin >> N;

    vector<int> A(100000), B(N), C(100000);
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        A[a]++;
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }
    for (int i = 0; i < N; ++i) {
        int c;
        cin >> c;
        C[c - 1]++;
    }

    lint ans = 0;
    for (int i = 0; i < N; ++i) {
        ans += 1LL * A[B[i]] * C[i];
    }

    cout << ans << '\n';

    return 0;
}
