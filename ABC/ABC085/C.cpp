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
//	int N, Y;
//	cin >> N >> Y;
//
//	bool flag = false;
//	for (int i = 0; i <= 2000; i++) {
//		for (int j = 0; j <= 2000; j++) {
//
//			if ((Y - 10000 * i - 5000 * j) / 1000 == N - i - j && N - i - j >= 0) {
//				cout << i << " " << j << " " << N - i - j << "\n";
//				return 0;
//			}
//
//		}
//	}
//
//	cout << "-1 -1 -1" << "\n";
//
//	return 0;
//}