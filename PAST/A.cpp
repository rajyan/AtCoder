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
//int main() {
//
//	string S, T;
//	cin >> S >> T;
//
//	DMP(S, T);
//
//	string s, t;
//	for (const auto &e : S) s += tolower(e);
//	for (const auto &e : T) t += tolower(e);
//
//	DMP(s, t);
//
//	if (S == T) {
//		cout << "same" << "\n";
//	}
//	else if (s == t) {
//		cout << "case-insensitive" << "\n";
//	}
//	else {
//		cout << "different" << "\n";
//	}
//
//	return 0;
//}
//
