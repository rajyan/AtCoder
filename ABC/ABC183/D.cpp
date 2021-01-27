//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
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
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//int main() {
//
//	lint N, W;
//	cin >> N >> W;
//
//	const int T_max = 210000;
//	vector<lint> imos(T_max);
//	for (int i = 0; i < N; i++) {
//		int s, t, p;
//		cin >> s >> t >> p;
//		imos[s] += p;
//		imos[t] -= p;
//	}
//
//	for (int i = 0; i < T_max - 1; i++) {
//		imos[i + 1] += imos[i];
//	}
//
//	bool ok = true;
//	for (int i = 0; i < T_max; i++) {
//		if (imos[i] > W) {
//			ok = false;
//			break;
//		}
//	}
//
//	if (ok) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}
