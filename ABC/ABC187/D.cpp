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
        cin.tie(nullptr); ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    int N;
    cin >> N;

    vector<lint> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

    vector<lint> sum(N);
    for (int i = 0; i < N; i++) {
        sum[i] = 2 * A[i] + B[i];
    }
    sort(sum.begin(), sum.end(), greater<>());

    lint Asum = accumulate(A.begin(), A.end(), 0LL);
    int ans = 0;
    while (Asum >= 0) {
        Asum -= sum[ans];
        ans++;
    }

    cout << ans << "\n";

    return 0;
}
