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

#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;

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

    while (abs(ok - ng) > 1) {
        auto mid = (ok + ng) / 2;

        if (f(mid)) ok = mid;
        else ng = mid;
    }

    return ok;
}

int main() {

    string X;
    lint M;
    cin >> X >> M;

    if (X.size() == 1) {
        cout << (X[0] - '0' <= M) << '\n';
        return 0;
    }

    reverse(X.begin(), X.end());

    auto check = [&](const lint &k) {
        mp::cpp_int now = 0;
        mp::cpp_int x = 1;
        for (const auto &c : X) {
            now += (c - '0') * x;
            x *= k;
        }
        return now <= M;
    };

    lint d = *max_element(X.begin(), X.end()) - '0';
    cout << bisearch(d, M + 1, check) - d << '\n';

    return 0;
}
