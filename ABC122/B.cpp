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
//	string S;
//	cin >> S;
//
//	int tmp = 0, ans = 0;
//	for (int i = 0; i < (int)(S.length()); i++) {
//		if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') tmp++;
//		else {
//			ans = max(ans, tmp);
//			tmp = 0;
//		}
//	}
//
//	cout << max(ans, tmp);
//
//	return 0;
//}