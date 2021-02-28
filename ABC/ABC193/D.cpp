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

int pow10(int cnt) {
    int mul = 1;
    while (cnt--) mul *= 10;
    return mul;
}

int main() {

    int K;
    cin >> K;

    string S, T;
    cin >> S >> T;
    S.pop_back();
    T.pop_back();

    int sumS = 0;
    for (int i = 1; i < 10; i++) {
        int cnt = count_if(S.begin(), S.end(), [&i](const char &c) { return c - '0' == i; });
        sumS += i * pow10(cnt);
    }

    int sumT = 0;
    for (int i = 1; i < 10; i++) {
        int cnt = count_if(T.begin(), T.end(), [&i](const char &c) { return c - '0' == i; });
        sumT += i * pow10(cnt);
    }
    DMP(sumS, sumT);

    lint ans = 0;
    for (int s = 1; s < 10; s++) {
        for (int t = 1; t < 10; t++) {
            int cntS = count_if(S.begin(), S.end(), [&s](const char &c) { return c - '0' == s; });
            int cntT = count_if(T.begin(), T.end(), [&t](const char &c) { return c - '0' == t; });

            if (K == cntS || K == cntT) continue;

            int nowS = sumS - s * pow10(cntS) + s * pow10(cntS + 1);
            int nowT = sumT - t * pow10(cntT) + t * pow10(cntT + 1);

            DMP(cntS, cntT);
            cntS += count_if(T.begin(), T.end(), [&s](const char &c) { return c - '0' == s; });
            cntT += count_if(S.begin(), S.end(), [&t](const char &c) { return c - '0' == t; });

            if (nowS > nowT) {
                ans += 1LL * (K - cntS) * (K - cntT - (s == t));
            }
        }
    }

    cout << 1.0L * ans / (9 * K - 8) / (9 * K - 9) << '\n';

    return 0;
}
