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
//	int N, C;
//	cin >> N >> C;
//	vector<vector<int>> D(C,vector<int>(C)), memo(3, vector<int>(C));
//	for (int i = 0; i < C; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> D[i][j];
//		}
//	}
//	int intmp;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> intmp;
//			memo[(i + j) % 3][intmp - 1]++;
//		}
//	}
//
//	int ans = INF, anstmp = 0;
//	for (int c0 = 0; c0 < C; c0++) {
//		for (int c1 = 0; c1 < C; c1++) { if (c1 == c0) continue;
//			for (int c2 = 0; c2 < C; c2++) { if (c2 == c0 || c2 == c1) continue;
//
//				anstmp = 0;
//				for (int i = 0; i < C; i++) {
//					anstmp += D[i][c0] * memo[0][i];
//					anstmp += D[i][c1] * memo[1][i];
//					anstmp += D[i][c2] * memo[2][i];
//				}
//				ans = min(ans, anstmp);
//
//			}
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}