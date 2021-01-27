//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <set>
//#include <map>
//#include <unordered_map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//#include <bitset>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<pair<int, int>> AB(N);
//	for (int i = 0; i < N; i++) cin >> AB[i].first >> AB[i].second;
//
//	vector<pair<int, int>> add(N);
//	for (int i = 0; i < N; i++) {
//		const auto& [a, b] = AB[i];
//		add[i] = { a + b, i };
//	}
//	sort(add.begin(), add.end(), greater<>());
//
//	lint ans = 0;
//	for (int i = 0; i < N; i++) {
//		const auto& [_, idx] = add[i];
//		const auto& [a, b] = AB[idx];
//		if (i & 1) ans -= b;
//		else ans += a;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
