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
//struct coor { int x, y; coor(int inx, int iny) :x(inx),y(iny){} };
//
//inline bool solve(vector<string> &map, vector<coor> &blk) {
//
//	bool flag = false;
//
//	vector<coor> tmp;
//	for (const auto &elem : blk) {
//
//			for (int k = 0; k < 4; k++) {
//
//				int x = elem.x + dx[k];
//				int y = elem.y + dy[k];
//
//				if (0 <= x && x < H && 0 <= y && y < W && map[x][y] == '.') {
//					flag = true;
//					map[x][y] = '#';
//					tmp.emplace_back(coor(x, y));
//				}
//			}
//	}
//
//	blk = tmp;
//	return flag;
//}
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
//	vector<coor> blk;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			if (map[i][j] == '#') blk.emplace_back(coor(i, j));
//		}
//	}
//
//	int cnt = 0;
//	while (solve(map, blk)) cnt++;
//
//	cout << cnt;
//
//	return 0;
//}
