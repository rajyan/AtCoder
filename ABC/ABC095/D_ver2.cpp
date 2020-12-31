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
//	lint C;
//	cin >> N >> C;
//
//	vector<lint> x(N), v(N);
//	for (int i = 0; i < N; i++) cin >> x[i] >> v[i];
//
//	vector<lint> R(N), L(N), cul_R(N + 1), cul_L(N + 1);
//	lint sum = 0;
//	for (int i = 0; i < N; i++) {
//		sum += v[i];
//		R[i] = sum - x[i];
//		cul_R[i + 1] = max(R[i], cul_R[i]);
//	}
//	sum = 0;
//	for (int i = N; i --> 0;) {
//		sum += v[i];
//		L[i] = sum - (C - x[i]);
//		cul_L[i] = max(cul_L[i + 1], L[i]);
//	}
//
//	lint ans = max(cul_R[N], cul_L[0]);
//	for (int i = 0; i < N; i++) {
//		ans = max(ans, cul_R[i] + L[i] - (C - x[i]));
//		ans = max(ans, cul_L[i + 1] + R[i] - x[i]);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}