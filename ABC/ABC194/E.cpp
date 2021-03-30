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

    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int> cnt(N + 1);
    // fill cnt for [0, M)
    for (int i = 0; i < M; i++) {
        cnt[A[i]]++;
    }
    int ans = N + 1;
    // find initial mex
    for (int i = 0; i <= N; i++) {
        if (cnt[i] == 0) {
            ans = i;
            break;
        }
    }

    // slide window
    for (int i = 0; i + M < N; i++) {
        cnt[A[i + M]]++;
        cnt[A[i]]--;
        if (cnt[A[i]] == 0) chmin(ans, A[i]);
    }

    cout << ans << '\n';

    return 0;
}
