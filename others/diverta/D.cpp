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
//vector<lint> divisor(lint n) {
//	vector<lint> ret;
//	for (lint i = 1; i * i <= n; i++) {
//		if (n % i == 0) {
//			ret.emplace_back(i);
//			if (i * i != n) ret.emplace_back(n / i);
//		}
//	}
//	sort(ret.begin(), ret.end());
//	return ret;
//}
//
//lint gcd(lint a, lint b) { return b ? gcd(b, a%b) : a; }
//
//int main() {
//
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	lint N;
//	cin >> N;
//
//	vector<lint> div = divisor(N);
//
//	lint ans = 0;
//	for (int i = 1, len = (int)div.size(); i < len; i++) {
//
//		if (N / (div[i] - 1) == N % (div[i] - 1)) ans += div[i] - 1;
//	}
//
//	cout << ans;
//
//	return 0;
//}