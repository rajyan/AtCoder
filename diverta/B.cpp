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
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int R, G, B, N;
//	cin >> R >> G >> B >> N;
//
//	int cnt = 0;
//	for (int i = 0; i <= N/R; i++) {
//		for (int j = 0; j <= (N - i * R)/G; j++) {
//
//			if ((N - R * i - G * j) % B == 0) cnt++;
//
//		}
//	}
//
//	cout << cnt << "\n";
//
//	return 0;
//}