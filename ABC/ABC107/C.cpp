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
//	vector<lint> p_x(1), n_x;
//	lint x_tmp;
//	for (int i = 0; i < N; i++) {
//
//		cin >> x_tmp;
//
//		if (x_tmp < 0) n_x.emplace_back(-x_tmp);
//		else if (x_tmp == 0) K--;
//		else p_x.emplace_back(x_tmp);
//
//	}
//	n_x.emplace_back(0);
//	reverse(n_x.begin(), n_x.end());
//
//	lint ans = INF;
//	for (int i = 0; i <= K; i++) {
//		if (i < (int)p_x.size() && K - i < (int)n_x.size()) ans = min(ans, min(2 * p_x[i] + n_x[K - i], p_x[i] + 2 * n_x[K - i]));
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}