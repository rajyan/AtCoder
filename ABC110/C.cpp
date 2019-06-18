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
//	string S, T;
//	cin >> S >> T;
//
//	vector<char> pairS(26, '?'), pairT(26, '?');
//	for (int i = 0; i < S.length(); i++) {
//
//		if (pairS[S[i] - 'a'] == '?') pairS[S[i] - 'a'] = T[i];
//		else if (pairS[S[i] - 'a'] != T[i]) { 
//			cout << "No" << "\n";
//			return 0;
//		}
//
//		if (pairT[T[i] - 'a'] == '?') pairT[T[i] - 'a'] = S[i];
//		else if (pairT[T[i] - 'a'] != S[i]) {
//			cout << "No" << "\n";
//			return 0;
//		}
//
//	}
//
//	cout << "Yes" << "\n";
//
//	return 0;
//}