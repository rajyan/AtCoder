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
//struct coor {
//	int x, y, h;
//	coor() {}
//	const bool operator<(coor l) const { return h > l.h; } // æ“ª‚Éh!=0‚ª—ˆ‚é‚æ‚¤‚É
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<coor> data(N);
//	for (int i = 0; i < N; i++) cin >> data[i].x >> data[i].y >> data[i].h;
//	sort(data.begin(), data.end());
//
//	vector<coor> tmp;
//	for (int X = 0; X <= 100; X++) {
//		for (int Y = 0; Y <= 100; Y++) {
//
//			int H = data[0].h + abs(data[0].x - X) + abs(data[0].y - Y);
//			bool flag = true;
//			for (int i = 0; i < N; i++) {
//
//				if (max(H - abs(data[i].x - X) - abs(data[i].y - Y), 0) != data[i].h) {
//					flag = false;
//					break;
//				}
//
//			}
//
//			if (flag) {
//				cout << X << " " << Y << " " << H << "\n";
//				return 0;
//			}
//
//		}
//	}
//}