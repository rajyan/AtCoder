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

    string S;
    cin >> S;

    map<int, int> mp{{0, 0},
                     {1, 1},
                     {6, 9},
                     {9, 6},
                     {8, 8}};

    reverse(S.begin(), S.end());
    for (const auto &item : S) {
        cout << mp[item - '0'];
    }

    return 0;
}
