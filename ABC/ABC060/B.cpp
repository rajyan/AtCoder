//include <iostream>
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
//const int MOD = 1000000007, INF = 1111111111;
//const double EPS = 1e-9;
//
//
//int main() {
//
//	cin.tie(0);
//
//	int A, B, C;
//	cin >> A >> B >> C;
//
//	int mod0 = A % B, sum = A;
//
//	do {
//
//		sum += A;
//		
//		if (sum%B == C) {
//
//			cout << "YES";
//			return 0;
//		}
//	}
//	while (mod0 != sum%B);
//
//	cout << "NO";
//	return 0;
//}