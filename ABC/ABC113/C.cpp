//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <unordered_map>
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
//	vector<pair<int, int>> city(M);
//	for (int i = 0; i < M; i++) cin >> city[i].first >> city[i].second;
//
//	vector<vector<int>> prefec(N);
//	for (int i = 0; i < M; i++) prefec[city[i].first - 1].emplace_back(city[i].second);
//	for (int i = 0; i < N; i++) sort(prefec[i].begin(), prefec[i].end());
//	
//	unordered_map<int, int> id;
//	for (int i = 0; i < N; i++) {
//		for (int j = 1; j <= (int)prefec[i].size(); j++) {
//
//			id[prefec[i][j - 1]] = j;
//
//		}
//	}
//
//	for (int i = 0; i < M; i++) {
//
//		cout << setfill('0') << setw(6) << city[i].first;
//		cout << setfill('0') << setw(6) << id[city[i].second] << "\n";
//
//	}
//
//	return 0;
//}