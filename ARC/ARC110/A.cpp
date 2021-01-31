
#ifdef _DEBUG
#include "../../../library/src/debug_template.hpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <cassert>
#include <array>
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

#include "../../../library/src/print.hpp"

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    DMP(vector<int>{1, 2, 3});
    DMP(vector<vector<int>>{{1, 2},
                            {2, 3},
                            {3, 4}});
    DMP(array<int, 3>{1, 2, 3});
    DMP(set<string>{"abc", "def"});
    DMP(map<string, int>{{"abc", 1},
                         {"def", 2}});
    DMP(map<vector<int>, string>{{{1, 2, 3}, "abc"},
                                 {{4, 5, 6}, "cde"}});
    DMP(string{"abc"});
    DMP(1);
    DMP('a');

    vector<int> a{1, 2, 3};
    map<vector<int>, string> mp{{{1, 2, 3}, "abc"},
                                {{4, 5, 6}, "cde"}};

    DMP(1, 2, 3, 4);
    DMP(mp, a, 'a');
    print(a);
    return 0;
}
