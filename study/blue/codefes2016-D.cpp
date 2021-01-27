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
//template<class T>
//inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	lint N;
//	cin >> N;
//	
//	vector<lint> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	lint sum = 0, num = 1;
//	for (int i = 0; i < N; i++) {
//		if (A[i] > num) {
//			int a = (A[i] - 1) / num;
//			sum += a;
//			A[i] -= a * num;
//			if (A[i] == num && A[i] != 1) A[i]--;
//		}
//		chmax(num, A[i] + 1);
//		DMP(sum, num);
//	}
//	cout << sum << "\n";
//
//	return 0;
//}
