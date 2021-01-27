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
//#include <bitset>
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
//	lint N, K;
//	cin >> N >> K;
//
//	vector<lint> A(N), B(N);
//	for (int i = 0; i < N; i++) cin >> A[i] >> B[i];
//
//	vector<lint> Kr{ K };
//	int now = 0;
//	for (int i = 30; i >= 0; i--) {
//		if (K >> i & 1) {
//			Kr.emplace_back(now + (1 << i) - 1);
//			bitset<32> tmp(Kr.back());
//			DMP(tmp);
//			now += 1 << i;
//		}
//	}
//
//	lint ans = 0;
//	for (const auto& k : Kr) {
//		lint sum = 0;
//		for (int i = 0; i < N; i++) {
//			if ((A[i] | k) == k) sum += B[i];
//		}
//		chmax(ans, sum);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
