//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007, INF = 1111111111; 
//using namespace std;
//typedef long long lint;
//
//int mypow(int a, int n) {
//	int res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a;
//		a *= a;
//		n >>= 1;
//	}
//	return res;
//}
//
//int solve(int N) {
//
//	int bit_used = 0, range = 9, res = 0;
//	int tmp, ternary, n753;
//
//	for (int digit = 3; digit <= 9; digit++) {
//
//		range *= 3;
//
//		for (int i = 0; i <= range; i++) {
//
//			bit_used = 0;
//			ternary = i;
//			n753 = 0;
//
//			for (int j = 0; j < digit; j++) {
//
//				tmp = ternary % 3;
//				ternary /= 3;
//				
//				if (tmp == 0) {
//					n753 += 3 * mypow(10,j);
//					bit_used |= 1;
//				}				
//				if (tmp == 1) {
//					n753 += 5 * mypow(10, j);
//					bit_used |= 2;
//				}
//				if (tmp == 2) {
//					n753 += 7 * mypow(10, j);
//					bit_used |= 4;
//				}
//
//			}
//
//			if (n753 > N) break;
//			if (!(bit_used ^ 7)) res++;
//
//		}
//
//	}
//
//	return res;
//
//}
//
//int main() {
//
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	cout << solve(N) << "\n";
//
//	return 0;
//
//}