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
//	int N, M, Q;
//	cin >> N >> M >> Q;
//
//	vector<int> score(M, N);
//	vector<vector<int>> solved(N);
//
//	for (int i = 0; i < Q; i++) {
//
//		int q;
//		cin >> q;
//
//		if (--q) {
//			
//			int n, m;
//			cin >> n >> m;
//			n--, m--;
//
//			score[m]--;
//			solved[n].emplace_back(m);
//		}
//		else {
//
//			int n;
//			cin >> n;
//			n--;
//
//			int sum = 0;
//			for (const auto &e : solved[n]) sum += score[e];
//
//			cout << sum << "\n";
//
//		}
//
//	}
//
//	return 0;
//}
//
