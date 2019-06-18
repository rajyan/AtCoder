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
//template<class T>
//T divisor(T n) {
//	T res = 0;
//	for (T i = 1; i * i <= n; i++) {
//		if (n % i == 0) {
//			//res.emplace_back(i);
//			res++;
//			if (i * i != n) res++;
//		}
//	}
//	//sort(res.begin(), res.end());
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	int ans = 0;
//	for (int i = 1; i <= N; i+=2) {
//		if(divisor(i) == 8) ans++;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}