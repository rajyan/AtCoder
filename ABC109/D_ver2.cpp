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
//	int H, W;
//	cin >> H >> W;
//
//	vector<vector<lint>> a(H, vector<lint>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> a[i][j];
//
//	vector<pair<int, int>> ans;
//	for (int i = 0; i < H; i++) {
//		if (i % 2 != 0) {
//			for (int j = W - 1; j >= 0; j--) {
//				if (a[i][j] % 2 == 1) {
//					ans.emplace_back(i, j);
//					if (j == 0) {
//						if(i < H - 1){
//							a[i + 1][j]++;
//							ans.emplace_back(i + 1, j);
//						}
//					}
//					else {
//						a[i][j - 1]++;
//						ans.emplace_back(i, j - 1);
//					}
//				}
//			}
//		}		
//		else {
//			for (int j = 0; j < W; j++) {
//				if (a[i][j] % 2 == 1) {
//					ans.emplace_back(i, j);
//					if (j == W - 1) {
//						if (i < H - 1) {
//							a[i + 1][j]++;
//							ans.emplace_back(i + 1, j);
//						}
//					}
//					else {
//						a[i][j + 1]++;
//						ans.emplace_back(i, j + 1);
//					}
//				}
//			}
//		}
//	}
//
//	int N = (int)ans.size();
//	cout << N / 2 << "\n";
//	for (int i = 0; i < N - N % 2; i += 2) {
//
//		cout << ans[i].first + 1 << " ";
//		cout << ans[i].second + 1 << " ";
//		cout << ans[i + 1].first + 1 << " ";
//		cout << ans[i + 1].second + 1 << "\n";
//
//	}
//
//	return 0;
//}
//
//
