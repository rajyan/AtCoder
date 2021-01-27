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
//#include "../../../library/src/debug_template.hpp"
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
//	vector<int> A(9);
//	for (int i = 0; i < 9; i++) cin >> A[i];
//
//	int N;
//	cin >> N;
//	set<int> B;
//	for (int i = 0; i < N; i++) {
//		int b;
//		cin >> b;
//		B.emplace(b);
//	}
//
//	auto chk = [&B](auto& a) { return B.find(a) != B.end(); };
//
//	bool ans = false;
//	ans |= chk(A[2]) && chk(A[4]) && chk(A[6]);
//	ans |= chk(A[0]) && chk(A[4]) && chk(A[8]);
//	for (int i = 0; i < 3; i++) {
//		ans |= chk(A[i * 3 + 0]) && chk(A[i * 3 + 1]) && chk(A[i * 3 + 2]);
//		ans |= chk(A[0 * 3 + i]) && chk(A[1 * 3 + i]) && chk(A[2 * 3 + i]);
//	}
//
//	if (ans) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}
