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
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<lint> A(N + 1);
//	for (int i = 0; i <= N; i++) cin >> A[i];
//
//	// if N not 0 B_0 = 1
//	// B_(i-1) <= A_i + B_i <= 2*B_(i-1)
//	vector<lint> B(N + 1, LINF);
//	B[0] = 1;
//	for (int i = 1; i <= N; i++) {
//		chmin(B[i], 2 * B[i - 1] - A[i]);
//	}
//
//	lint sum = 0;
//	for (int i = N; i >= 0; i--) {
//		chmin(B[i], sum);
//		sum += A[i];
//	}
//
//	lint ans = 0;
//	if (any_of(B.begin(), B.end(), [](auto b) { return b < 0; }) || A[0] != 0 && N != 0 || A[0] != 1 && N == 0) {
//		ans = -1;
//	}
//	else {
//		ans = accumulate(A.begin(), A.end(), 0LL) + accumulate(B.begin(), B.end(), 0LL);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
