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
//	int N;
//	string S;
//	cin >> N >> S;
//
//	vector<int> west(N), reast(N);
//	for (int i = 0; i < N; i++) {
//		if (S[i] == 'W') west[i]++;
//		if(i) west[i] += west[i - 1];
//	}
//	for (int i = N - 1; i >= 0; i--) {
//		if (S[i] == 'E') reast[i]++;
//		if (i != N - 1) reast[i] += reast[i + 1];
//	}
//
//	int ans = INF, cnt;
//	for (int i = 0; i < N; i++) {
//		cnt = 0;
//		if (i) cnt += west[i - 1];
//		if (i != N - 1) cnt += reast[i + 1];
//		ans = min(ans, cnt);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}