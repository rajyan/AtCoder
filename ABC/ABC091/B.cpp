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
//using lint = long long;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	map<string, int> mp;
//	string tmp;
//	for (int i = 0; i < N; i++) {
//		cin >> tmp;
//		mp[tmp]++;
//	}
//	
//	int M;
//	cin >> M;
//	for (int i = 0; i < M; i++) {
//		cin >> tmp;
//		mp[tmp]--;
//	}
//
//	int ans = 0;
//	for (auto &e : mp) { ans = max(ans, e.second); }
//
//	cout << ans << "\n";
//
//	return 0;
//}