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
//	int Q;
//	cin >> Q;
//
//	using ull = unsigned long long;
//	auto sqrt_lint = [&](ull n) {
//		
//		ull ok = 0;
//		ull ng = n;
//
//		while (max(ng,ok) - min(ng,ok) > 1) {
//			ull mid = (ok + ng) / 2;
//			DMP(mid);
//			if (mid * mid < n) ok = mid;
//			else ng = mid;
//		}
//
//		return ok;
//	};
//
//	for (int i = 0; i < Q; i++) {
//
//		lint A, B;
//		cin >> A >> B;
//
//		lint sqrt_AB = sqrt_lint(A * B);
//		DMP(sqrt_AB);
//		
//		lint min_AB = min(A, B);
//
//		cout << sqrt_AB * 2 - 1 + (A == B) - (min_AB * (2 * sqrt_AB - min_AB + 1) >= A * B) << "\n";
//
//	}
//
//	return 0;
//}