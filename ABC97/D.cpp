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
//bool check(const vector<int> &p, const vector<vector<int>> &pswap, const int &st, //ŒÅ’è’l
//			const int i, vector<int> used) {
//
//	if (st == p[i] - 1) return true;
//
//	bool flag = false;
//	for (const auto &elem : pswap[i]) {
//		if (!used[elem]) {
//			used[elem] = 1;
//			flag |= check(p, pswap, st, elem, used);
//		}
//	}
//	
//	return flag;
//
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> p(N);
//	vector<vector<int>> pswap(N);
//	for (int i = 0; i < N; i++) cin >> p[i];
//	int x, y;
//	for (int i = 0; i < M; i++) {
//		cin >> x >> y;
//		x--, y--;
//		pswap[x].emplace_back(y);
//		pswap[y].emplace_back(x);
//	}
//
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		if(check(p, pswap, i, i, vector<int>(N))) ans++;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}