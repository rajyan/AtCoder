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
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> A(M);
//	vector<int> C(M);
//	for (int i = 0; i < M; i++) {
//		int b;
//		cin >> A[i] >> b;
//		for (int j = 0; j < b; j++) {
//			int c;
//			cin >> c;
//			C[i] += (1 << (c - 1));
//		}
//	}
//	DMP(A, C);
//
//	auto dp = make_vec(M + 1, (1 << N), INF);
//	dp[0][0] = 0;
//	for (int i = 0; i < M; i++) {
//		for (int bit = 0; bit < (1 << N); bit++) {
//			chmin(dp[i + 1][bit], dp[i][bit]);
//			chmin(dp[i + 1][bit | C[i]], dp[i][bit] + A[i]);
//		}
//	}
//
//	if (dp[M][(1 << N) - 1] == INF) cout << -1 << "\n";
//	else cout << dp[M][(1 << N) - 1] << "\n";
//
//	return 0;
//}