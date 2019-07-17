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
//	int A, B;
//	cin >> A >> B;
//
//	int ans = 0;
//	for (int i = A; i <= B; i++) {
//
//		if (i / 10000 == i % 10 && i % 10000 / 1000 == i % 100 / 10) ans++;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}