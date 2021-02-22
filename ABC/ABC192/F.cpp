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
vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
template<class... Size>
auto make_vec(size_t s, Size... tail) {
    return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
}

template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

int main() {

    lint N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    lint ans = LINF;
    for (int m = 1; m <= N; m++) {
        // 前からi個みて、j個使ったとき、k (mod m) の中での最大値
        auto dp = make_vec(2, N + 1, m, -LINF);
        dp[0][0][0] = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                for (int k = 0; k < m; k++) {
                    chmax(dp[(i + 1) & 1][j][k], dp[i & 1][j][k]);
                    chmax(dp[(i + 1) & 1][j + 1][(k + A[i]) % m], dp[i & 1][j][k] + A[i]);
                }
            }
        }
        lint M = dp[N & 1][m][X % m];
        if (M < 0) continue;
        assert((X - M) % m == 0);
        chmin(ans, (X - M) / m);
    }

    cout << ans << '\n';

    return 0;
}
