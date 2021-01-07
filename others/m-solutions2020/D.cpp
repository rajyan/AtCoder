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
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	A.emplace_back(-1);
//	A.emplace_back(0);
//	DMP(A);
//
//	lint ans = 1000;
//	int i = 0;
//	while (i < N) {
//		int m = i;
//		while (A[m] > A[m + 1]) m++;
//		if (m >= N - 1) break;
//		int M = m + 1;
//		while (A[M] <= A[M + 1]) M++;
//		DMP(m, M);
//		ans = ans / A[m] * A[M] + ans % A[m];
//		DMP(ans);
//		i = M;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
