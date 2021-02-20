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

template<class T, T (*F)(T, T), const T(*e) = nullptr>
class Monoid {
    class Identity {};

    constexpr static bool has_identity = (e != nullptr);
public:
    using type = T;
    using vt = conditional_t<has_identity, T, variant<Identity, T>>;

    [[nodiscard]] constexpr vt op(const vt &a, const vt &b) const {
        if constexpr (has_identity) return F(a, b);
        else if (a.index() == 1 && b.index() == 1) return F(get<T>(a), get<T>(b));
        else if (a.index() == 0) return b;
        else return a;
    };
    [[nodiscard]] constexpr vt identity() const {
        if constexpr (has_identity) return *e;
        else return Identity{};
    }
};

namespace monoid {
    constexpr auto op_add = [](auto l, auto r) { return l + r; };
    constexpr auto op_mul = [](auto l, auto r) { return l * r; };
    constexpr auto op_max = [](auto l, auto r) { return max(l, r); };
    constexpr auto op_min = [](auto l, auto r) { return min(l, r); };
    template<class T> T e_add = T{};
    template<class T> T e_mul = T{1};
    template<class T> T e_max = numeric_limits<T>::min();
    template<class T> T e_min = numeric_limits<T>::max();
    template<class T> using add = Monoid<T, monoid::op_add, &monoid::e_add<T>>;
    template<class T> using mul = Monoid<T, monoid::op_mul, &monoid::e_mul<T>>;
    template<class T> using mx = Monoid<T, monoid::op_max, &monoid::e_max<T>>;
    template<class T> using min = Monoid<T, monoid::op_min, &monoid::e_min<T>>;
}

inline int clz(lint x) {
    union {
        unsigned long long as_uint64;
        double as_double;
    } data{};
    data.as_double = (double)x + 0.5;
    int n = 1054 - (int)(data.as_uint64 >> 52);
    return 32 + n;
}

template<class M>
class SegmentTree {
    using T = typename M::type;
    using vt = typename M::vt;
public:
    explicit SegmentTree(const int &n_)
            : n(n_), lg(64 - clz(n)), sz(1 << lg),
              d(2 * sz, m.identity()) {
    }
    explicit SegmentTree(const vector<T> &v)
            : n((int)v.size()), lg(64 - clz(n)), sz(1 << lg),
              d(2 * sz, m.identity()) {
        for (int i = 0; i < n; i++) d[sz + i] = v[i];
        for (int i = sz - 1; i >= 0; i--) update(i);
    }

    void set(int k, const vt &x) {
        assert(0 <= k && k < n);
        k += sz, d[k] = x;
        for (int i = 1; i <= lg; i++) update(k >> i);
    }
    void add(const int &k, const vt &x) { set(k, m.op(d[k + sz], x)); }

    [[nodiscard]] vt sum(int l, int r) const {
        assert(l <= r);
        vt sml = m.identity(), smr = m.identity();
        l += sz, r += sz;

        while (l < r) {
            if (l & 1) sml = m.op(sml, d[l++]);
            if (r & 1) smr = m.op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return m.op(sml, smr);
    }
    [[nodiscard]] vt operator[](const int &k) const {
        assert(0 <= k && k < n);
        return d[k + sz];
    }
    template<class F>
    [[nodiscard]] int bisearch(const int &ok, const int &ng, const F &base_f) const {
        assert(0 <= ok && ok <= n - 1);
        assert(0 <= ng && ng <= n - 1);
        const bool flip = (ok > ng);
        auto f = [&](const int &k) { return flip ^ base_f(k); };
        T sm = m.identity();
        assert(f(sm));
        int k = min(ok, ng) + sz;
        do {
            while (~k & 1) k >>= 1; // Find the largest subtree with k as a lower bound
            if (!f(m.op(sm, d[k]))) {
                while (k < sz) {
                    vt now = m.op(sm, d[k]);
                    if (f(now) && (sm = now, true)) (k <<= 1) |= 1;
                    else k <<= 1;
                }
                return k + flip - sz;
            }
            sm = m.op(sm, d[k++]);
        } while ((k & -k) != k);
        return flip ? ok + 1 : ok - 1;
    }

private:
    M m;
    int n, lg, sz;
    vector<vt> d;
    void update(const int &k) { d[k] = m.op(d[2 * k], d[2 * k + 1]); }
};

int main() {

    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    SegmentTree<monoid::mx<int>> seg(A);
    for (int i = 0; i < Q; i++) {
        int q, l, r;
        cin >> q >> l >> r;
        l--;
        if (q == 1) seg.set(l, r);
        else if (q == 2) cout << seg.sum(l, r) << '\n';
        else {
            auto f = [&](int k) { return k >= r; };
            cout << seg.bisearch(N - 1, l, f) << '\n';
        }
    }

    return 0;
}
