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
//	int N;
//	cin >> N;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	for (int i = 0; i < A.size(); i++) A[i] -= i + 1;
//	sort(A.begin(), A.end());
//
//	int b = A[N / 2];
//
//	lint ans = 0;
//	for (int i = 0; i < N; i++) ans += abs(A[i] - b);
//	cout << ans << "\n";
//
//	return 0;
//}