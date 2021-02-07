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

#include <boost/multiprecision/cpp_dec_float.hpp>
using dec_float = boost::multiprecision::number<boost::multiprecision::cpp_dec_float<10>>;

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

int main() {

    dec_float X, Y, R;
    cin >> X >> Y >> R;

    int l = (int)ceil(X - R), r = (int)floor(X + R);

    lint ans = 0;
    for (int i = l; i <= r; i++) {
        dec_float p = sqrt(R * R - abs(X - i) * abs(X - i));
        ans += (int)floor(Y + p) - (int)ceil(Y - p) + 1;
    }

    cout << ans << '\n';

    return 0;
}
