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
//	int N;
//	cin >> N;
//
//	struct deer { 
//		int t, x, y; 
//		deer(int t, int x, int y) :t(t), x(x), y(y) {}
//		deer() :t(0), x(0), y(0) {}
//	};
//
//	vector<deer> plan(N+1);
//	for (int i = 1; i <= N; i++) cin >> plan[i].t >> plan[i].x >> plan[i].y;
//
//	int cost, time;
//	bool flag = true;
//	for (int i = 1; i <= N; i++) {
//
//		cost = abs(plan[i].x - plan[i - 1].x) + abs(plan[i].y - plan[i - 1].y);
//		time = plan[i].t - plan[i - 1].t;
//		if (cost > time || ((cost ^ time) & 1)) flag = false;
//	}
//
//	if (flag) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}