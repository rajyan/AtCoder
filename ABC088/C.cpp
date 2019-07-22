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
//	vector<vector<int>> grid(3, vector<int>(3));
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> grid[i][j];
//		}
//	}
//
//	bool flag = true;
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//
//			int i_ = (i + 1) % 3;
//			int j_ = (j + 1) % 3;
//
//			if ((grid[i][j] - grid[i_][j] != grid[i][j_] - grid[i_][j_]) ||
//				(grid[i][j] - grid[i][j_] != grid[i_][j] - grid[i_][j_])) {
//				flag = false;
//				break;
//			}
//		}
//	}
//
//	if (flag) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}