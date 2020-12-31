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
//	int N_max;
//	cin >> N_max;
//
//	vector<char> S(N_max);
//	FOR(i, 0, N_max) cin >> S[i];
//
//	vector<int> black(N_max + 1);
//	vector<int> rwhite(N_max + 1);
//
//	FOR(i, 0, N_max) {
//		black[i + 1] = black[i];
//		if (S[i] == '#') black[i + 1]++;
//		DMP(black[i]);
//	}
//
//	for (int i = N_max - 1; i >= 0; i--){
//
//		rwhite[i] = rwhite[i + 1];
//		if (S[i] == '.') rwhite[i]++;
//		
//
//		black[i] += rwhite[i + 1];
//		DMP(rwhite[i]);
//	}
//
//	cout << *min_element(black.begin(), black.end() - 1);
//	return 0;
//}