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
//	vector<lint> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	if (any_of(A.begin(), A.end(), [](auto& a) {return a == 0; })) {
//		cout << 0 << "\n";
//		return 0;
//	}
//
//	const lint mx = 1e18;
//	lint ans = 1;
//	for (int i = 0; i < N; i++) {
//
//		if (ans > 1.0L * mx / A[i]) {
//			cout << -1 << "\n";
//			return 0;
//		}
//
//		ans *= A[i];
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
