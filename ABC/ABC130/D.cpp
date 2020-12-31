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
//const int Modulo = 1000000007, INF = 1111111111; 
//using namespace std;
//typedef long long lint;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint N, K;
//	cin >> N >> K;
//
//	vector<lint> a(N + 1);
//	for (int i = 1; i <= N; i++) cin >> a[i];
//	for (int i = 0; i <= N - 1; i++) a[i + 1] += a[i];
//
//	lint ans = 0, j = 0;
//	for (int i = 0; i <= N; i++) {
//
//		while (j <= N) {
//			if (a[j] - a[i] >= K) {
//				ans += N - j + 1;
//				break;
//			}
//			else j++;
//		}
//
//	}
//	
//	cout << ans << "\n";
//
//	return 0;
//}