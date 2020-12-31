//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//void solve() {
//
//	int n;
//	cin >> n;
//
//	priority_queue<pair<pair<lint, lint>, int>> LK;
//	priority_queue<pair<pair<lint, lint>, int>> RK;
//	vector<int> L(n), R(n);
//	lint ans = 0;
//	for (int i = 0; i < n; i++) {
//		lint k, l, r;
//		cin >> k >> l >> r;
//		L[i] = l;
//		R[i] = r;
//		if (l <= r) RK.emplace(make_pair(r, k), i);
//		else LK.emplace(make_pair(l, k), i);
//	}
//
//	while (!LK.empty()) {
//		auto now = LK.top();
//		LK.pop();
//	}
//
//	cout << ans << "\n";
//
//};
//
//int main() {
//
//	int T;
//	cin >> T;
//	
//	for (int i = 0; i < T; i++) {
//		solve();
//	}
//
//	return 0;
//}
//
