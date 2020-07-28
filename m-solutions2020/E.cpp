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
//inline int popcount(lint n) {
//	n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);
//	n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);
//	n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);
//	n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);
//	n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);
//	n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);
//	return n;
//}
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<lint> X(N), Y(N), P(N);
//	for (int i = 0; i < N; i++) cin >> X[i] >> Y[i] >> P[i];
//
//	vector<vector<lint>> xmin(1 << N, vector<lint>(N));
//	vector<vector<lint>> ymin(1 << N, vector<lint>(N));
//	for (int i = 0; i < (1 << N); i++) {
//		for (int j = 0; j < N; j++) {
//			xmin[i][j] = abs(X[j]);
//			ymin[i][j] = abs(Y[j]);
//			for (int k = 0; k < N; k++) {
//				if ((i >> k) & 1) {
//					chmin(xmin[i][j], abs(X[j] - X[k]));
//					chmin(ymin[i][j], abs(Y[j] - Y[k]));
//				}
//			}
//		}
//	}
//
//	vector<lint> ans(N + 1, LINF);
//	for (int i = 0; i < (1 << N); i++) {
//		for (int j = i; j >= 0; j--) {
//			j &= i;
//			long long cost = 0;
//			for (int k = 0; k < N; k++) {
//				if (!((i >> k) & 1)) {
//					cost += min(xmin[j][k], ymin[i - j][k]) * P[k];
//				}
//			}
//			chmin(ans[popcount(i)], cost);
//		}
//	}
//
//	for (const auto& e : ans) {
//		if (e == LINF) cout << "SAFE" << "\n";
//		else cout << e << "\n";
//	}
//
//	return 0;
//}
//
