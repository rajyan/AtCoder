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
//	lint N;
//	cin >> N;
//
//	vector<pair<lint, lint>> medal(3);
//	cin >> medal[0].first >> medal[1].first >> medal[2].first;
//	cin >> medal[0].second >> medal[1].second >> medal[2].second;
//
//	lint M = 0, left;
//	for (lint i = 0; i * medal[0].first <= N; i++) {
//		for (lint j = 0; i * medal[0].first + j * medal[1].first <= N; j++) {
//
//			left = N - i * medal[0].first - j * medal[1].first;
//			M = max(M, i * medal[0].second +
//				j * medal[1].second +
//				left / medal[2].first * medal[2].second +
//				left % medal[2].first);
//		}
//	}
//
//	lint ans = M;
//	for (lint i = 0; i * medal[0].first <= M; i++) {
//		for (lint j = 0; i * medal[0].first + j * medal[1].first <= M; j++) {
//
//			left = M - i * medal[0].second - j * medal[1].second;
//			ans = max(ans, i * medal[0].first +
//				j * medal[1].first +
//				left / medal[2].second * medal[2].first +
//				left % medal[2].second);
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}