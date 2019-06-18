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
//	int N, A, B, C, D;
//	cin >> N >> A >> B >> C >> D;
//	string S;
//	cin >> S;
//
//
//
//	if (C < D) {
//
//		bool flag = true;
//		for (int i = A; i < C - 1; i++) {
//			if (S[i] == '#' && S[i + 1] == '#') flag = false;
//		}		
//		for (int i = B; i < D - 1; i++) {
//			if (S[i] == '#' && S[i + 1] == '#') flag = false;
//		}
//
//		if (flag) cout << "Yes" << "\n";
//		else cout << "No" << "\n";
//
//	}
//	else {
//
//		bool flag = false;
//		for (int i = B - 2; i < D - 1; i++) {
//
//			if (S[i] == '.' && S[i + 1] == '.' && S[i + 2] == '.') flag = true;
//
//		}
//		if (flag) cout << "Yes" << "\n";
//		else cout << "No" << "\n";
//
//	}
//
//	return 0;
//}