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
//	vector<vector<int>> a(H, vector<int>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> a[i][j];
//
//	vector<pair<int, int>> memo;
//	for (int i = 0; i < H; i++) {
//		if (i % 2) {
//			for (int j = W - 1; j >= 0; j--) {
//				if (a[i][j] % 2 == 1) memo.emplace_back(i, j);
//			}
//		}		
//		else {
//			for (int j = 0; j < W; j++) {
//				if (a[i][j] % 2 == 1) memo.emplace_back(i, j);
//			}
//		}
//	}
//
//	vector<tuple<int, int, int>> ans;
//	int id = 0;
//	for (int idx = 0; idx < (int)memo.size() / 2; idx++) {
//
//		auto start = memo[2 * idx];
//		auto end = memo[2 * idx + 1];
//
//		if (idx%2) {
//			for (int i = start.first; i <= end.first; i++) {
//				ans.emplace_back(i + 1, start.second + 1, id);
//			}
//			for (int j = start.second + 1; j <= end.second; j++) {
//				ans.emplace_back(end.first + 1, j + 1, id);
//			}
//			for (int j = start.second - 1; j >= end.second; j--) {
//				ans.emplace_back(end.first + 1, j + 1, id);
//			}
//		}	
//		else {
//			for (int i = start.first; i <= end.first; i++) {
//				ans.emplace_back(i + 1, start.second + 1, id);
//			}
//			for (int j = start.second + 1; j <= end.second; j++) {
//				ans.emplace_back(end.first + 1, j + 1, id);
//			}
//			for (int j = start.second - 1; j >= end.second; j--) {
//				ans.emplace_back(end.first + 1, j + 1, id);
//			}
//		}
//
//		id++;
//
//	}
//
//	cout << ans.size() - id << "\n";
//	for (int i = 0; i < (int)ans.size() - 1; i++) {
//		if (get<2>(ans[i]) == get<2>(ans[i + 1])) {
//			cout << get<0>(ans[i]) << " " << get<1>(ans[i]) << " ";
//			cout << get<0>(ans[i + 1]) << " " << get<1>(ans[i + 1]) << "\n";
//		}
//	}
//
//	return 0;
//}
