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
//	int N, M;
//	cin >> N >> M;
//
//	int l, r;
//	vector<vector<int>> edges(N); // N‚Í”Ô•º
//	for (int i = 0; i < M; i++) {
//		cin >> l >> r;
//		edges[l - 1].emplace_back(r - 1);
//	}
//
//	int ans = 0, tmp = INF;
//	for (int i = 0; i < N; i++) {
//
//		if (!edges[i].empty()) {
//			sort(edges[i].begin(), edges[i].end());
//			tmp = min(tmp, edges[i].front());
//		}
//
//		if (tmp - 1 <= i) {
//			tmp = INF;
//			ans++;
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}