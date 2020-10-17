//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
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
//	vector<int> a(N), b(N), c(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//	for (int i = 0; i < N; i++) cin >> b[i];
//	for (int i = 0; i < N; i++) cin >> c[i];
//
//	for (int bit = 0; bit < (1 << (N - 1)); bit++) {
//		vector<int> sum;
//		int p = 0;
//		for (int i = 0; i < N - 1; i++) {
//			if (bit & 1) {
//				p += a[i];
//				if (i > 1) p += c[i - 1];
//				sum.emplace_back(p);
//				p = b[i];
//			}
//		}
//	}
//
//	return 0;
//}
