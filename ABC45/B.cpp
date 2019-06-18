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
//char solve(string A, string B, string C, char turn) {
//
//	switch (turn) {
//	case('a'):
//		if (A == "") return 'A';
//		return solve(A.substr(1), B, C, A[0]);
//		break;
//	case('b'):
//		if (B == "") return 'B';
//		return solve(A, B.substr(1), C, B[0]);
//		break;
//	case('c'):
//		if (C == "") return 'C';
//		return solve(A, B, C.substr(1), C[0]);
//		break;
//	}
//
//	return '*';
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string A, B, C;
//	cin >> A >> B >> C;
//
//	cout << solve(A.substr(1), B, C, A[0]);
//	return 0;
//}