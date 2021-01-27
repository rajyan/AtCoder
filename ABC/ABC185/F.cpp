
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
#include <array>

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
class FenwickTree {
private:
    int n;
    vector<T> bit;
public:
    explicit FenwickTree(int sz, T &&x = T(0)) : n(sz), bit(n + 1) {
        for (int i = 0; i < n; i++) add(i, x);
    }

    T sum(int k) const {
        T res = 0;
        for (k--; k >= 0; k = (k & (k + 1)) - 1) res ^= bit[k];
        return res;
    }
    T sum(int l, int r) const { return sum(r) ^ sum(l); }

    void add(int k, const T &x) {
        for (; k < n; k |= k + 1) bit[k] ^= x;
    }
    void set(int k, const T &x) { add(k, x - sum(k, k + 1)); }
};


int main() {

    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<array<int, 3>> TXY(Q);
    for (int i = 0; i < Q; i++) cin >> TXY[i][0] >> TXY[i][1] >> TXY[i][2];

    FenwickTree<int> ft(N);
    for (int i = 0; i < N; i++) {
        ft.set(i, A[i]);
    }
    for (int i = 0; i < Q; i++) {
        auto[t, x, y] = TXY[i];
        t--, x--;
        if (t) {
            cout << ft.sum(x, y) << '\n';
        }
        else {
            ft.add(x, y);
        }
    }

    return 0;
}
