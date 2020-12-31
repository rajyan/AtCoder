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
//	int N;
//	cin >> N;
//
//	vector<int> cnt(1000000);
//	for (int x = 1; x < 200; x++) {
//		for (int y = 1; y < 200; y++) {
//			for (int z = 1; z < 200; z++) {
//				cnt[x * x + y * y + z * z + x * y + y * z + z * x]++;
//			}
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		cout << cnt[i] << "\n";
//	}
//
//	return 0;
//}
//
