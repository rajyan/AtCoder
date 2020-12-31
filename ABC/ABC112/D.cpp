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
//vector<T> divisor(T n) {
//	vector<T> ret;
//	for (T i = 1; i * i <= n; i++) {
//		if (n % i == 0) {
//			ret.emplace_back(i);
//			if (i * i != n) ret.emplace_back(n / i);
//		}
//	}
//	sort(ret.begin(), ret.end(), greater<T>());
//	return ret;
//}
//
//int main() {
//
//	int N, M;
//	cin >> N >> M;
//
//	auto divs = divisor(M);
//
//	int ans;
//	for (auto& ele : divs) {
//		if (M / ele >= N) {
//			ans = ele; 
//			break;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//
//}
