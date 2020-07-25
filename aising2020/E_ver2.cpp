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
//	priority_queue<pair<lint, pair<lint, lint>>> LK;
//	priority_queue<pair<lint, pair<lint, lint>>, vector<pair<lint, pair<lint, lint>>>, greater<>> RK;
//	lint ans = 0;
//	for (int i = 0; i < n; i++) {
//		lint k, l, r;
//		cin >> k >> l >> r;
//		k--;
//		if (l > r) LK.emplace(k, make_pair(l, r));
//		else RK.emplace(k, make_pair(r, l));
//	}
//
//	int cnt = 0;
//	priority_queue<lint> L;
//	for (int i = n; i >= 0; i--) {
//
//		while (!LK.empty()) {
//			const auto& [k, p] = LK.top();
//			if (i > k) break;
//			
//			const auto& [l, r] = p;
//			L.emplace(l - r);
//			ans += l;
//			LK.pop();
//		}
//
//		if (!L.empty()) {
//			L.pop();
//		}
//
//	}
//
//	while (!L.empty()) {
//		ans -= L.top();
//		L.pop();
//	}
//
//	priority_queue<lint> R;
//	for (int i = 0; i < n; i++) {
//
//		while (!RK.empty()) {
//			const auto& [k, p] = RK.top();
//			if (i <= k) break;
//
//			const auto& [r, l] = p;
//			R.emplace(r - l);
//			ans += r;
//			RK.pop();
//		}
//
//		if (!R.empty()) {
//			R.pop();
//		}
//
//	}
//
//	while (!R.empty()) {
//		ans -= R.top();
//		R.pop();
//	}
//
//	while (!RK.empty()) {
//		ans += RK.top().second.second;
//		RK.pop();
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
