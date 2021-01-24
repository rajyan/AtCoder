
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

template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

int main() {

    int N;
    cin >> N;

    vector<lint> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    lint ans = 0;
    for (int i = 0; i < N; i++) {
        lint now = 0;
        for (int j = i; j < N; j++) {
            if (A[i] > A[j]) break;
            now += A[i];
        }
        for (int j = i - 1; j >= 0; j--) {
            if (A[i] > A[j]) break;
            now += A[i];
        }
        chmax(ans, now);
    }

    cout << ans << '\n';

    return 0;
}
