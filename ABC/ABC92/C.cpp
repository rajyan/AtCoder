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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<int> A(N + 2), c_A(N + 1);
//	for (int i = 1; i <= N; i++) cin >> A[i];
//	int sum = 0;
//	for (int i = 0; i <= N; i++) {
//		c_A[i] = abs(A[i + 1] - A[i]);
//		sum += c_A[i];
//	}
//	for (int i = 1; i <= N; i++) {
//		cout << sum - c_A[i - 1] - c_A[i] + abs(A[i - 1] - A[i + 1]) << "\n";
//	}
//	return 0;
//}