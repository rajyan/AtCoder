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

template<const int &Modulo>
struct Mint {

    lint val;
    constexpr Mint(lint v = 0) noexcept: val(v % Modulo) { if (val < 0) val += Modulo; }

    constexpr Mint &operator+=(const Mint &r) noexcept {
        val += r.val;
        if (val >= Modulo) val -= Modulo;
        return *this;
    }
    constexpr Mint &operator-=(const Mint &r) noexcept {
        val -= r.val;
        if (val < 0) val += Modulo;
        return *this;
    }
    constexpr Mint &operator*=(const Mint &r) noexcept {
        val = val * r.val % Modulo;
        return *this;
    }
    constexpr Mint &operator/=(const Mint &r) noexcept {
        lint a{r.val}, b{Modulo}, u{1}, v{0};
        while (b) {
            lint t = a / b;
            a -= t * b;
            a ^= b, b ^= a, a ^= b;
            u -= t * v;
            u ^= v, v ^= u, u ^= v;
        }
        assert(a == 1);
        val = val * u % Modulo;
        if (val < 0) val += Modulo;
        return *this;
    }

    constexpr Mint operator+(const Mint &r) const noexcept { return Mint(*this) += r; }
    constexpr Mint operator-(const Mint &r) const noexcept { return Mint(*this) -= r; }
    constexpr Mint operator*(const Mint &r) const noexcept { return Mint(*this) *= r; }
    constexpr Mint operator/(const Mint &r) const noexcept { return Mint(*this) /= r; }

    constexpr Mint operator-() const noexcept { return Mint(-val); }

    constexpr bool operator==(const Mint &r) const noexcept { return val == r.val; }
    constexpr bool operator!=(const Mint &r) const noexcept { return !((*this) == r); }
    constexpr bool operator<(const Mint &r) const noexcept { return val < r.val; }

    constexpr friend ostream &operator<<(ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val; }
    constexpr friend istream &operator>>(istream &is, Mint<Modulo> &x) noexcept {
        lint tmp{};
        is >> tmp;
        x = Mint(tmp);
        return is;
    }

    [[nodiscard]] constexpr Mint pow(lint n) const noexcept {
        Mint res{1}, tmp{*this};
        while (n > 0) {
            if (n & 1) res *= tmp;
            tmp *= tmp;
            n >>= 1;
        }
        return res;
    }
};

constexpr int MOD = 998244353;
using mint = Mint<MOD>;

class UnionFind {
public:
    explicit UnionFind(int size) : data(size, -1) {}
    [[nodiscard]] int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
    [[nodiscard]] bool is_same(int x, int y) { return root(x) == root(y); }
    [[nodiscard]] int size(int x) { return -data[root(x)]; }

    bool unify(int x, int y) {
        x = root(x);
        y = root(y);
        if (x != y) {
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y];
            data[y] = x;
            return true;
        }
        return false;
    }

private:
    vector<int> data;
};

int main() {

    int N;
    cin >> N;

    UnionFind uf(2 * N);
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        uf.unify(i, i + N);

        int f;
        cin >> f;
        f--;
        if (uf.is_same(i, f)) {
            cnt++;
        }
        uf.unify(i, f);
    }

    cout << mint(2).pow(cnt) - 1 << '\n';

    return 0;
}
