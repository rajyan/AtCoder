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
//	auto solve = [&] (auto x, auto v) {
//
//		vector<lint> rx(N), cul_max(N + 1);
//		lint sum1 = 0;
//		for (int i = N - 1; i >= 0; i--) {
//			sum1 += v[i];
//			rx[i] = sum1 - (C - x[i]);
//		}
//		lint sum2 = 0, res = 0;
//		for (int i = 0; i < N; i++) {
//			sum2 += v[i];
//			cul_max[i + 1] = max(sum2 - x[i], cul_max[i]);
//			res = max({ res, cul_max[i] + rx[i] - (C - x[i]), cul_max[i] });
//		}
//		return res;
//	};
//
//	lint ans = solve(x, v);
//	reverse(x.begin(), x.end());
//	reverse(v.begin(), v.end());
//	for (int i = 0; i < N; i++) { x[i] = C - x[i];}
//	ans = max(ans, solve(x, v));
//
//	cout << ans << "\n";
//
//	return 0;
//}