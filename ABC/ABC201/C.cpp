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

int main() {

    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < 10000; i++) {
        string now = to_string(i);
        now = string(4 - now.size(), '0') + now;
   
        bool ok = true;
        for (int j = 0; j < 10; j++) {
            if (s[j] == 'x') ok &= none_of(now.begin(), now.end(), [&j](const char c){ return c == '0' + j; });
            else if (s[j] == 'o') ok &= any_of(now.begin(), now.end(), [&j](const char c){ return c == '0' + j; });
        }
        DMP(now, ok);
   
        if (ok) ans++;
    }
    
    cout << ans << '\n';

    return 0;
}
