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
//	vector<vector<int>> s(M);
//	int k, tmp;
//
//	for (int i = 0; i < M; i++) {
//		cin >> k;
//		for (int j = 0; j < k; j++) {
//
//			cin >> tmp;
//			s[i].emplace_back(tmp);
//
//		}
//
//	}
//
//	vector<int> p(M);
//	for (int i = 0; i < M; i++) cin >> p[i];
//	
//	int ans = 0;
//	for (int bit = 0b0; bit < (1<<N); bit++) {
//
//		bool flag = true;
//		for (int i = 0; i < M; i++) {
//
//			int on = 0;
//			for (const auto &elem : s[i]) {
//				if (bit & (1 << (elem - 1))) on++;
//			}
//			if (on % 2 != p[i]) {
//				flag = false;
//				break;
//			}
//
//		}
//		if (flag) ans++;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}