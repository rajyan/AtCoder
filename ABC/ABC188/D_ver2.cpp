#ifdef _DEBUG
#include "../../../library/src/debug_template.cpp"
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

    lint N, C;
    cin >> N >> C;

    vector<pair<int, int>> abc;
    for (int i = 0; i < N; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        abc.emplace_back(a, c);
        abc.emplace_back(b, -c);
    }
    sort(abc.begin(), abc.end());

    lint ans = 0;
    int now = 0;
    lint sum = 0;
    for (int i = 0; i < 2 * N; i++) {
        auto next = abc[i];
        ans += (next.first - now) * min(sum, C);
        now = next.first;
        sum += next.second;
    }
    
    cout << ans << '\n';

    return 0;
}


