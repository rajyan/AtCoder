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
//#include "../../../library/src/debug_template.cpp"
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
//	int N, M;
//	cin >> N >> M;
//	
//	vector<int> dp(N, INF);
//	for (int i = 0; i < M; i++) {
//		int m;
//		cin >> m;
//		m = -m;
//
//		auto it = upper_bound(dp.begin(), dp.end(), m);
//		if (it == dp.end()) cout << -1 << "\n";
//		else {
//			cout << it - dp.begin() + 1 << "\n";
//			*it = m;
//		}
//
//	}
//
//	return 0;
//}
//
