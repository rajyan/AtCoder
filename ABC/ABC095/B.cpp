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
//	int N, X;
//	cin >> N >> X;
//
//	int tmp, m = INF;
//	for (int i = 0; i < N; i++) {
//		cin >> tmp;
//		X -= tmp;
//		m = min(m, tmp);
//	}
//
//	cout << N + X / m << "\n";
//
//	return 0;
//}