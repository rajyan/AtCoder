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
//	vector<lint> memo(100);
//	memo[0] = 2;
//	memo[1] = 1;
//
//	auto Lucas = [&](auto &&f, int n) -> lint {
//
//		if (n < 2) return memo[n];
//		if (!memo[n - 1]) memo[n - 1] = f(f, n - 1);
//		if (!memo[n - 2]) memo[n - 2] = f(f, n - 2);
//		return memo[n - 1] + memo[n - 2];
//		
//	};
//
//	cout << Lucas(Lucas, N) << "\n";
//
//	return 0;
//}