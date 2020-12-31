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
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//const int MOD = 1000000007;
//const int INF = 1 << 29;
//const double EPS = 1e-9;
//
//class coor {
//public:
//	int x, y;
//};
//
//int main() {
//
//	cin.tie(0);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<coor> student(N), chk_pnt(M);
//	FOR(i, 0, N) cin >> student[i].x >> student[i].y;
//	FOR(i, 0, M) cin >> chk_pnt[i].x >> chk_pnt[i].y;
//
//
//	FOR(i, 0, N){
//
//		coor min;
//		int dist;
//		min.x = INF;
//
//		FOR(j, 0, M) {
//
//			dist = abs(student[i].x - chk_pnt[j].x) + abs(student[i].y - chk_pnt[j].y);
//			if (min.x > dist) {
//			
//				min.x = dist;
//				min.y = j + 1;
//			}
//		}
//
//		cout << min.y << "\n";
//	}
//
//	return 0;
//}