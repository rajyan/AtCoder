
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

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    for (int i = 0; i < M; i++) cin >> A[i];
    A.emplace_back(0);
    A.emplace_back(N + 1);
    sort(A.begin(), A.end());

    vector<int> sub(M + 1);
    int k = INF;
    for (int i = 0; i <= M; i++) {
        sub[i] = A[i + 1] - A[i] - 1;
        if (sub[i] != 0) {
            chmin(k, sub[i]);
        }
    }

    DMP(sub, k);

    lint ans = 0;
    for (int i = 0; i <= M; i++) {
        if (sub[i] != 0){
            ans += (sub[i] - 1) / k + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}
