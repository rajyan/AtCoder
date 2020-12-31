//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//int main() {
//
//	int K;
//	cin >> K;
//
//	vector<int> used(K);
//	int r = 0, cnt = 1;
//	while (!used[r]) {
//		used[r] = 1;
//		((r *= 10) += 7) %= K;
//		if (r == 0) {
//			cout << cnt << "\n";
//			return 0;
//		}
//		cnt++;
//	}
//
//	cout << -1 << "\n";
//
//	return 0;
//}
//
