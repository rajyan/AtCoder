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
//	int best = 0;
//	for (int i = 1; i < N; i++) {
//		if ((A[best].first - 1) / A[i].second < (A[i].first - 1) / A[best].second) {
//			best = i;
//		}
//	}
//	bool flag = true;
//	for (int i = 0; i < N; i++) {
//		if (i != best && (A[best].first - 1) / A[i].second <= (A[i].first - 1) / A[best].second) {
//			flag = false;
//			break;
//		}
//	}
//
//	if (flag) cout << best + 1 << "\n";
//	else  cout << -1 << "\n";
//
//	return 0;
//}