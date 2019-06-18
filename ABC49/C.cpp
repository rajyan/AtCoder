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
//	string S;
//	cin >> S;
//
//	int st = 0;
//	bool flag = true;
//	while (st < S.length()) {
//
//		if (S.substr(st, 5) == "dream" && (S.substr(st + 5, 3) == "era" || S.substr(st + 5, 3) == "dre" || st + 5 == S.length())) st += 5;
//		else if (S.substr(st, 7) == "dreamer" && (S.substr(st + 7, 2) == "er" || S.substr(st + 7, 2) == "dr" || st + 7 == S.length())) st += 7;
//		else if (S.substr(st, 5) == "erase" && (S.substr(st + 5, 3) == "era" || S.substr(st + 5, 3) == "dre" || st + 5 == S.length())) st += 5;
//		else if (S.substr(st, 6) == "eraser") st += 6;
//		else {
//			flag = false;
//			break;
//		}
//	
//	}
//
//	if (flag) cout << "YES";
//	else cout << "NO";
//
//	return 0;
//}