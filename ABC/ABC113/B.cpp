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
//	int N, T, A;
//	cin >> N >> T >> A;
//
//	vector<int> H(N);
//	for (int i = 0; i < N; i++) cin >> H[i];
//
//	double tmp = INF;
//	int ans;
//
//	for (int i = 0; i < N; i++) {
//
//		if (abs(T - H[i] * 0.006 - A) < tmp) {
//			ans = i + 1;
//			tmp = abs(T - H[i] * 0.006 - A);
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}