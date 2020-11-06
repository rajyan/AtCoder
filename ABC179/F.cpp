#ifdef _DEBUG
#include "../../library/library/debug_template.cpp"
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
#include <functional>

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

// https://github.com/beet-aizu/library/blob/master/segtree/basic/ushi.cpp
template <typename T>
struct SegmentTree {
    using F = function<T(T, T)>;
    int n;
    F f;
    T ti;
    vector<T> dat;

    SegmentTree(F f, T ti) :f(f), ti(ti) {}

    void init(int n_) {
        n = 1;
        while (n < n_) n <<= 1;
        dat.assign(n << 1, ti);
    }

    void build(const vector<T>& v) {
        int n_ = v.size();
        init(n_);
        for (int i = 0; i < n_; i++) dat[n + i] = v[i];
        for (int i = n - 1; i; i--)
            dat[i] = f(dat[(i << 1) | 0], dat[(i << 1) | 1]);
    }

    void set_val(int k, T x) {
        dat[k += n] = x;
        while (k >>= 1)
            dat[k] = f(dat[(k << 1) | 0], dat[(k << 1) | 1]);
    }

    T query(int a, int b) {
        if (a >= b) return ti;
        T vl = ti, vr = ti;
        for (int l = a + n, r = b + n; l < r; l >>= 1, r >>= 1) {
            if (l & 1) vl = f(vl, dat[l++]);
            if (r & 1) vr = f(dat[--r], vr);
        }
        return f(vl, vr);
    }

    template<typename C>
    int find(int st, C& check, T& acc, int k, int l, int r) {
        if (l + 1 == r) {
            acc = f(acc, dat[k]);
            return check(acc) ? k - n : -1;
        }
        int m = (l + r) >> 1;
        if (m <= st) return find(st, check, acc, (k << 1) | 1, m, r);
        if (st <= l and !check(f(acc, dat[k]))) {
            acc = f(acc, dat[k]);
            return -1;
        }
        int vl = find(st, check, acc, (k << 1) | 0, l, m);
        if (~vl) return vl;
        return find(st, check, acc, (k << 1) | 1, m, r);
    }

    template<typename C>
    int find(int st, C& check) {
        T acc = ti;
        return find(st, check, acc, 1, 0, n);
    }
};

int main() {

    int N, Q;
    cin >> N >> Q;
    vector<int> q(Q), x(Q);
    for (int i = 0; i < Q; i++) cin >> q[i] >> x[i];
    for (int i = 0; i < Q; i++) x[i]--;

    vector<int> row(N, 1), col(N, 1);
    row[N - 1] = col[N - 1] = N;

    auto f = [](int a, int b) { return max(a, b); };
    SegmentTree<int> seg_r(f, 0), seg_c(f, 0);
    seg_r.build(row);
    seg_c.build(col);

    for (int i = 0; i < Q; i++) {
        auto check = [&](int p) {return p > x[i]; };
        if (--q[i]) {
            seg_c.set_val(x[i], seg_r.find(0, check));
        }
        else {
            seg_r.set_val(x[i], seg_c.find(0, check));
        }
    }

    lint ans = 1LL * N * N;
    for (int i = 0; i < N; i++) {
        //DMP(seg_c.query(i, i + 1));
        ans -= seg_c.query(i, i + 1);
    }
    for (int i = 0; i < N; i++) {
        //DMP(seg_r.query(i, i + 1));
        ans -= seg_r.query(i, i + 1);
    }

    cout << ans + 2 << "\n";

	return 0;
}
