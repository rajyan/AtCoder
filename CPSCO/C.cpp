//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
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
//	vector<pair<int, int>> part(N);
//	for (int i = 0; i < N; i++) cin >> part[i].first >> part[i].second;
//
//	sort(part.begin(), part.end());
//
//	int ans = (int)(part.size());
//	int end_now = 0;
//	for (int i = 1; i < (int)(part.size()); i++) {
//		end_now = max(end_now, part[i - 1].second);
//		if(part[i].first <= end_now) ans--;
//	}
//
//	cout << ans;
//
//	return 0;
//}