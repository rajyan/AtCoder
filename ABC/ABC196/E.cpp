#ifdef _DEBUG
#include "../../../library/src/debug_template.hpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <array>
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

template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

int main() {

    int N;
    cin >> N;

    vector<array<lint, 2>> at(N);
    for (int i = 0; i < N; i++) {
        cin >> at[i][0] >> at[i][1];
    }

    lint offset = 0;
    lint high = LINF, low = -LINF;
    for (int i = 0; i < N; i++) {
        auto[a, t] = at[i];
        if (t == 1) {
            offset += a;
            high += a;
            low += a;
        }
        else if (t == 2) {
            chmax(low, a);
            chmax(high, a);
        }
        else if (t == 3) {
            chmin(low, a);
            chmin(high, a);
        }
    }

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        lint x;
        cin >> x;
        cout << clamp(x + offset, low, high) << '\n';
    }


    return 0;
}
