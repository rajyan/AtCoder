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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, W;
//	cin >> N >> W;
//
//	vector<int> w(N), v(N);
//	for (int i = 0; i < N; i++) cin >> v[i] >> w[i];
//
//	auto dp = make_vec(N + 1, W + 1, 0);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j <= W; j++) {
//			if (j - w[i] >= 0) dp[i + 1][j] = max(dp[i][j], dp[i + 1][j - w[i]] + v[i]);
//			else dp[i + 1][j] = dp[i][j];
//		}
//	}
//	DMP(dp);
//
//	cout << dp[N][W] << "\n";
//
//	return 0;
//}