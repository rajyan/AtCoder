
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

inline int popcount(lint n) {
    n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);
    n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);
    n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);
    n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);
    n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);
    n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);
    return n;
}

inline int ctz(lint n) {
    return popcount(~n & (n - 1));
}

int main() {

    int N;
    cin >> N;

    vector<char> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    vector<int> b(N - 1);
    for (int i = 0; i < N - 1; i++) {
        b[i] = abs(a[i + 1] - a[i]);
    }
    DMP(b);

    // fact[n] = n!が2で割れる回数
    vector<int> fact(N);
    for (int i = 1; i < N; i++) {
        fact[i] = ctz(i) + fact[i - 1];
    }
    DMP(fact);

    int sum = 0;
    for (int i = 0; i < N - 1; i++) {
        // sigma N-2Ci * bi の偶奇が知りたいので、奇数のときだけ足せばよい
        sum += (fact[N - 2] - fact[i] - fact[N - 2 - i] == 0) * b[i];
    }

    if (sum & 1) {
        cout << 1 << '\n';
        return 0;
    }

    for (int i = 0; i < N - 1; i++) {
        sum += (fact[N - 2] - fact[i] - fact[N - 2 - i] == 0) * (b[i] / 2);
    }

    if (sum & 1 && none_of(b.begin(), b.end(), [](const int &e) { return e == 1; })) {
        cout << 2 << '\n';
        return 0;
    }

    cout << 0 << '\n';

    return 0;
}
