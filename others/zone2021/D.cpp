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

    bool flip = false;
    deque<char> deq;
    for (const auto &c : S) {
        if (c == 'R') flip ^= 1;
        else {
            if (flip) {
                if (!deq.empty() && deq.front() == c) deq.pop_front();
                else deq.emplace_front(c);
            }
            else {
                if (!deq.empty() && deq.back() == c) deq.pop_back();
                else deq.emplace_back(c);
            }
        }
    }

    string ans;
    while (!deq.empty()) {
        char c = deq.front();
        deq.pop_front();
        ans += c;
    }
    if (flip) reverse(ans.begin(), ans.end());

    cout << ans << '\n';

    return 0;
}
