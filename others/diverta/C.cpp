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
//	int N;
//	cin >> N;
//
//	vector<string> s(N);
//	for (int i = 0; i < N; i++) cin >> s[i];
//
//	int alast = 0, bfirst = 0, both = 0,ans = 0;
//	for (int i = 0; i < N; i++) {
//		if (s[i][0] == 'B') bfirst++;
//		if (s[i].back() == 'A') alast++;
//		if (s[i][0] == 'B'&&s[i].back() == 'A') both++;
//		for (int j = 1; j < s[i].length(); j++) {
//			
//			if (s[i][j] == 'B'&& s[i][j - 1] == 'A') ans++;
//		}
//	}
//
//	cout << ans + min(alast, bfirst) + min(0, max(max(alast, bfirst),1) - both - 1);
//
//	return 0;
//}