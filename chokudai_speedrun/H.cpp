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
//	vector<pair<lint, lint>> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i].first >> A[i].second;
//
//	for (int i = 0; i < N; i++) {
//
//		cout << (abs(A[i].first - A[i].second) ? abs(A[i].first - A[i].second) : -1) << "\n";
//	}
//
//
//	return 0;
//}