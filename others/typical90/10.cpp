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
class CuSum {
public:
    explicit CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
        for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
    }

    // partial sum of 0-indexed [0, k)
    [[nodiscard]] T sum(int k) {
        assert(0 <= k && k < (int) cusum.size());
        return cusum[k];
    }
    // partial sum of 0-indexed [l, r)
    [[nodiscard]] T sum(int l, int r) {
        assert(l <= r);
        return sum(r) - sum(l);
    }

private:
    vector<T> cusum;
};

int main() {

    int N;
    cin >> N;

    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) {
        int c, p;
        cin >> c >> p;
        if (c == 1) {
            a[i] = p;
        } else {
            b[i] = p;
        }
    }
    CuSum<int> A(a), B(b);

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        cout << A.sum(l, r) << " " << B.sum(l, r) << '\n';
    }

    return 0;
}
