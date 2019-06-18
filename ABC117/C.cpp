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
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> X(M);
//	for (int i = 0; i < M; i++) cin >> X[i];
//	sort(X.begin(), X.end());
//
//	vector<int> sub(M - 1);
//	for (int i = 0; i < M - 1; i++) sub[i] = X[i + 1] - X[i];
//	sort(sub.begin(), sub.end());
//
//	lint ans = 0;
//	for (int i = 0; i < M - N; i++) ans += sub[i];
//
//	cout << ans << "\n";
//
//	return 0;
//}