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

    int N;
    cin >> N;
    string S, X;
    cin >> S >> X;

    vector<int> A(7), T(7);
    A[0] = 1;
    T[0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < A.size(); j++) {
            A[(i * 10) % 7] |= A[i];
            if (X[i] == 'A') A[(i * 10 + S[i] - '0') % 7] |= A[i];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < T.size(); j++) {
            T[(i * 10) % 7] |= T[i];
            if (X[i] == 'T') T[(i * 10 + S[i] - '0') % 7] |= T[i];
        }
    }
    DMP(A, T);

    return 0;
}
