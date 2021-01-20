
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

    if (N == 1 && M == 0) {
        cout << "1 2\n";
        return 0;
    }

    if (M < 0 || M > N - 2) {
        cout << "-1\n";
        return 0;
    }

    vector<int> L(N), R(N);
    for (int i = 0; i < N; i++) {
        L[i] = 2 * i + 1;
        R[i] = 2 * i + 2;
    }

    int m = N - 2 - M;
    R[m] = INF >> 1;

    for (int i = 0; i < N; i++) {
        cout << L[i] << ' ' << R[i] << '\n';
    }

    return 0;
}
