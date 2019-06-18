//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//#define DBG(x) cerr << #x << ": " << x << "\n"
//#define INF 1000000000
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//
//
//int main() {
//
//	cin.tie(0);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> a(M), b(M), c(M);
//	FOR(i, 0, M)cin >> a[i] >> b[i] >> c[i];
//
//	vector<vector<int>> dist(N, vector<int>(N, INF));
//	FOR(i, 0, N) dist[i][i] = 0;
//
//	FOR(i, 0, M) {
//		dist[a[i] - 1][b[i] - 1] = c[i];
//		dist[b[i] - 1][a[i] - 1] = c[i];
//	}
//
//	FOR(k, 0, N) {
//		FOR(j, 0, N) {
//			FOR(i, 0, N) {
//			
//				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//			}
//		}
//	}
//
//	int cnt = 0;
//	FOR(i, 0, M) {
//
//		if (c[i] > dist[a[i] - 1][b[i] - 1]) cnt++;
//	}
//
//	cout << cnt;
//
//	return 0;
//}