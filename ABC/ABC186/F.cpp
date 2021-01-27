
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
#include <array>
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
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

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
        for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];
        return res;
    }
    T sum(int l, int r) const { return sum(r) - sum(l); }

    void add(int k, const T &x) {
        for (; k < n; k |= k + 1) bit[k] += x;
    }
    void set(int k, const T &x) { add(k, x - sum(k, k + 1)); }
};

int main() {

    int H, W, M;
    cin >> H >> W >> M;

    vector<array<int, 2>> XY(M);
    for (int i = 0; i < M; i++) cin >> XY[i][0] >> XY[i][1];
    for (int i = 0; i < M; i++) XY[i][0]--, XY[i][1]--;
    sort(XY.begin(), XY.end());

    int w = W, h = H;
    vector<int> mh(H, W), mw(W, H);
    for (int i = 0; i < M; i++) {
        if (XY[i][0] == 0) chmin(W, XY[i][1]);
        if (XY[i][1] == 0) chmin(H, XY[i][0]);
        chmin(mh[XY[i][0]], XY[i][1]);
        chmin(mw[XY[i][1]], XY[i][0]);
    }

    lint ans = accumulate(mh.begin(), mh.begin() + h, 0LL) + accumulate(mw.begin(), mw.begin() + w, 0LL);
    FenwickTree<int> ft(W, 0);
    for (int i = 0; i < w; i++) {
        ft.set(i, 1);
    }
    auto itr = XY.begin();
    for (int i = 0; i < h; i++) {
        while (itr != XY.end() && (*itr)[0] <= i) {
            ft.set((*itr)[1], 0);
            itr++;
        }
        ans -= ft.sum(mh[i]);
    }

    cout << ans << '\n';

    return 0;
}
