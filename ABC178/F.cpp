//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
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
//	vector<int> cnt(N + 1);
//	vector<int> A(N), B(N);
//
//	for (int i = 0; i < N; i++) {
//		cin >> A[i];
//		cnt[A[i]]++;
//	}	
//	for (int i = 0; i < N; i++) {
//		cin >> B[i];
//		cnt[B[i]]++;
//	}
//
//	if (any_of(cnt.begin(), cnt.end(), [&N](auto c) { return c > N; })) {
//		cout << "No" << "\n";
//		return 0;
//	}
//
//	cout << "Yes" << "\n";
//	for (const auto& e : ans) cout << e << " ";
//
//	return 0;
//}