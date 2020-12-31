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
//	vector<lint> cw(N), ccw(N);
//	lint sum = 0;
//	for (int i = 0; i < N; i++) {
//		sum += v[i];
//		cw[i] = sum - x[i];
//	}
//
//	sum = 0;
//	for (int i = N - 1; i >= 0; i--) {
//		sum += v[i];
//		ccw[i] = sum - (C - x[i]);
//	}
//
//	vector<lint> ans(N);
//	for (int i = 0; i < N; i++) {
//		ans[i] = max({ 0LL, cw[i], ccw[i] });
//		for (int j = i + 1; j < N; j++) {
//			ans[i] = max(ans[i], cw[i] + ccw[j] - min(x[i], (C - x[j])));
//		}
//	}
//	cout << *max_element(ans.begin(), ans.end()) << "\n";
//
//	return 0;
//}