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
class FenwickTree {
public:
    explicit FenwickTree(int sz, T &&x = T{}) : n(sz), bit(n + 1) {
        for (int i = 0; i < n; i++) add(i, x);
    }

    void add(int k, const T &x) { for (; k < n; k |= k + 1) bit[k] += x; }
    void set(int k, const T &x) { add(k, x - sum(k, k + 1)); }

    [[nodiscard]] T sum(int k) const {
        T res = 0;
        for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];
        return res;
    }
    [[nodiscard]] T sum(int l, int r) const { return sum(r) - sum(l); }

private:
    int n;
    vector<T> bit;
};

int main() {

    string S;
    cin >> S;
    const int N = S.size();

    vector<FenwickTree<int>> alpha(26, FenwickTree<int>(S.size()));
    for (int i = 0; i < N; i++) {
        alpha[S[i] - 'a'].add(i, 1);
    }

    lint ans = 0;
    char prev = '*';
    // [last.index, N) = last.char
    pair<int, char> last = {N, '*'};
    for (int i = N - 1; i >= 0; prev = S[i], i--) {
        if (prev == S[i]) {
            const auto[li, lc] = last;
            ans += N - (i + 2) - (lc == prev) * (N - li) - alpha[S[i] - 'a'].sum(i + 2, li);
            last = {i, S[i]};
        }
    }
    
    cout << ans << '\n';

    return 0;
}
