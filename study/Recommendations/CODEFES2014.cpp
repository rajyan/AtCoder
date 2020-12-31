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
//constexpr lint LINF = 1LL << 58;
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
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string A;
//	int K;
//	cin >> A >> K;
//
//	auto dp_ika = make_vec(A.size() + 1, 2, 1 << 10, lint(0));
//
//	for (int i = 0; i < A.size(); i++) {
//		for (int j = 0; j < (1 << 10); j++) {
//
//			chmax(dp_ika[i + 1][1][j | (1 << (A[i] - '0'))], dp_ika[i][1][j] * 10 + (A[i] - '0') );
//
//			for (int k = 0; k < 10; k++) {
//				if(i != 0) chmax(dp_ika[i + 1][0][j | (1 << k)], dp_ika[i][0][j] * 10 + k );
//				if( k < (A[i] - '0')) chmax(dp_ika[i + 1][0][j | (1 << k)], dp_ika[i][1][j] * 10 + k);
//			}
//
//		}
//	}
//
//	auto dp_ijo = make_vec(A.size() + 1, 2, 1 << 10, LINF);
//	dp_ijo[0][1][0] = 0;
//
//	for (int i = 0; i < A.size(); i++) {
//		for (int j = 0; j < (1 << 10); j++) {
//
//			chmin(dp_ijo[i + 1][1][j | (1 << (A[i] - '0'))], dp_ijo[i][1][j] * 10 + (A[i] - '0'));
//
//			for (int k = 0; k < 10; k++) {
//				chmin(dp_ijo[i + 1][0][j | (1 << k)], dp_ijo[i][0][j] * 10 + k);
//				if (k > (A[i] - '0')) chmin(dp_ijo[i + 1][0][j | (1 << k)], dp_ijo[i][1][j] * 10 + k);
//			}
//
//		}
//	}
//
//	auto bit_cnt = [](int b) {
//		b = (b & 0x55555555) + (b >> 1 & 0x55555555);
//		b = (b & 0x33333333) + (b >> 2 & 0x33333333);
//		b = (b & 0x0f0f0f0f) + (b >> 4 & 0x0f0f0f0f);
//		b = (b & 0x00ff00ff) + (b >> 8 & 0x00ff00ff);
//		return (b & 0x0000ffff) + (b >> 16 & 0x0000ffff);
//	};
//
//	lint A_max = 0, A_min = LINF;
//	for (int j = 0; j < (1 << 10); j++) {
//		if (bit_cnt(j) <= K) {
//			chmax(A_max, max(dp_ika[A.size()][0][j], dp_ika[A.size()][1][j]));
//			chmin(A_min, min(dp_ijo[A.size()][0][j], dp_ijo[A.size()][1][j]));
//		}
//	}
//
//	DMP(A_max, A_min);
//
//	cout << min(stol(A) - A_max, A_min - stol(A)) << "\n";
//
//	return 0;
//}