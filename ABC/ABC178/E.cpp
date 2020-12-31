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
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//template<class T>
//inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	lint umax = -INF, umin = INF, vmax = -INF, vmin = INF;
//	for (int i = 0; i < N; i++) {
//		lint x, y;
//		cin >> x >> y;
//		chmax(umax, x + y);
//		chmin(umin, x + y);
//		chmax(vmax, x - y);
//		chmin(vmin, x - y);
//	}
//
//	cout << max(umax - umin, vmax - vmin) << "\n";
//
//	return 0;
//}
