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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, T;
//	cin >> N >> T;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	vector<int> cumax(N);
//	cumax[N - 1] = A[N - 1];
//	for (int i = N - 1; i > 0; i--) cumax[i - 1] = max(cumax[i], A[i - 1]);
//
//	int profit = 0, ans = 1;
//	for (int i = 0; i < N; i++) {
//		if (profit < cumax[i] - A[i]) {
//
//			profit = cumax[i] - A[i];
//			ans = 1;
//		}
//		else if (profit == cumax[i] - A[i]) ans++;
//	}
//
//	cout << ans;
//	return 0;
//}