//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <set>
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
//	int N;
//	string S;
//	cin >> N >> S;
//
//	vector<vector<int>> memo(26, vector<int>(S.size())), rmemo(26, vector<int>(S.size()));
//
//	for (int i = 0; i < (int)S.size(); i++) {
//		memo[S[i] - 'a'][i] = 1;
//	}
//	for (int i = (int)S.size() - 1; i >= 1; i--) {
//		for (int j = 0; j < 26; j++) {
//			if(i == (int)S.size() - 1)rmemo[j][i] = memo[j][i];
//			rmemo[j][i - 1] = rmemo[j][i] + memo[j][i - 1];
//		}
//	}
//	for (int i = 1; i < (int)S.size(); i++) {
//		for (int j = 0; j < 26; j++) {
//			memo[j][i] += memo[j][i - 1];
//		}
//	}		
//
//	int ans = -INF, cnt;
//	for (int i = 0; i < (int)S.size() - 1; i++) {
//		cnt = 0;
//		for (int j = 0; j < 26; j++) {
//			if (memo[j][i] != 0 && rmemo[j][i+1] != 0) cnt++;
//		}
//		ans = max(ans, cnt);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}