//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//#define DBG(x) cerr << #x << ": " << x << "\n"
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//
//
//int main() {
//
//	cin.tie(0);
//	
//	string S;
//	cin >> S;
//	
//	vector<char> output;
//
//	FOR(i,0,S.length()){
//		if (S[i] == 'B') { if(!output.empty())output.erase(output.end()-1,output.end()); }
//		else { output.emplace_back(S[i]); }
//	}
//
//	for (auto elem : output) cout << elem;
//
//	return 0;
//}