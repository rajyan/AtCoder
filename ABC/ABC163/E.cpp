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
//#include "../../../library/src/debug_template.cpp"
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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//template<class T>
//inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<pair<lint, int>> A(N);
//	for (int i = 0; i < N; i++) {
//		int a;
//		cin >> a;
//		A[i] = { a, i };
//	}
//	sort(A.begin(), A.end(), greater<>());
//
//	auto dp = make_vec(N + 1, N + 1, 0LL);
//	lint ans = 0;
//	for (int l = 0; l < N; l++) {
//		for (int r = 0; l + r < N; r++) {
//			const auto& [a, i] = A[l + r];
//
//			chmax(dp[l][r + 1], dp[l][r] + a * abs(N - 1 - r - i));
//			chmax(dp[l + 1][r], dp[l][r] + a * abs(l - i));
//			if (l + r == N - 1) chmax(ans, max(dp[l + 1][r], dp[l][r + 1]));
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
