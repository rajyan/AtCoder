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
//	int N;
//	cin >> N;
//
//	vector<int> h(N);
//	for (int i = 0; i < N; i++) cin >> h[i];
//
//	int ans = 0, st = 0, minh = 0;
//	while (minh != INF) {
//
//		st = 0;
//		minh = h[0] > 0 ? h[0] : INF;
//
//		if (N == 1) {
//			ans = h[0];
//			break;
//		}
//
//		for (int i = 1; i < N; i++) {
//
//			minh = (h[i] > 0) && h[i] < minh ? h[i] : minh;
//
//			if (h[i - 1] > 0 && h[i] <= 0 || (i == N - 1) && h[N - 1] > 0 ) {
//
//				for (int j = st; j <= i; j++) h[j] -= minh;
//
//				ans += minh;
//				st = i;
//				minh = INF - 1;
//
//			}
//
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}