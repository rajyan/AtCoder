//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <utility>
//
//#define REP(idx, end) for(int idx = 0; idx < end; ++idx)
//#define DBG(x) cerr << #x << ": " << x << "\n"
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//
//int main() {
//
//	cin.tie(0);
//
//	int N, x = 0, max = 0;
//	string str;
//	cin >> N;
//	cin >> str;
//
//	REP(i, N) {
//		if (str[i] == 'I')x++;
//		else x--;
//		max = max < x ? x : max;
//	}
//
//	cout << max;
//
//	return 0;
//}