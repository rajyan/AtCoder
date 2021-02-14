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

inline int clz(lint x) {
    union {
        unsigned long long as_uint64;
        double as_double;
    } data{};
    data.as_double = (double)x + 0.5;
    int n = 1054 - (int)(data.as_uint64 >> 52);
    return 32 + n;
}

template<class T, T (*F)(T a, T b)>
class Monoid {
    class Identity {};
    using vt = variant<Identity, T>;
public:
    [[nodiscard]] constexpr vt op(const vt &a, const vt &b) const {
        if (a.index() == 1 && b.index() == 1) return F(get<T>(a), get<T>(b));
        else if (a.index() == 0) return b;
        else return a;
    };
    [[nodiscard]] constexpr vt identity() const { return Identity{}; }
    [[nodiscard]] constexpr T type() const { return T{}; }
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

template<class M>
class SegmentTree {
    M m;
    using T = decltype(m.type());
    using vt = decltype(m.op(T{}, T{}));

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

    [[nodiscard]] T sum(int l, int r) const {
        assert(l <= r);
        vt sml = m.identity(), smr = m.identity();
        l += sz, r += sz;

        while (l < r) {
            if (l & 1) sml = m.op(sml, d[l++]);
            if (r & 1) smr = m.op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return get<T>(m.op(sml, smr));
    }

    [[nodiscard]] T operator[](const int &k) const {
        assert(0 <= k && k < n);
        return get<T>(d[k + sz]);
    }

private:
    int n, lg, sz;
    vector<vt> d;
};

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> s(M), t(M);
    for (int i = 0; i < M; i++) {
        cin >> s[i] >> t[i];
        s[i]--;
    }
    DMP(s, t);

    vector<int> C(N + 1);
    for (int i = 0; i < M; i++) {
        C[s[i]]++, C[t[i]]--;
    }
    for (int i = 0; i < N; i++) C[i + 1] += C[i];

    SegmentTree<monoid_min<int>> seg(C);
    vector<int> ans;
    for (int i = 0; i < M; i++) {
        if (seg.sum(s[i], t[i]) > 1) ans.emplace_back(i + 1);
    }

    cout << ans.size() << '\n';
    for (const auto &item : ans) {
        cout << item << '\n';
    }

    return 0;
}
