
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

    struct dta {
        int a, b, c;
        dta(int a = 0, int b = 0, int c = 0) {}
        bool operator<(dta &r) const { return a < r.a; }
        bool operator>(dta &r) const { return b > r.b; }
    };

    vector<dta> abc(N);
    for (int i = 0; i < N; i++) cin >> abc[i].a >> abc[i].b >> abc[i].c;
    sort(abc.begin(), abc.end());
    //abc.emplace_back(INF, 0, 0);

    lint ans = 0, sum = 0;
    lint now = 0;
    priority_queue<dta, vector<dta>, greater<>> pq;
    for (int i = 0; i < N; i++) {

        ans += min(sum, C) * (abc[i].a - now);
        now = abc[i].a;

        pq.emplace(abc[i]);

        sum += abc[i].c;
        while (!pq.empty() && ((i == N - 1) || abc[i + 1].a > pq.top().b)) {
            ans += min(sum, C) * (pq.top().b - now + 1);
            now = pq.top().b + 1;
            sum -= pq.top().c;
            pq.pop();
        }
        DMP(sum);
    }

    cout << ans << '\n';

    return 0;
}
