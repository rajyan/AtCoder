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
//	int N, K;
//	cin >> N >> K;
//
//	vector<lint> V(N);
//	for (int i = 0; i < N; i++) cin >> V[i];
//
//	lint ans = 0;
//	for (int i = 0; i <= min(K, N); i++) {
//
//		lint sum = 0;
//		for (int j = 0; j <= i; j++) {
//
//			sum = 0;
//			vector<lint> minus;
//			for (int k = 0; k < j; k++) {
//				sum += V[k];
//				if (V[k] < 0) minus.emplace_back(V[k]);
//			}
//			for (int k = 1; k <= i - j; k++) {
//				sum += V[N - k];
//				if (V[N - k] < 0) minus.emplace_back(V[N - k]);
//			}
//
//			sort(minus.begin(), minus.end());
//
//			for (int l = 0; l < min((int)minus.size(), K - i); l++) sum -= minus[l];
//
//			ans = max(ans, sum);
//
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}