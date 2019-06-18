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
//	int N, M, C;
//	cin >> N >> M >> C;
//
//	vector<int> A(M), B(M);
//	for (int i = 0; i < M; i++) cin >> B[i];
//
//	int ans = 0, tmp;
//	for (int i = 0; i < N; i++) {
//
//		tmp = 0;
//
//		for (int i = 0; i < M; i++) cin >> A[i];
//		for (int i = 0; i < M; i++) tmp += A[i] * B[i];
//		if (tmp + C > 0) ans++;
//
//	}
//
//	cout << ans;
//
//	return 0;
//}