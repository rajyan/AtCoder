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
//	int H, W;
//	cin >> H >> W;
//
//
//	vector<string> grid(H);
//	for (int i = 0; i < H; i++) cin >> grid[i];
//
//	int dx[4]{ 1,-1,0,0 }, dy[4]{ 0,0,-1,1 };
//	bool flag = true;
//	for (int row = 0; row < H; row++) {
//		for (int col = 0; col < W; col++) {
//			if (grid[row][col] == '#') {
//				for (int i = 0; i < 4; i++) {
//					if (0 <= row + dx[i] && row + dx[i] < H &&
//							0 <= col + dy[i] && col + dy[i] < W) {
//						if (grid[row + dx[i]][col + dy[i]] == '#') break;
//					}
//					if (i == 3) flag = false;
//				}
//			}
//			if (!flag) break;
//		}
//		if (!flag) break;
//	}
//
//	if (flag) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}