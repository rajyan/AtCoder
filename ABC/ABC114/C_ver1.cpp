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
//vector<int> make753() {
//
//	vector<int> vec753;
//	int bit_used = 0, range = 9;
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
//				n753 *= 10;
//
//				if (tmp == 0) {
//					n753 += 3;
//					bit_used |= 1;
//				}
//				if (tmp == 1) {
//					n753 += 5;
//					bit_used |= 2;
//				}
//				if (tmp == 2) {
//					n753 += 7;
//					bit_used |= 4;
//				}
//
//			}
//
//			if (!(bit_used ^ 7)) vec753.push_back(n753);
//
//		}
//
//	}
//
//	sort(vec753.begin(), vec753.end());
//
//	return vec753;
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
//	vector<int> vec = make753();
//	int ans = upper_bound(vec.begin(), vec.end(), N) - vec.begin();
//
//	cout << ans << "\n";
//
//	return 0;
//
//}
