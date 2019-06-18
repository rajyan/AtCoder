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
//	long double N, K;
//	cin >> N >> K;
//
//	long double ans = 0;
//	for (int i = 1; i <= N; i++) {
//
//		if (i >= K) {
//			ans += (N - K + 1) * 1.0 / N;
//			break;
//		}
//
//		for (int j = 0; j <= 17; j++) {
//			if (((1 << j) < (K / i)) && ((K / i) <= (1 << (j + 1)))) {
//				ans += 1.0 / (1 << (j + 1)) * 1.0 / N;
//				break;
//			}
//		}
//	}
//
//	cout.precision(15);
//	cout << ans << "\n";
//
//	return 0;
//}
