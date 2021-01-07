//#ifdef _DEBUG
//#include "../../../library/src/debug_template.cpp"
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
//template<class T>
//inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<vector<int>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		int p;
//		cin >> p;
//		edges[i + 1].emplace_back(p);
//		edges[p].emplace_back(i + 1);
//	}
//	DMP(edges);
//
//	vector<vector<int>> cnt(N);
//	auto dfs = [&](auto&& f, int now, int par) -> int {
//
//		for (const auto& next : edges[now]) {
//			if (next != par) cnt[now].emplace_back(f(f, next, now));
//		}
//
//		return accumulate(cnt[now].begin(), cnt[now].end(), 0) + 1;
//	};
//
//	dfs(dfs, 0, -1) == N;
//	DMP(cnt);
//	
//	for (int i = 0; i < N; i++) {
//
//		int ans = 1, sum = 0;
//		for (const auto& e : cnt[i]) {
//			chmax(ans, e);
//			sum += e;
//		}
//		chmax(ans, N - sum - 1);
//		cout << ans << "\n";
//	}
//
//	return 0;
//}
