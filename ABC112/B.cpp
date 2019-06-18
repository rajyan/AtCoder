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
//	int N, T;
//	cin >> N >> T;
//
//	vector<pair<int, int>> root(N);
//	for (int i = 0; i < N; i++) cin >> root[i].first >> root[i].second;
//	sort(root.begin(), root.end());
//
//	for (int i = 0; i < N; i++) {
//
//		if (root[i].second <= T) {
//			cout << root[i].first << "\n";
//			return 0;
//		}
//
//	}
//
//	cout << "TLE" << "\n";
//
//	return 0;
//}