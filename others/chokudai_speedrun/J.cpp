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
//template<class T>
//vector<T> divisor(T n, T m) {
//	vector<T> res;
//	for (T i = 1; i * i <= n; i++) {
//		if (n % i == 0) {
//			res.emplace_back(i);
//			if (i * i != n) res.emplace_back(n / i);
//		}
//	}
//	for (T i = 1; i * i <= m; i++) {
//		if (m % i == 0) {
//			res.emplace_back(i);
//			if (i * i != m) res.emplace_back(m / i);
//		}
//	}
//	sort(res.begin(), res.end(), greater<T>());
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<pair<lint, lint>> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i].first >> A[i].second;
//
//	auto divs = divisor(A[0].first, A[0].second);
//
//	lint ans = 1;
//
//	for (int i = 0; i < (int)divs.size(); i++) {
//		bool flag = true;
//		for (int idx = 0; idx < N; idx++) {
//
//			if (A[idx].first%divs[i] && A[idx].second%divs[i]) flag = false;
//
//		}
//		if (flag) {
//			ans = divs[i];
//			break;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}