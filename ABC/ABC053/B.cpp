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
//#define DMP(x) cerr << #x << ": " << x << "\n"
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//
//
//int main() {
//
//	cin.tie(0);
//	
//	string str;
//	cin >> str;
//
//	int A;
//
//	FOR(i, 0, str.length()) {
//		if (str[i] == 'A') {
//			A = i;
//			break;
//		}
//	}
//
//	FOR(i, 0, str.length()) {
//		if (str[str.length() - 1 - i] == 'Z') {
//			
//			cout << str.length() - i -A;
//			return 0;
//		}
//	}
//	return -1;
//}