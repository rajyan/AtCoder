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
//	cin >> N;
//
//	vector<int> C(N - 1), S(N - 1), F(N - 1);
//	for (int i = 0; i < N - 1; i++) cin >> C[i] >> S[i] >> F[i];
//
//	vector<int> ans(N);
//	for (int sta = 0; sta < N; sta++) {
//		for (int i = sta; i < N - 1; i++) {
//			if (ans[sta] >= S[i]) {
//				ans[sta] = !!(ans[sta] % F[i]) * F[i] - ans[sta] % F[i] + ans[sta] + C[i];
//			}
//			else ans[sta] = S[i] + C[i];
//		}
//	}
//
//	for (const auto &e : ans) cout << e << "\n";
//
//	return 0;
//}