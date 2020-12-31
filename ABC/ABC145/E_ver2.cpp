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
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, T;
//	cin >> N >> T;
//
//	vector<int> A(N), B(N);
//	for (int i = 0; i < N; i++) cin >> A[i] >> B[i];
//
//	auto dp_f = make_vec(N + 1, T, 0);
//	auto dp_b = make_vec(N + 1, T, 0);
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < T; j++) {
//			chmax(dp_f[i + 1][j], dp_f[i][j]);
//			if (j > A[i]) chmax(dp_f[i + 1][j - A[i]], dp_f[i][j] + B[i]);
//		}
//	}
//	DMP(dp_f);
//
//	for (int i = N - 1; i >= 0; i--) {
//		for (int j = 0; j < T; j++) {
//			chmax(dp_b[i][j], dp_b[i + 1][j]);
//			if (j > A[i]) chmax(dp_b[i][j - A[i]], dp_b[i + 1][j] + B[i]);
//		}
//	}
//	DMP(dp_b);
//
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < T; j++) {
//			chmax(ans, dp_f[i][j] + dp_b[i + 1][T - 1 - j] + B[i]);
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}