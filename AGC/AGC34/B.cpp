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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string s;
//	cin >> s;
//	lint Acnt = 0, ans = 0;
//	s += 'X';//”Ô•º
//
//	for (int i = 0; i < (int)s.size(); i++) {
//
//		if (i > 0 && s[i - 1] == 'B' && s[i] == 'A') Acnt = 0;
//		if (s[i] == 'A') Acnt++;
//		else if (i > 0 && s[i - 1] == 'B' && s[i] == 'C') ans += Acnt;
//		else if (i > 0 && ((s[i - 1] == 'B' && s[i] == 'B') || (s[i - 1] == 'C' && s[i] == 'C') || (s[i - 1] == 'A' && s[i] == 'C'))) Acnt = 0;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}