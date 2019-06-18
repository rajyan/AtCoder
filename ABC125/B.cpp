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
//	int ans = 0;
//	vector<int> C(N), V(N);
//	for (int i = 0; i < N; i++) cin >> C[i];
//	for (int i = 0; i < N; i++) cin >> V[i];
//	for (int i = 0; i < N; i++) {
//
//		if (C[i] - V[i] > 0) ans += C[i] - V[i];
//	}
//	
//	cout << ans;
//
//	return 0;
//}