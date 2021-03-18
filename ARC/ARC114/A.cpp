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

constexpr int MOD = 1000000007;
using mint = Mint<MOD>;

int RMOD;
using rmint = Mint<RMOD>;

inline int popcount(lint n) {
    n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);
    n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);
    n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);
    n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);
    n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);
    n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);
    return n;
}

inline int ctz(lint n) {
    return popcount(~n & (n - 1));
}

class Prime {
public:
    explicit Prime(int N = 1100000) : pTable(N + 1, true) { Eratosthenes(N + 1); }

    [[nodiscard]] vector<pair<lint, int>> factorize(lint n) {
        vector<pair<lint, int>> res;
        for (lint i = 2; i * i <= n; i++) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            if (cnt) res.emplace_back(i, cnt);
        }
        if (n != 1) res.emplace_back(n, 1);

        return res;
    }

    // Miller-Rabin
    [[nodiscard]] bool isPrime(lint n) {
        if (n <= 1 || n % 2 == 0) return (n == 2);
        if (n < (int)pTable.size()) return pTable[n];
        const int s = ctz(n - 1);
        const lint d = (n - 1) >> s;
        // set runtime mod
        RMOD = n;
        // http://miller-rabin.appspot.com/
        for (const lint base : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
            rmint a = rmint(base).pow(d);
            int i = s;
            while (a != 1 && a != -1 && a != 0 && i--) a *= a;
            if (a != -1 && i != s) return false;
        }
        return true;
    }

private:
    void Eratosthenes(lint N) {
        for (lint i = 2; i * i < N; i++) {
            if (pTable[i]) {
                for (int j = 0; i * (j + 2) < N; j++) pTable[i * (j + 2)] = false;
            }
        }
    }
    vector<bool> pTable;
};

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

int main() {

    int N;
    cin >> N;
    vector<int> X(N);
    for (int i = 0; i < N; i++) cin >> X[i];

    Prime P;
    vector<int> p;
    for (int i = 2; i < 50; i++) {
        if (P.isPrime(i)) p.emplace_back(i);
    }

    lint ans = LINF;
    for (int b = 0; b < (1 << p.size()); b++) {
        lint now = 1;
        for (int j = 0; j < p.size(); j++) {
            if ((b >> j) & 1) {
                now *= p[j];
            }
        }
        if (all_of(X.begin(), X.end(), [&](auto x){ return gcd(x, now) !=1;})) {
            chmin(ans, now);
        }
    }

    cout << ans << '\n';

    return 0;
}
