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
//	int M, N;
//	cin >> N >> M;
//
//	vector<int> bal(N);
//	for (int i = 0; i < N; i++) cin >> bal[i];
//
//	sort(bal.begin(), bal.end(), greater<int>());
//
//	int ans = 0;
//	while (M>0) {
//
//		M -= bal[ans];
//		ans++;
//	}
//
//	cout << ans;
//
//	return 0;
//}