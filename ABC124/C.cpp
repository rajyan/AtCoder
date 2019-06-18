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
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
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
//const int MOD = 1000000007;
//const int INF = 1000000000;
//const double EPS = 1e-9;
//
//
//int main() {
//
//	cin.tie(0);
//
//	string S;
//	cin >> S;
//
//	int odd = 0, even = 0;
//
//	FOR(i, 0, S.length()) {
//		if (i % 2 == 0) {
//			if (S[i] == '0') even++;
//			else odd++;
//		}
//		else {
//			if (S[i] == '1') even++;
//			else odd++;
//		}
//	}
//
//	cout << (even > odd ? odd : even);
//	return 0;
//}