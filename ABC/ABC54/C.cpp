//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//
//#define FOR(idx, begin, end) for(int idx = (begin); idx < (end); ++idx)
//#define DMP(x) cerr << #x << ": " << x << "\n"
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//
//int main() {
//
//	cin.tie(0);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<bool> visited(N, false);
//
//	vector<int> a(M), b(M);
//	FOR(i, 0, M) cin >> a[i] >> b[i];
//
//	vector<vector<bool>> path(N, vector<bool>(N, false));
//	FOR(i, 0, M) {
//		path[a[i] - 1][b[i] - 1] = true;
//		path[b[i] - 1][a[i] - 1] = true;
//	}
//
//	int ans = 0;
//
//	queue<pair<int, vector<bool>>> node;
//	node.push({0, visited});
//
//	while (!node.empty()) {
//		
//		auto now = node.front();
//		now.second[now.first] = true;
//		node.pop();
//
//		FOR(i, 0, N) {
//			if (now.second[i] == false && path[now.first][i] == true) {
//
//				node.push({i, now.second});
//			}
//		}
//
//		FOR(i, 0, N) {
//
//			if (now.second[i] == false) break;
//			if (i == N - 1) ans++;
//		}
//	
//	}
//
//	cout << ans;
//
//	return 0;
//}