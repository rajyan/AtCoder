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

    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H + 2, vector<char>(W + 2));
    for (int i = 1; i <= H; i++) for (int j = 1; j <= W; j++) cin >> grid[i][j];
    DMP(grid);

    int ans{};
    for (int i = 0; i <= H + 1; i++) {
        for (int j = 0; j <= W + 1; j++) {
            if (0 > i - 1 || 0 > j - 1) continue;
            int cnt{};
            cnt += grid[i - 1][j - 1] == '#';
            cnt += grid[i - 1][j] == '#';
            cnt += grid[i][j - 1] == '#';
            cnt += grid[i][j] == '#';
            if (cnt == 3 || cnt == 1) ans++;
        }
    }
    
    cout << ans << '\n';

    return 0;
}
