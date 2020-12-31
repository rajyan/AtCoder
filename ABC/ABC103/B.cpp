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
//	bool flag = false;
//	int len = (int)S.size();
//	for (int i = 0; i < len; i++) {
//		if (S[i] == T[0]) {
//			for (int j = 0; j < len; j++) {
//				if (S[(i + j) % len] != T[j]) break;
//				if (j == len - 1) flag = true;
//			}
//		}
//	}
//
//	if (flag) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}