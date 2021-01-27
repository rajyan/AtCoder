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
//	int N;
//	cin >> N;
//
//	map<int, lint> A;
//	for (int i = 0; i < N; i++) {
//		int a;
//		cin >> a;
//		A[a]++;
//	}
//
//	lint sum = 0;
//	for (const auto& [key, cnt] : A) sum += key * cnt;
//
//	int Q;
//	cin >> Q;
//	for (int i = 0; i < Q; i++) {
//
//		int b, c;
//		cin >> b >> c;
//
//		sum += (c - b) * A[b];
//		A[c] += A[b];
//		A[b] = 0;
//		cout << sum << "\n";
//
//	}
//
//	return 0;
//}
//
