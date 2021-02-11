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
class FenwickTree {
public:
    explicit FenwickTree(int sz, T &&x = T{}) : n(sz), bit(n + 1) {
        for (int i = 0; i < n; i++) add(i, x);
    }

    [[nodiscard]] T sum(int k) const {
        T res = 0;
        for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];
        return res;
    }
    [[nodiscard]] T sum(int l, int r) const { return sum(r) - sum(l); }

    void add(int k, const T &x) {
        for (; k < n; k |= k + 1) bit[k] += x;
    }
    void set(int k, const T &x) { add(k, x - sum(k, k + 1)); }
private:
    int n;
    vector<T> bit;
};

int main() {

    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    FenwickTree<int> ft(N);
    lint inversion = 0;
    for (int i = 0; i < N; i++) {
        ft.add(a[i], 1);
        inversion += ft.sum(a[i] + 1, N);
    }

    for (int i = 0; i < N; i++) {
        cout << inversion << '\n';
        inversion += ((N - 1) - a[i]) - a[i];
    }

    return 0;
}
