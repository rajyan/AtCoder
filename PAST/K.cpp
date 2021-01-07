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
//	int N, Q;
//	cin >> N >> Q;
//
//	vector<int> p(N); // pointer of i
//	iota(p.begin(), p.end(), 1000000); // 100000 + i = pointing to table i
//	vector<int> table(N); // top of table
//	iota(table.begin(), table.end(), 0);
//
//	for (int i = 0; i < Q; i++) {
//		int f, t, x;
//		cin >> f >> t >> x;
//		f--,t--,x--;
//
//		int ftop = table[f];
//
//		table[f] = p[x];
//		p[x] = table[t];
//		table[t] = ftop;
//	}
//
//	auto dfs = [&](auto &&f, int i) -> int {
//		
//		if (p[i] >= 1000000) {
//			return p[i];
//		}
//		else {
//			return p[i] = f(f, p[i]);
//		}
//
//	};
//
//	for (int i = 0; i < N; i++) {
//		cout << dfs(dfs, i) - 999999 << "\n";
//	}
//
//	return 0;
//}
//
