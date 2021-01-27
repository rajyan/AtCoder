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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//int main() {
//
//	int A, B, C;
//	cin >> A >> B >> C;
//
//	auto dp = make_vec(100, 100, 100, 0.0L);
//
//	auto dfs = [&](auto&& f, int a, int b, int c) {
//		if (a == 100 || b == 100 || c == 100) return 0.0L;
//		if (dp[a][b][c] != 0.0) return dp[a][b][c];
//		int s = a + b + c;
//
//		long double res = 0.0;
//		res += (f(f, a + 1, b, c) + 1) * a / s;
//		res += (f(f, a, b + 1, c) + 1) * b / s;
//		res += (f(f, a, b, c + 1) + 1) * c / s;
//
//		return dp[a][b][c] = res;
//	};
//
//	cout << dfs(dfs, A, B, C) << "\n";
//
//	return 0;
//}
