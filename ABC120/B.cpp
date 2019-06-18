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
//	sort(ret.begin(), ret.end(), greater<lint>());
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
//	int A, B, K;
//	cin >> A >> B >> K;
//
//	vector<lint> div;
//	div = divisor(gcd(A, B));
//
//	cout << div[K - 1] << "\n";
//
//	return 0;
//}