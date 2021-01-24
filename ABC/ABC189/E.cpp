
#ifdef _DEBUG
#include "../../../library/src/debug_template.cpp"
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

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

template<class T>
struct Point2D {
    T x{}, y{};

    constexpr Point2D() = default;
    constexpr Point2D(T x, T y) noexcept: x(x), y(y) {};
    constexpr explicit Point2D(pair<T, T> &p) noexcept: x(p.first), y(p.second) {};

    constexpr bool operator==(const Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
    constexpr bool operator!=(const Point2D &rhs) const noexcept { return !((*this) == rhs); }
    constexpr bool operator<(const Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
    constexpr bool operator>(const Point2D &rhs) const noexcept { return rhs < (*this); }
    constexpr bool operator<=(const Point2D &rhs) const noexcept { return !((*this) > rhs); }
    constexpr bool operator>=(const Point2D &rhs) const noexcept { return !((*this) < rhs); }

    constexpr Point2D operator+(const Point2D &rhs) const noexcept { return {x + rhs.x, y + rhs.y}; }
    constexpr Point2D operator-(const Point2D &rhs) const noexcept { return {x - rhs.x, y - rhs.y}; }
    constexpr Point2D operator*(const T &k) const noexcept { return {k * x, k * y}; }
    constexpr Point2D operator/(const T &k) const noexcept { return {x / k, y / k}; }
    constexpr Point2D &operator+=(const Point2D &rhs) noexcept { return ((*this) = (*this) + rhs); }
    constexpr Point2D &operator-=(const Point2D &rhs) noexcept { return ((*this) = (*this) - rhs); }
    constexpr Point2D &operator*=(const T &k) noexcept { return ((*this) = (*this) * k); }
    constexpr Point2D &operator/=(const T &k) noexcept { return ((*this) = (*this) / k); }
    constexpr Point2D &operator--(int) noexcept { return ((*this) -= Point2D(1, 1)); };
    constexpr Point2D &operator++(int) noexcept { return ((*this) += Point2D(1, 1)); };
    constexpr Point2D operator-() const noexcept { return {-x, -y}; }

    constexpr T operator*(const Point2D &rhs) const noexcept { return x * rhs.x + y * rhs.y; }

    [[nodiscard]] constexpr Point2D nor() const noexcept { return {y, -x}; }
    [[nodiscard]] constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
    [[nodiscard]] constexpr bool inGrid(const T &H, const T &W) const noexcept { return 0 <= x && x < H && 0 <= y && y < W; }
    template<class U>
    [[nodiscard]] constexpr U &operator[](vector<vector<U>> &v) { return v[x][y]; }

    friend istream &operator>>(istream &is, Point2D &p) { return is >> p.x >> p.y; }
    friend ostream &operator<<(ostream &os, const Point2D &p) { return os << p.x << " " << p.y; }
};

using pnt = Point2D<lint>;

template<class T>
struct Matrix2D {
    Point2D<T> r0{}, r1{};

    constexpr Matrix2D() = default;
    constexpr Matrix2D(const Point2D<T> &r0, const Point2D<T> &r1) noexcept: r0(r0), r1(r1) {};

    constexpr bool operator==(const Matrix2D &rhs) const noexcept { return r0 == rhs.r0 && r1 == rhs.r1; }
    constexpr bool operator!=(const Matrix2D &rhs) const noexcept { return !((*this) == rhs); }

    constexpr Matrix2D operator+(const Matrix2D &rhs) const noexcept { return {r0 + rhs.r0, r1 + rhs.r1}; }
    constexpr Matrix2D operator-(const Matrix2D &rhs) const noexcept { return {r0 - rhs.r0, r1 - rhs.r1}; }
    constexpr Matrix2D operator*(const Matrix2D &rhs) const noexcept {
        const Matrix2D rhs_T = rhs.trans();
        return {{r0 * rhs_T.r0, r0 * rhs_T.r1},
                {r1 * rhs_T.r0, r1 * rhs_T.r1}};
    }
    constexpr Matrix2D &operator+=(const Matrix2D &rhs) noexcept { return ((*this) = (*this) + rhs); }
    constexpr Matrix2D &operator-=(const Matrix2D &rhs) noexcept { return ((*this) = (*this) - rhs); }
    constexpr Matrix2D &operator*=(const Matrix2D &rhs) noexcept { return ((*this) = (*this) * rhs); }
    constexpr Matrix2D operator-() noexcept { return {-r0, -r1}; }

    constexpr Point2D<T> operator*(const Point2D<T> &b_T) const noexcept { return {r0 * b_T, r1 * b_T}; }

    [[nodiscard]] constexpr Matrix2D trans() const noexcept {
        return {{r0.x, r1.x},
                {r0.y, r1.y}};
    }
    [[nodiscard]] constexpr Matrix2D identity() const noexcept {
        return {{1, 0},
                {0, 1}};
    }
    [[nodiscard]] constexpr Matrix2D pow(lint n) const noexcept {
        Matrix2D res{Matrix2D().identity()}, tmp{*this};
        while (n > 0) {
            if (n & 1) res *= tmp;
            tmp *= tmp;
            n >>= 1;
        }
        return res;
    }
    [[nodiscard]] constexpr T det() const noexcept { return r0 * r1.nor(); }
};

using mat = Matrix2D<lint>;

int main() {

    int N;
    cin >> N;

    vector<pnt> XY(N);
    for (int i = 0; i < N; i++) cin >> XY[i];

    int M;
    cin >> M;
    vector<pair<int, int>> op(M);
    for (int i = 0; i < M; i++) {
        int n;
        cin >> n;
        op[i].first = n;
        if (n >= 3) {
            int p;
            cin >> p;
            op[i].second = p;
        }
    }

    struct info {
        int index{}, a{}, b{};
        info() = default;
        info(int i, int a, int b) : index(i), a(a), b(b) {};
        bool operator<(const info &r) const { return a < r.a; }
    };

    int Q;
    cin >> Q;
    vector<info> AB(Q);
    for (int i = 0; i < Q; i++) {
        int a, b;
        cin >> a >> b;
        b--;
        AB[i] = {i, a, b};
    }
    sort(AB.begin(), AB.end());

    vector<pnt> ans(Q);
    int op_i = 0;

    mat A{mat().identity()};
    pnt b{};

    for (int i = 0; i < Q; i++) {

        auto now = AB[i];

        while (op_i < now.a) {
            auto op_now = op[op_i];
            if (op_now.first == 1) {
                mat R{{0,  1},
                      {-1, 0}};
                A = R * A;
                b = R * b;
            }
            else if (op_now.first == 2) {
                mat R{{0,  -1},
                      {1, 0}};
                A = R * A;
                b = R * b;
            }
            else if (op_now.first == 3) {
                mat R{{-1,  0},
                      {0, 1}};
                A = R * A;
                b = R * b + pnt(2LL * op_now.second, 0);
            }
            else if (op_now.first == 4) {
                mat R{{1,  0},
                      {0, -1}};
                A = R * A;
                b = R * b + pnt(0, 2LL * op_now.second);
            }
            else {
                assert(false);
            }
            op_i++;
        }

        ans[now.index] = A * XY[now.b] + b;
    }

    for (const auto &item: ans) {
        cout << item << '\n';
    }

    return 0;
}
