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
//	int N;
//	cin >> N;
//
//	vector<lint> x(N);
//	for (int i = 0; i < N; i++) cin >> x[i];
//
//	double a = 0, b = 0, c = 0;
//
//	for (int i = 0; i < N; i++) {
//		a += abs(x[i]);
//		b += x[i] * x[i];
//		chmax(c, (double)abs(x[i]));
//	}
//
//	b = sqrt(b);
//
//	cout << a << "\n";
//	cout << b << "\n";
//	cout << c << "\n";
//
//	return 0;
//}
