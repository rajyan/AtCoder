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

using namespace std;
using lint = long long;

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

int main() {

    lint N;
    int B, K;
    cin >> N >> B >> K;

    vector<int> c(K);
    for (int i = 0; i < K; i++) cin >> c[i];

    RMOD = B;
    constexpr int bits = 62;
    // 10^(2^bit)
    vector<rmint> ten(bits + 1);
    ten[0] = 10;
    for (int i = 0; i < bits; i++) {
        ten[i + 1] = ten[i] * ten[i];
    }

    auto concat = [&ten, &B](auto &v1, auto &v2, int bit) {
        auto res = vector<mint>(B);
        for (int j = 0; j < B; j++) {
            for (int k = 0; k < B; k++) {
                res[(ten[bit] * j + k).val] += v1[j] * v2[k];
            }
        }
        return res;
    };

    // 2^bit桁であまりがbのもの
    vector<vector<mint>> doubling(bits + 1, vector<mint>(B));
    for (int i = 0; i < K; i++) {
        doubling[0][c[i] % B] += 1;
    }
    for (int bit = 0; bit < bits; bit++) {
        doubling[bit + 1] = concat(doubling[bit], doubling[bit], bit);
    }

    vector<mint> ans(B);
    ans[0] = 1;
    for (int bit = 0; bit < bits; bit++) {
        if ((N >> bit) & 1) {
            ans = concat(ans, doubling[bit], bit);
        }
    }

    cout << ans[0] << '\n';

    return 0;
}
