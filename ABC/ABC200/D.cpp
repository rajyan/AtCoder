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

template<class T>
vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
template<class... Size>
auto make_vec(size_t s, Size... tail) {
    return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
}

int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    auto dp = make_vec(N + 1, 200, 0);
    auto prev = make_vec(N + 1, 200, queue<int>());
    dp[0][0] = 1;
    for (int i = 0; i < N; i++) {
        dp[i + 1] = dp[i];
        prev[i + 1] = prev[i];
        for (int mod = 0; mod < 200; mod++) {
            dp[i + 1][(mod + A[i]) % 200] += dp[i][mod];
            if (dp[i][mod]) {
                prev[i + 1][(mod + A[i]) % 200].emplace(i);
            }
        }
    }

    auto itr = find_if(prev[N].begin(), prev[N].end(), [](auto q) {
        return q.size() > 1;
    });

    if (itr == prev[N].end()) {
        cout << "No" << '\n';
        return 0;
    }

    vector<int> B, C;
    int index = N;
    int mod = itr - prev[N].begin();
    while (index != 0) {
        if (!prev[index][mod].empty()) {
            int now = prev[index][mod].front();
            mod = (mod - A[now] % 200 + 200) % 200;
            B.emplace_back(now);
        }
        index--;
    }

    index = N;
    mod = itr - prev[N].begin();
    prev[index][mod].pop();
    while (index != 0) {
        if (!prev[index][mod].empty()) {
            int now = prev[index][mod].front();
            mod = (mod - A[now] % 200 + 200) % 200;
            C.emplace_back(now);
        }
        index--;
    }

    sort(B.begin(), B.end());
    B.erase(unique(B.begin(), B.end()), B.end());
    sort(C.begin(), C.end());
    C.erase(unique(C.begin(), C.end()), C.end());

    cout << "Yes" << '\n';
    cout << B.size() << ' ';
    for (const auto &b : B) cout << b + 1 << (&b == &B.back() ? '\n' : ' ');
    cout << C.size() << ' ';
    for (const auto &c : C) cout << c + 1 << (&c == &C.back() ? '\n' : ' ');

    return 0;
}
