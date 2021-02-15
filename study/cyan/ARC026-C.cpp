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

template<class T, T (*F)(T a, T b)>
class Monoid {
    class Identity {};

public:
    using type = T;
    using vt = variant<Identity, T>;

    [[nodiscard]] constexpr vt op(const vt &a, const vt &b) const {
        if (a.index() == 1 && b.index() == 1) return F(get<T>(a), get<T>(b));
        else if (a.index() == 0) return b;
        else return a;
    };
    [[nodiscard]] constexpr vt identity() const { return Identity{}; }
};

constexpr auto op_add = [](auto l, auto r) { return l + r; };
constexpr auto op_mul = [](auto l, auto r) { return l * r; };
constexpr auto op_max = [](auto l, auto r) { return max(l, r); };
constexpr auto op_min = [](auto l, auto r) { return min(l, r); };

template<class T>
using monoid_add = Monoid<T, op_add>;
template<class T>
using monoid_mul = Monoid<T, op_mul>;
template<class T>
using monoid_max = Monoid<T, op_max>;
template<class T>
using monoid_min = Monoid<T, op_min>;

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

    void update(const int &k) { d[k] = m.op(d[2 * k], d[2 * k + 1]); }
    void set(int k, const T &x) {
        assert(0 <= k && k < n);
        k += sz, d[k] = x;
        for (int i = 1; i <= lg; i++) update(k >> i);
    }
    void add(const int &k, const T &x) { set(k, get<T>(m.op(d[k + sz], x))); }

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

private:
    M m;
    int n, lg, sz;
    vector<vt> d;
};

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

int main() {

    int N, L;
    cin >> N >> L;

    vector<array<int, 3>> lrc(N);
    for (int i = 0; i < N; i++) cin >> lrc[i][0] >> lrc[i][1] >> lrc[i][2];
    sort(lrc.begin(), lrc.end());

    SegmentTree<monoid_min<lint>> sg(L + 2);
    sg.set(0, 0);
    for (int i = 0; i < N; i++) {
        auto[l, r, c] = lrc[i];
        lint a = get<lint>(monoid_min<lint>().op(sg.sum(l, r), LINF)) + c;
        lint b = get<lint>(monoid_min<lint>().op(sg[r], LINF));
        sg.set(r, min(a, b));
    }

    cout << get<lint>(sg[L]) << '\n';

    return 0;
}
