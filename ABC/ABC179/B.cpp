//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
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
//	vector<int> memo(N);
//	for (int i = 0; i < N; i++) {
//		int d1, d2;
//		cin >> d1 >> d2;
//		memo[i] = d1 == d2;
//	}
//
//	bool ok = false;
//	for (int i = 0; i < N - 2; i++) {
//		if (memo[i] & memo[i + 1] & memo[i + 2]) ok = true;
//	}
//
//	if (ok) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}
