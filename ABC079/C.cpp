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
//#ifdef _debug
//#define dmp(x) cerr << #x << ": " << x << "\n"
//#else
//#define dmp(x) ((void)0)
//#endif
//
//const int mod = 1000000007, inf = 1111111111; 
//using namespace std;
//typedef long long lint;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string s;
//	cin >> s;
//
//	auto sgn = [](bool x) { return x ? 1 : -1; };
//	auto sgnchar = [](bool x) { return x ? '+' : '-'; };
//
//	for (int bit = 0b0; bit < (1 << 3); bit++) {
//		int tmp = s[0] - '0';
//		for (int i = 0; i < 3; i++) {
//			tmp += sgn((1 << i) & bit) * (s[i + 1] - '0');
//		}
//		if (tmp == 7) {
//		
//			cout << s[0];
//			for (int i = 0; i < 3; i++) {
//				cout << sgnchar((1 << i) & bit);
//				cout << s[i + 1];
//			}
//			cout << "=7\n";
//			break;
//		}
//	}
//
//	return 0;
//}