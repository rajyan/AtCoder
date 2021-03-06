
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

    int N;
    cin >> N;
    N = 1 << N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    auto l = max_element(A.begin(), A.begin() + N / 2);
    auto r = max_element(A.begin() + N / 2, A.end());

    cout << (*l < *r ? l : r) - A.begin() + 1 << '\n';

    return 0;
}
