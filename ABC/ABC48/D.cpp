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
//	string s;
//	cin >> s;
//
//	//vector<int> alphabet(26);
//	//for (const auto &elem : s) alphabet[elem - 'a']++;
//
//	int cnt = 0;
//	if (*s.begin() == *s.rbegin()) cnt = s.length() - 3;
//	else cnt = s.length() - 2;
//
//	if (cnt % 2 == 0) cout << "Second";
//	else cout << "First";
//
//	return 0;
//}