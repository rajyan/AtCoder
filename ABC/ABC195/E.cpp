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

template<class T>
vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
template<class... Size>
auto make_vec(size_t s, Size... tail) {
    return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
}

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

constexpr int MOD = 7;
using mint = Mint<MOD>;

int main() {

    int N;
    cin >> N;
    string S, X;
    cin >> S >> X;

    auto memo = make_vec(N, 7, -1);
    auto dfs = [&](auto &&f, const int &i, const mint &m) -> bool {

        if (i == N) return m == 0;
        if (memo[i][m.val] != -1) return memo[i][m.val];

        if (X[i] == 'T') {
            return (memo[i][m.val] = f(f, i + 1, m * 10 + (S[i] - '0')) || f(f, i + 1, m * 10));
        }
        else {
            return (memo[i][m.val] = f(f, i + 1, m * 10 + (S[i] - '0')) && f(f, i + 1, m * 10));
        }
    };

    if (dfs(dfs, 0, 0)) cout << "Takahashi\n";
    else cout << "Aoki\n";

    return 0;
}
