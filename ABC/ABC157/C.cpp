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
//#include "../../../library/src/debug_template.hpp"
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
//	vector<pair<int, int>> sc(M);
//	for (int i = 0; i < M; i++) cin >> sc[i].first >> sc[i].second;
//
//	for (int i = 0; i < 1000; i++) {
//		string si = to_string(i);
//		if (si.size() != N) continue;
//		bool ok = true;
//		for (const auto& [s, c] : sc) {
//			if (si.size() >= s) {
//				ok &= si[s - 1] == c + '0';
//			}
//			else {
//				ok = false;
//				break;
//			}
//		}
//		if (ok) {
//			cout << i << "\n";
//			return 0;
//		}
//	}
//
//	cout << -1 << "\n";
//
//	return 0;
//}
//
