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
//int pow100(int n) { return (n ? (n - 1 ? ((n - 2) ? 1000000 : 10000) : 100) : 1); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int D, N;
//	cin >> D >> N;
//
//	int M = 0;
//	for (int i = D; i < 3; i++) {
//		M += pow100(D) * N / pow100(i + 1);
//	}
//
//	cout << pow100(D) * (N + M) << "\n";
//
//	return 0;
//}