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
//inline string chmax(string &lhs, string rhs) {
//
//	if (lhs.size() > rhs.size()) return lhs;
//	else if (lhs.size() < rhs.size()) return rhs;
//	else return lhs > rhs ? lhs : rhs;
//
//}
//
//int main() {
//
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> m_num({ 2,5,5,4,5,6,3,7,6 });
//	vector<int> A(M);
//	for (int i = 0; i < M; i++) cin >> A[i];
//
//	int idx;
//	vector<string> dp(N + 1);
//	for (int m = 0; m <= N; m++) {
//		for (int i = 0; i < M; i++) {
//
//			idx = m - m_num[A[i] - 1];
//			if (idx >= 0 && (dp[idx] != "" | idx == 0)) {
//				dp[m] = chmax(dp[m], dp[idx] + to_string(A[i]));
//			}
//
//		}
//	}
//
//	cout << dp[N] << "\n";
//
//	return 0;
//}