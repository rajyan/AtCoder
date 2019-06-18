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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string s;
//	cin >> s;
//
//	int g = 0, p = 0;
//	for (int i = 0; i < (int)(s.length()); i++) {
//
//		if (s[i] == 'g') g++;
//		else p++;
//	}
//
//	int ch = s.length() / 2;
//
//	cout << abs(p - ch); //Žvl‚Íif(g>ch) ch - p else g - (p - (ch - g))
//
//	return 0;
//}