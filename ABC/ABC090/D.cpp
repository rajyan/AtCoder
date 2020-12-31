//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
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
//	int N, K;
//	cin >> N >> K;
//
//	//for (int i = 1; i <= N; i++) {
//	//	for (int j = 1; j <= N; j++) {
//	//		
//	//		cerr << setw(2) << i%j << " ";
//
//	//	}
//	//	cerr << "\n";
//	//}
//
//	vector<int> rem(N);
//	lint ans = !K;
//	for (int i = 1; i < N; i++) {
//		if (K <= i) ans += N / (i + 1) * (i - K + 1) + max(N % (i + 1) - K + 1, 0);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}