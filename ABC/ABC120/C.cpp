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
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	string S;
//	cin >> S;
//
//	int len = (int)(S.length()), cnt = 0;
//	for (int i = 0; i < len; i++) cnt += S[i] - '0';
//
//	cout << min(2 * (len - cnt), 2 * cnt);
//
//	return 0;
//}