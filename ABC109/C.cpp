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
//int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, X;
//	cin >> N >> X;
//
//	vector<int> city(N);
//	for (int i = 0; i < N; i++) cin >> city[i];
//
//	int ans = 0;
//	for (int i = 0; i < N; i++) ans = gcd(ans, abs(city[i] - X));
//
//	cout << ans << "\n";
//
//	return 0;
//}
