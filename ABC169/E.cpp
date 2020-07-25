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
//int main() {
//
//	int N;
//	cin >> N;
//	vector<int> A(N), B(N);
//	for (int i = 0; i < N; i++) cin >> A[i] >> B[i];
//
//	sort(A.begin(), A.end());
//	sort(B.begin(), B.end());
//
//	const int mid_A = A[(N - 1) / 2] + A[N / 2];
//	const int mid_B = B[(N - 1) / 2] + B[N / 2];
//
//	const int dif = 1 + (N & 1);
//
//	cout << (mid_B - mid_A + dif) / dif << "\n";
//
//	return 0;
//}
//
