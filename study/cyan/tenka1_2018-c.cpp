//#ifdef _DEBUG
//#include "../../../library/src/debug_template.cpp"
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
//#include <queue>
//#include <numeric>
//#include <algorithm>
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
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	sort(A.begin(), A.end());
//
//	deque<int> dq1, dq2;
//	int l = 0, r = N - 1;
//	while (l <= r) {
//		if (l & 1) swap(A[l], A[r]);
//		dq1.emplace_back(A[l]);
//		dq2.emplace_back(A[r]);
//		if (l != r) {
//			dq1.emplace_front(A[r]);
//			dq2.emplace_front(A[l]);
//		}
//		l++, r--;
//	}
//
//	lint ans1 = 0;
//	lint ans2 = 0;
//	int prev1 = dq1.front();
//	int prev2 = dq2.front();
//	while (!dq1.empty()) {
//		ans1 += abs(dq1.front() - prev1);
//		ans2 += abs(dq2.front() - prev2);
//		prev1 = dq1.front();
//		prev2 = dq2.front();
//		dq1.pop_front();
//		dq2.pop_front();
//	}
//
//	cout << max(ans1, ans2) << "\n";
//
//	return 0;
//}
