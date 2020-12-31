//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//#define DBG(x) cerr << #x << ": " << x << "\n"
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
//	string s;
//	cin >> s;
//
//	if (s.length() == 2) {
//
//		if (s[0] == s[1]) cout << "1 2";
//		else cout << "-1 -1";
//		return 0;
//	}
//
//	FOR(i, 0, s.length() - 2) {
//		string sub_s = s.substr(i, 3);
//		if ((sub_s[0] == sub_s[1] || sub_s[1] == sub_s[2] || sub_s[2] == sub_s[0])) {
//
//			cout << i + 1 << " " << i + 3;
//			return 0;
//		}
//	}
//
//	cout << "-1 -1";
//	return 0;
//}