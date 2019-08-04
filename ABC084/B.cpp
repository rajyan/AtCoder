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
//using lint = long long;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int A, B;
//	cin >> A >> B;
//
//	string S;
//	cin >> S;
//
//	bool flag = true;
//	for (int i = 0; i < S.size(); i++) {
//		if (i == A) {
//			if (S[i] != '-') flag = false;
//		}
//		else {
//			if (S[i] < '0' || '9' < S[i]) flag = false;
//		}
//	}
//
//	if (flag) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}