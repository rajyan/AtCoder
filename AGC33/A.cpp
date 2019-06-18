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
//int H, W;
//vector<int> dx{ -1,1,0,0 };
//vector<int> dy{ 0,0,-1,1 };
//
//bool solve(vector<string> &map) {
//
//	vector<string> tmp = map;
//	bool flag2 = false;
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (map[i][j] == '.') {
//				bool flag = false;
//
//				for (int k = 0; k < 4; k++) {
//
//					int x = i + dx[k];
//					int y = j + dy[k];
//
//					if (0 <= x && x < H && 0 <= y && y < W) {
//						flag = (tmp[x][y] == '#') or flag;
//					}
//				}
//
//				if (flag) {
//					map[i][j] = '#';
//					flag2 = true;
//				}
//			}
//		}
//	}
//
//	return flag2;
//}
//
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	cin >> H >> W;
//
//	vector<string> map(H);
//	for (int i = 0; i < H; i++) cin >> map[i];
//
//	vector<vector<int>> ans(4);
//	vector<int> tmp;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//
//			if (map[i][j] == '#') {
//				tmp = { i + j ,  H - 1 - i + j ,  W - 1 - j + i ,  H + W - 2 - i - j };
//				for (int k = 0; k < 4; k++) {
//					ans[k].emplace_back(tmp[k]);
//				}
//			}
//		}
//	}
//
//	int cnt = 0;
//	for (int i = 0; i < 4; i++) {
//		cnt = max(cnt, (*min_element(ans[i].begin(), ans[i].end())));
//	}
//	cout << cnt;
//
//	return 0;
//}