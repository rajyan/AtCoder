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
//	int N;
//	cin >> N;
//
//	vector<int> W(N);
//	for (int i = 0; i < N; i++) cin >> W[i];
//	for (int i = 1; i < N; i++) W[i] += W[i - 1];
//
//	int ans = INF;
//	for (int i = 0; i < N; i++) ans = min(abs(2 * W[i] - W[N - 1]), ans);
//	cout << ans << "\n";
//
//	return 0;
//}