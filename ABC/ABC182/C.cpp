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
//#include <string>
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
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	string N;
//	cin >> N;
//
//	int bn = N.size();
//	int ans = INF;
//	for (lint bit = 0; bit < (1 << bn); bit++) {
//		string tmp = "";
//		for (int i = 0; i < bn; i++) {
//			if ((bit >> i) & 1) {
//				tmp += N[i];
//			}
//		}
//		if (tmp.size() != 0 && stol(tmp) % 3 == 0) {
//			chmin(ans, bn - popcount(bit));
//		}
//	}
//
//	cout << (ans == INF ? -1 : ans) << "\n";
//
//	return 0;
//}
