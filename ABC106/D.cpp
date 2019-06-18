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
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M, Q;
//	cin >> N >> M >> Q;
//
//	vector<vector<int>> bgn_end(N, vector<int>(N));
//	int bgn, end;
//	for (int i = 0; i < M; i++) {
//		cin >> bgn >> end;
//		bgn--, end--;
//		bgn_end[bgn][end]++;
//	}
//
//	for (int row = 0; row < N; row++) {
//		for (int col = 1; col < N; col++) {
//
//			bgn_end[row][col] += bgn_end[row][col - 1];
//
//		}
//	}
//
//	int ans;
//	for (int i = 0; i < Q; i++) {
//		ans = 0;
//		cin >> bgn >> end;
//		bgn--, end--;
//
//		for (int j = bgn; j <= end; j++) {
//
//			ans += bgn_end[j][end];
//		}
//
//		cout << ans << "\n";
//	}
//
//	return 0;
//}