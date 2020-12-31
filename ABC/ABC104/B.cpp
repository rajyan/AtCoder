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
//	bool flag = true;
//	if (S[0] != 'A') flag = false;
//	int cnt = 0;
//	for (int i = 1; i < S.size(); i++) {
//		if ('A' <= S[i] && S[i] <= 'Z') {
//			if (S[i] == 'C' && cnt == 0 && i != 1 && i != S.size() - 1) cnt++;
//			else {
//				flag = false;
//				break;
//			}
//		}
//	}
//
//	if (flag & cnt) cout << "AC" << "\n";
//	else cout << "WA" << "\n";
//
//	return 0;
//
//}
