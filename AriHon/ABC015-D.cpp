//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
//	return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//template<class T>
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int W, N, K;
//	cin >> W >> N >> K;
//
//	vector<pair<int,int>> ab(N);
//	for (int i = 0; i < N; i++) cin >> ab[i].first >> ab[i].second;
//
//	auto dp = make_vec(2, W + 1, K + 1, 0);
//	for (int i = 0; i < N; i++) {
//		for (int w = 0; w <= W; w++) {
//			for (int num = 0; num < K; num++) {
//				chmax(dp[(i + 1) & 1][w][num + 1], dp[i & 1][w][num + 1]);
//				if (w - ab[i].first >= 0) {
//					chmax(dp[(i + 1) & 1][w][num + 1], dp[i & 1][w - ab[i].first][num] + ab[i].second);
//				}
//			}
//		}
//	}
//
//	cout << dp[N & 1][W][K] << "\n";
//
//	return 0;
//}