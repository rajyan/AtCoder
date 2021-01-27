
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

template<class T>
vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
template<class... Size>
auto make_vec(size_t s, Size... tail) {
    return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
}

int main() {

    int N;
    cin >> N;

    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];

    auto dp = make_vec(N + 1, 2, 0LL);
    dp[0][0] = 1;
    dp[0][1] = 1;

    for (int i = 0; i < N; i++) {
        if (S[i] == "AND") {
            dp[i + 1][1] = dp[i][1];
            dp[i + 1][0] = 2 * dp[i][0] + dp[i][1];
        }
        else {
            dp[i + 1][1] = dp[i][0] + 2 * dp[i][1];
            dp[i + 1][0] = dp[i][0];
        }
    }
    DMP(dp);
    
    cout << dp[N][1] << '\n';

    return 0;
}
