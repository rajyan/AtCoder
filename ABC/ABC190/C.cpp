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
#include <array>
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

template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

int main() {

    int N, M;
    cin >> N >> M;
    vector<array<int, 2>> AB(M);
    for (int i = 0; i < M; i++) cin >> AB[i][0] >> AB[i][1];
    for (int i = 0; i < M; i++) AB[i][0]--, AB[i][1]--;

    int K;
    cin >> K;
    vector<array<int, 2>> CD(K);
    for (int i = 0; i < K; i++) cin >> CD[i][0] >> CD[i][1];
    for (int i = 0; i < K; i++) CD[i][0]--, CD[i][1]--;

    int ans = 0;
    for (int bit = 0; bit < (1 << K); bit++) {
        vector<int> used(N);
        for (int i = 0; i < K; i++) {
            auto[c, d] = CD[i];
            if ((bit >> i) & 1) used[c] = 1;
            else used[d] = 1;
        }
        int now = 0;
        for (int i = 0; i < M; i++) {
            auto[a, b] = AB[i];
            if (used[a] && used[b]) now++;
        }
        chmax(ans, now);
    }
    
    cout << ans << '\n';

    return 0;
}
