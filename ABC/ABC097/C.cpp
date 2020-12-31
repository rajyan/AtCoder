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
//using lint = long long;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string s;
//	int K;
//	cin >> s >> K;
//
//	vector<string> ans;
//	for (int alpha = 'a'; alpha <= 'z'; alpha++) {
//		DMP(char(alpha));
//		for (int i = 0; i < (int)s.size(); i++) {
//
//			if (s[i] == alpha) {
//				for (int substr = 1; substr <= K; substr++) {
//					if (i + substr <= (int)s.size()) {
//						ans.emplace_back(s.substr(i, substr));
//					}
//				}
//			}
//
//		}
//		sort(ans.begin(), ans.end());
//		ans.erase(unique(ans.begin(), ans.end()), ans.end());
//		if ((int)ans.size() >= K) break;
//	}
//
//	sort(ans.begin(), ans.end());
//	ans.erase(unique(ans.begin(), ans.end()), ans.end());
//	cout << ans[K - 1] << "\n";
//
//	return 0;
//}