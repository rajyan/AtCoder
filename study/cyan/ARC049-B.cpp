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

template<class T, class F>
T bisearch(T OK, T NG, F f) {
    T ok = OK;
    T ng = NG;

    for (int i = 0; i < 10000; i++) {
        auto mid = (ok + ng) / 2;

        if (f(mid)) ok = mid;
        else ng = mid;
    }

    return ok;
}

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

int main() {

    int N;
    cin >> N;

    vector<int> X(N), Y(N), C(N);
    for (int i = 0; i < N; i++) cin >> X[i] >> Y[i] >> C[i];

    auto judge = [&](long double k) -> bool {
        long double Xmin = -INF, Xmax = INF;
        long double Ymin = -INF, Ymax = INF;
        for (int i = 0; i < N; i++) {
            long double ki = k / C[i];
            chmax(Xmin, X[i] - ki);
            chmin(Xmax, X[i] + ki);
            chmax(Ymin, Y[i] - ki);
            chmin(Ymax, Y[i] + ki);
        }
        return Xmin <= Xmax && Ymin <= Ymax;
    };
    
    cout << bisearch((long double)INF, .0L, judge) << '\n';

    return 0;
}
