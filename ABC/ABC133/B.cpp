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
//template<class T>
//vector<T> divisor(T n) {
//	vector<T> res;
//	for (T i = 1; i * i <= n; i++) {
//		if (n % i == 0) {
//			res.emplace_back(i);
//			if (i * i != n) res.emplace_back(n / i);
//		}
//	}
//	sort(res.begin(), res.end());
//	return res;
//}
//
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, D;
//	cin >> N >> D;
//
//	vector<vector<int>> X(N, vector<int>(D));
//	for (int i = 0; i < N; i++) for (int j = 0; j < D; j++) cin >> X[i][j];
//	
//	int sum, ans = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//				
//			sum = 0;
//			for (int k = 0; k < D; k++) {
//
//				sum += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
//
//			}
//			auto div = divisor(sum);
//			for (const auto &e : div) if (e*e == sum) ans++;
//
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}