#ifdef _DEBUG
#include "../../library/library/debug_template.cpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
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

	lint N, X, M;
	cin >> N >> X >> M;

	const int max_b = 50;
	auto  dp = make_vec(max_b + 1, M, 0);
	auto  sum = make_vec(max_b + 1, M, 0LL);
	for (lint i = 0; i < M; i++) {
		dp[0][i] = i * i % M;
		sum[0][i] = i;
	}

	for (int i = 0; i < max_b; i++) {
		for (int j = 0; j < M; j++) {
			dp[i + 1][j] = dp[i][dp[i][j]];
			sum[i + 1][j] = sum[i][dp[i][j]] + sum[i][j];
		}
	}

	int now = X;
	lint ans = 0;
	for (int i = 0; i < max_b; i++) {
		if ((1LL << i) & N) {
			ans += sum[i][now];
			now = dp[i][now];
		}
	}

	cout << ans << "\n";

	return 0;
}
