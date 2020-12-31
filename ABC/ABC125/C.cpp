//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
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
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<lint> A(N), div1, div2;
//	for (int i = 0; i < N; i++) cin >> A[i];
//	div1 = divisor(A[0]);
//	div2 = divisor(A[1]);
//
//	lint ans = 0, cnt;
//	
//	for (const auto &elem : div1) {
//		cnt = 0;
//		bool flag = false;
//		for (int i = 0; i < N; i++) {
//
//			if (A[i] % elem != 0) cnt++;
//			if (cnt > 1) break;
//			if (i == N - 1) {
//				ans = elem;
//				flag = true;
//			}
//		}if (flag) break;
//	}
//
//	for (const auto &elem : div2) {
//		cnt = 0;
//		bool flag = false;
//		for (int i = 0; i < N; i++) {
//
//			if (A[i] % elem != 0) cnt++;
//			if (cnt > 1) break;
//			if (i == N - 1) {
//				ans = elem > ans ? elem : ans;
//				flag = true;
//			}
//		}if (flag) break;
//	}
//
//	cout << ans;
//
//	return 0;
//}