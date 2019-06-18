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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int W, H, N;
//	cin >> W >> H >> N;
//
//	struct Rect { int x, y, a; };
//	vector<Rect> rect(N);
//	for (int i = 0; i < N; i++) cin >> rect[i].x >> rect[i].y >> rect[i].a;
//
//	int up = H, lo = 0, ri = W, le = 0;
//
//	for (int i = 0; i < N; i++) {
//
//		switch (rect[i].a) {
//		case(1):
//			le = max(le, rect[i].x);
//			break;
//		case(2):
//			ri = min(ri, rect[i].x);
//			break;
//		case(3):
//			lo = max(lo, rect[i].y);
//			break;
//		case(4):
//			up = min(up, rect[i].y);
//			break;
//		}
//	}
//
//	if (up - lo < 0 || ri - le < 0) cout << 0;
//	else cout << (up - lo) * (ri - le);
//
//	return 0;
//}