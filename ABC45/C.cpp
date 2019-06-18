//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin), idx##_sz = (int)(end); idx < idx##_sz; ++idx)
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//const int MOD = 1000000007, INF = 1111111111;
//const double EPS = 1e-9;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string S;
//	cin >> S;
//
//	int bit = 0b0;
//	lint tmp = 0;
//	lint sum = 0;
//
//	while (bit^(1 << S.length() - 1)) {
//
//		tmp = 0;
//		for (int i = 0; i < (int)(S.length()); i++) {
//
//			tmp = 10 * tmp + (S[i] - '0');
//
//			if (bit & (1 << i)) {
//				sum += tmp;
//				tmp = 0;
//			}
//		}
//		sum += tmp;
//		bit += 0b1;
//	}
//
//	cout << sum;
//	return 0;
//}