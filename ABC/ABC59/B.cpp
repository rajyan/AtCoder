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
//const int MOD = 1000000007, INF = 1111111111;
//const double EPS = 1e-9;
//
//int main() {
//
//	cin.tie(0);
//
//	string A, B;
//	cin >> A >> B;
//
//	if (A == B) cout << "EQUAL";
//	else if (A.length() > B.length()) cout << "GREATER";
//	else if (A.length() < B.length()) cout << "LESS";
//	else {
//		int cnt = 0;
//
//		while (A[cnt] == B[cnt]) {
//			cnt++;
//		}
//		if(A[cnt] > B[cnt]) cout << "GREATER";
//		else cout << "LESS";
//	}
//
//	return 0;
//}