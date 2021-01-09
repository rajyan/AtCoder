
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

    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(M);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    vector<vector<int>> dp(N + 1, vector<int>(M + 1, INF));
    for (int i = 0; i <= N; i++) dp[i][0] = i;
    for (int j = 0; j <= M; j++) dp[0][j] = j;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            dp[i + 1][j + 1] = min({dp[i][j] + (A[i] != B[j]), dp[i + 1][j] + 1, dp[i][j + 1] + 1});
        }
    }

    DMP(dp);

    cout << dp[N][M] << '\n';

    return 0;
}
