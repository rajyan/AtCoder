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
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	for (int i = 0; i < K; i++) {
//		vector<int> next(N + 1, 0);
//		for (int j = 0; j < N; j++) {
//			next[max(0, j - A[j])]++;
//			next[min(N, j + A[j] + 1)]--;
//		}
//		for (int i = 0; i < N; i++) {
//			next[i + 1] += next[i];
//		}
//		next.pop_back();
//		swap(next, A);
//		if (A == vector<int>(N, N)) break;
//	}
//
//	for (const auto& e : A) cout << e << "\n";
//
//	return 0;
//}
//
