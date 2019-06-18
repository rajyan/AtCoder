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
//	int N;
//	string S;
//	cin >> N >> S;
//
//	bool flag = true;
//	if (*S.begin() != 'R' || *S.rbegin() != 'B' ) flag = false;
//
//	string sub;
//	for (int i = 0; i < (int)(S.length()); i++) {
//		if (i + 2 <= (int)(S.length())) {
//			sub = S.substr(i, 2);
//			if (sub == "RB" || sub == "GG") {
//				flag = false;
//				break;
//			}
//		}
//	}
//
//	if (flag) cout << "Yes";
//	else cout << "No";
//	return 0;
//}