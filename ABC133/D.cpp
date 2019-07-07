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
//	vector<lint> A(N), ans(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	for (int i = 0; i < N; i++) {
//		ans[0] += (-2 * (i % 2) + 1) * A[i];
//	}
//	DMP(ans[0]);
//
//	for (int i = 1; i < N; i++) {
//		ans[i] = A[i - 1] * 2 - ans[i - 1];
//	}
//
//	for (int i = 0; i < N; i++) {
//		cout << ans[i] << " ";
//	}
//
//	return 0;
//}