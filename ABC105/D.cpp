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
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	A[0] %= M;
//	for (int i = 0; i < N - 1; i++) {
//		A[i + 1] += A[i];
//		A[i + 1] %= M;
//	}
//
//	map<int, lint> mod;
//	for (int i = 0; i < N; i++) mod[A[i] % M]++;
//
//	lint ans = mod[0] * (mod[0] + 1) / 2 - mod[0] * (mod[0] - 1) / 2;
//	for (const auto &elem : mod) ans += elem.second * (elem.second - 1) / 2;
//
//	cout << ans << "\n";
//
//	return 0;
//}