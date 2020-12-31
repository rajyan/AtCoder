//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//int main() {
//
//	int H, W, K;
//	cin >> H >> W >> K;
//
//	vector<vector<char>> grid(H, vector<char>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> grid[i][j];
//
//	int ans = 0;
//	for (int bith = 0; bith < (1 << H); bith++) {
//		for (int bitw = 0; bitw < (1 << W); bitw++) {
//
//			auto tmp = grid;
//			int cnt = 0;
//			for (int i = 0; i < H; i++) {
//				for (int j = 0; j < W; j++) {
//					if ((bith & (1 << i)) || (bitw & (1 << j))) tmp[i][j] = '.';
//					if (tmp[i][j] == '#') cnt++;
//				}
//			}
//			if (cnt == K) ans++;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
