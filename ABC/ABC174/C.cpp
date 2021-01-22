#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

#ifdef _DEBUG
#include "../../../library/src/debug_template.cpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

#define RUNTIME_MODINT

#ifdef RUNTIME_MODINT
template<int &Modulo>
#else
template<int Modulo>
#endif
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
        lint a = r.val, b = Modulo, u = 1, v = 0;
        while (b) {
            lint t = a / b;
            a -= t * b;
            swap(a, b);
            u -= t * v;
            swap(u, v);
        }
        val = val * u % Modulo;
        if (val < 0) val += Modulo;
        return *this;
    }

    constexpr Mint operator+(const Mint &r) const noexcept { return Mint(*this) += r; }
    constexpr Mint operator-(const Mint &r) const noexcept { return Mint(*this) -= r; }
    constexpr Mint operator*(const Mint &r) const noexcept { return Mint(*this) *= r; }
    constexpr Mint operator/(const Mint &r) const noexcept { return Mint(*this) /= r; }

    constexpr Mint operator-() const noexcept { return val ? Modulo - val : 0; }

    constexpr bool operator==(const Mint &r) const noexcept { return val == r.val; }
    constexpr bool operator!=(const Mint &r) const noexcept { return !((*this) == r); }
    constexpr bool operator<(const Mint &r) const noexcept { return val < r.val; }

    friend ostream &operator<<(ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val; }
    friend istream &operator>>(istream &is, Mint<Modulo> &x) noexcept {
        lint tmp;
        is >> tmp;
        x = Mint(tmp);
        return is;
    }

    [[nodiscard]] constexpr Mint pow(lint n) const noexcept {
        Mint res = 1, tmp = val;
        while (n > 0) {
            if (n & 1) res *= tmp;
            tmp *= tmp;
            n >>= 1;
        }
        return res;
    }
};

#ifdef RUNTIME_MODINT
int RMOD;
using rmint = Mint<RMOD>;
#else
using mint = Mint<MOD>;
#endif

int main() {

    int K;
    cin >> K;
    RMOD = K;

    vector<int> used(K);
    rmint r = 0;
    int cnt = 1;
    while (!used[r.val]) {
        used[r.val] = 1;
        (r *= 10) += 7;
        if (r == 0) {
            cout << cnt << "\n";
            return 0;
        }
        cnt++;
    }

    cout << -1 << "\n";

    return 0;
}

