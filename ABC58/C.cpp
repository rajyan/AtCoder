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
//const int MOD = 1000000007;
//const int INF = 1000000000;
//const double EPS = 1e-9;
//
//
//int main() {
//
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//
//	vector<string> S(n);
//	FOR(i, 0, n) cin >> S[i];
//	sort(S[0].begin(), S[0].end());
//
//	if (n == 1) {
//		cout << S[0];
//		return 0;
//	}
//
//	string ans = "";
//
//	FOR(i, 0, S[0].length()) {
//		FOR(j, 1, n) {
//
//			if (S[j].find_first_of(S[0][i]) != string::npos) {
//				S[j].erase(S[j].find_first_of(S[0][i]), 1);
//			}
//			else break;
//
//			if (j == n - 1) ans += S[0][i];
//		}
//	}
//
//	cout << ans;
//
//	return 0;
//}
