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
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//const int MOD = 1000000007, INF = 1111111111;
//const double EPS = 1e-9;
//
//
//int main() {
//
//	cin.tie(0);
//	
//	vector<int> alphabet(26);
//
//	string w;
//	cin >> w;
//	
//	FOR(i, 0, w.length()) {
//		
//		if ('a' <= w[i] && w[i] <= 'z') {
//			alphabet[w[i]-'a']++;
//		}
//	}
//
//	FOR(i, 0, 26) {
//		DMP(alphabet[i]);
//		if (alphabet[i] % 2 == 1) {
//			cout << "No";
//			return 0;
//		}
//	}
//
//	cout << "Yes";
//
//	return 0;
//}