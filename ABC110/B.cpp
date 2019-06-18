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
//	int N, M, X, Y;
//	cin >> N >> M >> X >> Y;
//
//	int x_max = -INF, y_min = INF, input;
//	for (int i = 0; i < N; i++) {
//		cin >> input;
//		x_max = max(input, x_max);
//	}
//	for (int j = 0; j < M; j++) {
//		cin >> input;
//		y_min = min(input, y_min);
//	}
//
//	if (max(X, x_max) < min(Y, y_min)) cout << "No War" << "\n";
//	else cout << "War" << "\n";
//
//	return 0;
//
//}
