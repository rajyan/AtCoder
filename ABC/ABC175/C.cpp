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
//#include "../../../library/src/debug_template.cpp"
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
//	lint X, K, D;
//	cin >> X >> K >> D;
//	X = abs(X);
//
//	if (X / D > K) {
//		cout << abs(X - K * D) << "\n";
//		return 0;
//	}
//
//	K -= X / D;
//	X -= X / D * D;
//
//	if (K & 1) cout << abs(X - D) << "\n";
//	else cout << X << "\n";
//
//	return 0;
//}
//
