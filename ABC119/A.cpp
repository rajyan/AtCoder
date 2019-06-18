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
//	stringstream ss;
//	int tmp;
//	bool flag = true;
//	ss << S;
//	ss >> tmp;
//	if (tmp > 2019)flag = false;
//	else if (tmp == 2019) {
//		ss.ignore();
//		ss >> tmp;
//		if (tmp > 4)flag = false;
//		else if (tmp == 4) {
//			ss.ignore();
//			ss >> tmp;
//			if (tmp > 30)flag = false;
//		}
//	}
//
//	if (flag) cout << "Heisei";
//	else cout << "TBD";
//
//	return 0;
//}