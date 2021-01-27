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
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>

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

template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

int main() {

    int N, T;
    cin >> N >> T;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    if (N & 1) {
        A.emplace_back(0);
        N++;
    }

    int half = N / 2;
    vector<lint> l(1 << half), r(1 << half);
    for (int bit = 0; bit < (1 << half); ++bit) {
        for (int i = 0; i < half; ++i) {
            if (bit >> i & 1) {
                l[bit] += A[i];
            }
        }
        for (int i = 0; i < half; ++i) {
            if (bit >> i & 1) {
                r[bit] += A[i + half];
            }
        }
    }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());

    lint ans = 0, ri = (1 << half) - 1;
    for (int i = 0; i < 1 << half; ++i) {
        while (ri >= 0 && l[i] + r[ri] > T) ri--;
        if (ri < 0) break;
        chmax(ans, l[i] + r[ri]);
    }

    cout << ans << '\n';

    return 0;
}
