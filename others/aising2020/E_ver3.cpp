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
//	vector<int> L(n), R(n);
//	priority_queue<pair<int, int>> LK;
//	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> RK;
//	lint ans = 0;
//	for (int i = 0; i < n; i++) {
//		int k, l, r;
//		cin >> k >> l >> r;
//		k--;
//		L[i] = l;
//		R[i] = r;
//		if (l > r) LK.emplace(k, i);
//		else if (k != n - 1) RK.emplace(k, i);
//		else ans += l;
//	}
//
//	int cnt = 0;
//	priority_queue<int> subLR;
//	for (int j = n; j >= 0; j--) {
//
//		while (!LK.empty()) {
//			const auto& [k, i] = LK.top();
//			if (j > k) break;
//
//			ans += L[i];
//			subLR.emplace(L[i] - R[i]);
//			LK.pop();
//		}
//
//		if (!subLR.empty()) {
//			subLR.pop();
//		}
//
//	}
//
//	while (!subLR.empty()) {
//		ans -= subLR.top();
//		subLR.pop();
//	}
//
//	priority_queue<lint> subRL;
//	for (int j = 0; j < n; j++) {
//
//		while (!RK.empty()) {
//			const auto& [k, i] = RK.top();
//			if (j <= k) break;
//
//			ans += R[i];
//			subRL.emplace(R[i] - L[i]);
//			RK.pop();
//		}
//
//		if (!subRL.empty()) {
//			subRL.pop();
//		}
//
//	}
//
//	while (!subRL.empty()) {
//		ans -= subRL.top();
//		subRL.pop();
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
