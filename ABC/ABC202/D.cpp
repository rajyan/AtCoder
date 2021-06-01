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
#include <boost/multiprecision/cpp_int.hpp>

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

    lint A, B, K;
    cin >> A >> B >> K;
    string s = string(A, 'a') + string(B, 'b');

    int L = A + B;
    boost::multiprecision::cpp_int mpP = 1;
    for (int l = 1; l <= L; ++l) mpP *= l;
    for (int l = 1; l <= A; ++l) mpP /= l;
    for (int l = 1; l <= B; ++l) mpP /= l;

    string ans;
    lint sum = 0;
    while (A + B) {
        if (A == 0) {
            ans += string(B, 'b');
            break;
        }
        A--;
        int a = 2, b = 2;
        lint now = 1;
        for (int i = 2; i <= A + B; ++i) {
            now *= i;
            while (a <= A && now % a == 0) {
                now /= a;
                a++;
            }
            while (b <= B && now % b == 0) {
                now /= b;
                b++;
            }
        }
        if (now + sum >= K) ans += 'a';
        else {
            ans += 'b';
            A++, B--;
            K -= now;
        }
    }

    cout << ans << '\n';

    return 0;
}
