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

    int N, X;
    cin >> N >> X;

    vector<pair<int, int>> TA(N);
    for (int i = 0; i < N; i++) cin >> TA[i].first;
    for (int i = 0; i < N; i++) cin >> TA[i].second;
    // 料理がなくなる時刻の降順にソートしておく
    sort(TA.begin(), TA.end(), greater<>());

    auto judge = [&](int t) {
        priority_queue<int> pq;
        auto itr = TA.begin();
        long sum = 0;
        // 答えが時刻tと決め打ちした場合、時刻0~t-1までのt回トレーに載せるタイミングがある
        // 後ろから考えて、時刻iでも残っている料理の中でおいしさ最大のものをとっていくのが最適
        for (int i = t - 1; i >= 0; i--) {
            while (itr != TA.end() && i < itr->first) {
                pq.emplace(itr->second);
                itr++;
            }
            if (pq.empty()) continue;
            sum += pq.top();
            pq.pop();
        }

        return sum >= X;
    };

    int ans = bisearch(200000, 0, judge);
    if (ans == 200000) ans = -1;

    cout << ans << '\n';

    return 0;
}
