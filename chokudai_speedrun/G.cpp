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
//lint gcd(lint a, lint b) { return b ? gcd(b, a%b) : a; }
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
//	for (int i = 0; i < N; i++) {
//
//		cout << gcd(A[i].first, A[i].second) << "\n" ;
//	}
//
//
//	return 0;
//}