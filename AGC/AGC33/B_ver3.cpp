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
//#include <bitset>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W, N;
//	cin >> H >> W >> N;
//
//	int sr, sc;
//	cin >> sr >> sc;
//	sr--, sc--;
//
//	string S, T;
//	cin >> S >> T;
//
//	const int max_HW = 202020;
//	vector<bitset<max_HW>> L(2), R(2);
//	R[N & 1].set(), L[N & 1].set();
//	for (int i = N - 1; i >= 0; i--) {
//
//		if (T[i & 1] == 'L') R[i & 1] = R[(i + 1) & 1] >> 1;
//		else R[i & 1] = R[(i + 1) & 1];
//		if (T[i & 1] == 'R') L[i & 1] = L[(i + 1) & 1] << 1;
//		else L[i & 1] = L[(i + 1) & 1];
//
//		if (S[i & 1] == 'R') R[i & 1] <<= 1;
//		else if (S[i & 1] == 'L') L[i & 1] >>= 1;
//
//		if (!(L[i & 1][max_HW - sc - 1] & R[i & 1][W - sc])) {
//			cout << "NO" << "\n";
//			return 0;
//		}
//
//	}
//	DMP(L, R);
//
//	vector<bitset<max_HW>> U(2), D(2);
//	U[N & 1].set(), D[N & 1].set();
//	for (int i = N - 1; i >= 0; i--) {
//
//		if (T[i & 1] == 'U') D[i & 1] = D[(i + 1) & 1] >> 1;
//		else D[i & 1] = D[(i + 1) & 1];
//		if (T[i & 1] == 'D') U[i & 1] = U[(i + 1) & 1] << 1;
//		else U[i & 1] = U[(i + 1) & 1];
//
//		if (S[i & 1] == 'D') D[i & 1] <<= 1;
//		else if (S[i & 1] == 'U') U[i & 1] >>= 1;
//
//		if (!(U[i & 1][max_HW - sr - 1] & D[i & 1][H - sr])) {
//			cout << "NO" << "\n";
//			return 0;
//		}
//
//	}
//	DMP(U, D);
//
//	cout << "YES" << "\n";
//
//	return 0;
//}