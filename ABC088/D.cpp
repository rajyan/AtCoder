//#include <cassert>
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
//	vector<string> grid(H);
//	int black = 0;
//	for (int i = 0; i < H; i++) {
//		cin >> grid[i];
//		for (int j = 0; j < W; j++) black += grid[i][j] == '#';
//	}
//
//	vector<vector<int>> used(H, vector<int>(W, INF));
//	used[0][0] = 1;
//	vector<int> dx{ 1,0,-1,0 }, dy{ 0,1,0,-1 };
//
//	auto ok = [&](int x, int y) { return 0 <= x && x < H && 0 <= y && y < W && grid[x][y] == '.'; };
//
//	auto dfs = [&](auto &&f, int x, int y) -> bool {
//		
//		bool flag = (x == H - 1 && y == W - 1);
//
//		for (int i = 0; i < 4; i++) {
//			int xto = x + dx[i], yto = y + dy[i];
//			if (ok(xto, yto) && used[xto][yto] > used[x][y] + 1) {
//				used[xto][yto] = used[x][y] + 1;
//				flag |= f(f, x + dx[i], y + dy[i]);
//			}
//		}
//
//		return flag;
//
//	};
//
//	if(dfs(dfs,0,0)) cout << H * W - black - used.back().back() << "\n";
//	else cout << "-1\n";
//
//	return 0;
//}