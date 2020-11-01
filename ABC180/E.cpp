//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
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
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	int N;
//	cin >> N;
//	
//	vector<int> X(N), Y(N), Z(N);
//	for (int i = 0; i < N; i++) cin >> X[i] >> Y[i] >> Z[i];
//
//	auto dist = [&](int from, int to) {
//		return abs(X[to] - X[from]) + abs(Y[to] - Y[from]) + max(0, Z[to] - Z[from]);
//	};
//
//
//	auto dp = make_vec(N, 1 << N, LINF);
//	dp[0][1 << 0] = 0;
//	for (int bit = 0; bit < (1 << N); bit++) {
//		for (int from = 0; from < N; from++) {
//			for (int to = 0; to < N; to++) {
//
//				if (from == to) continue;
//
//				chmin(dp[to][bit | (1 << to)], dp[from][bit] + dist(from, to));
//			}
//		}
//	}
//
//	//DMP(dp);
//
//	lint ans = LINF;
//	for (int i = 1; i < N; i++) {
//		chmin(ans, dp[i][(1 << N) - 1] + dist(i, 0));
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
