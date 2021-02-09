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

using pnt = Point2D<int>;

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

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

int main() {

    int N;
    cin >> N;

    vector<pair<pnt, int>> xy(N);
    for (int i = 0; i < N; i++) {
        pnt p;
        cin >> p;
        p--;
        xy[i] = {p, i};
    }
    sort(xy.begin(), xy.end());

    UnionFind uf(N);
    set<pair<int, int>> st;
    for (int i = 0; i < N; i++) {
        const auto &[p, index] = xy[i];
        auto[it, _] = st.emplace(p.y, index);

        while (it != st.begin()) {
            auto tmp = it;
            uf.unify((--it)->second, index);
            st.erase(tmp);
        }
    }
    st.clear();
    for (int i = N - 1; i >= 0; i--) {
        const auto &[p, index] = xy[i];

        auto[it, _] = st.emplace(p.y, index);
        while (it != --st.end()) {
            auto tmp = it;
            uf.unify((++it)->second, index);
            st.erase(tmp);
        }
    }

    for (int i = 0; i < N; i++) {
        cout << uf.size(i) << '\n';
    }

    return 0;
}
