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
//	int N;
//	cin >> N;
//
//	vector<int> p(N);
//	for (int i = 0; i < N; i++) cin >> p[i];
//	sort(p.begin(), p.end());
//
//	int ans = -p.back() / 2;
//	for (const auto &elem : p) ans += elem;
//
//	cout << ans << "\n";
//
//	return 0;
//}