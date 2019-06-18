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
//	int N, M, K;
//	cin >> N >> M >> K;
//
//	lint ans = 0;
//	ans += N * (N + 1) / 2 % MOD * M % MOD * (M + 1) / 2 % MOD * (M + N + 2) % MOD;
//	ans -= N * (N + 1) / 2 % MOD * M % MOD * (M + 1) % MOD * (2 * M + 1) / 6 % MOD;
//	ans -= M * (M + 1) / 2 % MOD * N % MOD * (N + 1) % MOD * (2 * N + 1) / 6 % MOD;
//
//	cout << ans % MOD << "\n";
//
//	return 0;
//}