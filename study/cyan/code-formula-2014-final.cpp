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
#include <functional>
#include <random>
#include <chrono>

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

struct Random {
    unsigned int seed;
    mt19937 mt;
    explicit Random(unsigned int s = chrono::steady_clock::now().time_since_epoch().count()) : seed(s), mt(seed) {}

    lint operator()(const lint &rand_min, const lint &rand_max) {
        uniform_int_distribution<lint> dist(rand_min, rand_max);
        return dist(mt);
    }
    lint operator()(const lint &rand_max) { return (*this)(0LL, rand_max); }

    [[nodiscard]] vector<lint> uniq_vec(const int &sz, const lint &rand_min, lint rand_max) {

        vector<lint> res(sz);
        unordered_map<lint, lint> memo;
        for (int i = 0; i < sz; i++, rand_max--) {

            lint rand_val = (*this)(rand_min, rand_max);

            // If rand_max hasn't been replaced yet, fill it with rand_max
            if (memo.find(rand_max) == memo.end()) memo[rand_max] = rand_max;

            auto val_itr = memo.find(rand_val);
            if (val_itr == memo.end()) { // replace rand_val with rand_max
                memo[rand_val] = memo[rand_max];
            }
            else { // If rand_val has already been replaced
                rand_val = val_itr->second;
                val_itr->second = memo[rand_max];
            }

            res[i] = rand_val;
        }
        return res;
    }
    template<class Ite>
    void shuf(Ite first, Ite last) { shuffle(first, last, mt); }

    string random_string(const int &max_len, const string list = "abcdefghijklmnopqrstuvwxyz") {
        assert(!list.empty());
        int size = (int)(*this)(1, max_len);
        string res(size, 0);
        generate(res.begin(), res.end(), [this, &list]() { return list[(*this)((int)list.size() - 1)]; });
        return res;
    }

};

template<class T>
struct Point2D {
    T x{}, y{};

    constexpr Point2D() = default;
    constexpr Point2D(const T &x, const T &y) noexcept: x(x), y(y) {};
    constexpr explicit Point2D(const pair<T, T> &p) noexcept: x(p.first), y(p.second) {};

    constexpr bool operator==(const Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
    constexpr bool operator!=(const Point2D &rhs) const noexcept { return !(*this == rhs); }
    constexpr bool operator<(const Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
    constexpr bool operator>(const Point2D &rhs) const noexcept { return rhs < *this; }
    constexpr bool operator<=(const Point2D &rhs) const noexcept { return !(*this > rhs); }
    constexpr bool operator>=(const Point2D &rhs) const noexcept { return !(*this < rhs); }

    constexpr Point2D operator+(const Point2D &rhs) const noexcept { return {x + rhs.x, y + rhs.y}; }
    constexpr Point2D operator-(const Point2D &rhs) const noexcept { return {x - rhs.x, y - rhs.y}; }
    constexpr Point2D operator*(const T &k) const noexcept { return {k * x, k * y}; }
    constexpr Point2D operator/(const T &k) const noexcept { return {x / k, y / k}; }
    constexpr Point2D &operator+=(const Point2D &rhs) noexcept { return *this = *this + rhs; }
    constexpr Point2D &operator-=(const Point2D &rhs) noexcept { return *this = *this - rhs; }
    constexpr Point2D &operator*=(const T &k) noexcept { return *this = *this * k; }
    constexpr Point2D &operator/=(const T &k) noexcept { return *this = *this / k; }
    constexpr Point2D &operator--() noexcept { return *this -= Point2D(1, 1); };
    constexpr Point2D &operator++() noexcept { return *this += Point2D(1, 1); };
    constexpr Point2D operator--(int) noexcept {
        Point2D res = *this;
        --*this;
        return res;
    };
    constexpr Point2D operator++(int) noexcept {
        Point2D res = *this;
        ++*this;
        return res;
    };
    constexpr Point2D operator-() const noexcept { return {-x, -y}; }

    constexpr T operator*(const Point2D &rhs) const noexcept { return x * rhs.x + y * rhs.y; }

    [[nodiscard]] constexpr Point2D nor() const noexcept { return {y, -x}; }
    [[nodiscard]] constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
    [[nodiscard]] constexpr bool inGrid(const T &H, const T &W) const noexcept { return 0 <= x && x < H && 0 <= y && y < W; }
    template<class U>
    [[nodiscard]] constexpr U &operator[](vector<vector<U>> &v) const noexcept { return v[x][y]; }

    constexpr friend istream &operator>>(istream &is, Point2D &p) { return is >> p.x >> p.y; }
    constexpr friend ostream &operator<<(ostream &os, const Point2D &p) { return os << p.x << ' ' << p.y; }
};

using pnt = Point2D<lint>;

int main() {

    struct Circle {
        pnt c;
        int r{};
        Circle() = default;
        Circle(const pnt &_c, const int &_r) : c(_c), r(_r) {}
    };

    vector<Circle> fixed;
    auto check = [&fixed](const pnt P, const int R) {
        return all_of(fixed.begin(), fixed.end(), [&](const auto cr) {
            auto[c, r] = cr;
            const pnt sub = P - c;
            return sub.x * sub.x + sub.y * sub.y >= (R + r) * (R + r);
        });
    };

    Random ran;
    int now = 100;
    while (now) {
        pnt rp = {ran(now, 1500 - now), ran(now, 1500 - now)};
        if (check(rp, now)) fixed.emplace_back(rp, now--);
    }

    reverse(fixed.begin(), fixed.end());
    for (const auto &[p, c] : fixed) {
        cout << p << '\n';
    }

    return 0;
}
