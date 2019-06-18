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
//	vector<vector<char>> tile(H, vector<char>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> tile[i][j];
//
//	vector<int> row(H, 1), col(W, 1);
//	for (int i = 0; i < H; i++) {
//
//		bool flag = true;
//		for (int j = 1; j < W; j++) {
//
//			if (tile[i][j - 1] != tile[i][j]) {
//				flag = false;
//				break;
//			}
//		}
//
//		if (flag && tile[i][0] == '.') row[i] = 0;
//	}	
//
//	for (int j = 0; j < W; j++) {
//
//		bool flag = true;
//		for (int i = 1; i < H; i++) {
//
//			if (tile[i - 1][j] != tile[i][j]) {
//				flag = false;
//				break;
//			}
//		}
//
//		if (flag && tile[0][j] == '.') col[j] = 0;
//	}
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//
//			if (row[i] & col[j]) cout << tile[i][j];
//
//		}
//		if (row[i]) cout << "\n";
//	}
//
//	return 0;
//	
//}