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
//	vector<lint> A(N), cusum_A_fw(N + 1), cusum_A_bk(N + 1);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	for (int i = 1; i < N; i++) cusum_A_fw[i] = gcd(cusum_A_fw[i - 1], A[i - 1]);
//	for (int i = N; i > 0; i--) cusum_A_bk[i - 1] = gcd(cusum_A_bk[i], A[i - 1]);
//
//	lint ans = 0;
//	for (int i = 0; i < N; i++) {
//
//		lint A_gcd = 0;
//
//		A_gcd = gcd(cusum_A_fw[i], cusum_A_bk[i + 1]);
//
//		ans = max(ans, A_gcd);
//	}
//
//	cout << ans;
//
//	return 0;
//}
