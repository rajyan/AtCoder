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
//	lint N, x;
//	cin >> N >> x;
//
//	vector<lint> a(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//
//	lint ans = 0;
//	for (int i = 0; i < N - 1; i++) {
//		
//		if (x - a[i] < 0) {
//			ans += a[i + 1] + (a[i] - x);
//			a[i + 1] = 0;
//		}
//		else if (a[i + 1] + (a[i] - x) > 0) {
//			ans += a[i + 1] + (a[i] - x);
//			a[i + 1] -= a[i + 1] + (a[i] - x);
//		}
//
//	}
//
//	cout << ans;
//
//	return 0;
//}