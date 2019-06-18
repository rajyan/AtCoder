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
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> A(M);
//
//	int num, tmp;
//	for (int i = 0; i < N; i++) {
//
//		cin >> num;
//
//		for (int j = 0; j < num; j++) {
//
//			cin >> tmp;
//			A[tmp - 1]++;
//
//		}
//	}
//
//	int ans = 0;
//	for (const auto &elem : A) {
//
//		if (elem == N) ans++;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}