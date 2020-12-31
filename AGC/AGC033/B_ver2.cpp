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
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//template<class T>
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	// LとR、UとD独立で考える
//	// Nターン目までにLに落とす場合とRを後ろから考える
//	// iターン目にxL_iだとLに落ち、xR_iだとRに落ちるとしたら,
//	// xL_i < x_i < xR_iを毎ターン保つことができるなら落ちない
//
//	int H, W, N;
//	cin >> H >> W >> N;
//	int sr, sc;
//	cin >> sr >> sc;
//
//	string S, T;
//	cin >> S >> T;
//
//	vector<int> L_min(N + 1, 0), R_max(N + 1, W + 1);
//	for (int i = (int)S.size() - 1; i >= 0; i--) {
//		if (S[i] == 'L') L_min[i] = L_min[i + 1] + 1;
//		if (S[i] == 'R') R_max[i] = R_max[i + 1] - 1;
//	}
//
//	vector<int> L(N + 1, sc), R(N + 1, sc);
//	for (int i = 0; i < N; i++) {
//		if (T[i] == 'L') L[i + 1] = L[i] - 1;
//		else L[i + 1] = L[i];
//		if (T[i] == 'R') R[i + 1] = R[i] + 1;
//		else R[i + 1] = R[i];
//		chmax(L[i + 1], L_min[i] + 1);
//		chmin(R[i + 1], R_max[i] - 1);
//	}
//
//	DMP(L_min, R_max, L, R);
//
//	for (int i = 0; i < N; i++) {
//		if (L[i + 1] >= R_max[i] || R[i + 1] <= L_min[i]) {
//			cout << "NO" << "\n";
//			return 0;
//		}
//	}
//
//	vector<int> U_min(N + 1, 0), D_max(N + 1, H + 1);
//	for (int i = (int)S.size() - 1; i >= 0; i--) {
//		if (S[i] == 'U') U_min[i] = U_min[i + 1] + 1;
//		if (S[i] == 'D') D_max[i] = D_max[i + 1] - 1;
//	}
//
//	vector<int> U(N + 1, sr), D(N + 1, sr);
//	for (int i = 0; i < N; i++) {
//		if (T[i] == 'U') U[i + 1] = U[i] - 1;
//		else U[i + 1] = U[i];
//		if (T[i] == 'D') D[i + 1] = D[i] + 1;
//		else D[i + 1] = D[i];
//		chmax(U[i + 1], U_min[i] + 1);
//		chmin(D[i + 1], D_max[i] - 1);
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (U[i + 1] >= D_max[i] || D[i + 1] <= U_min[i]) {
//			cout << "NO" << "\n";
//			return 0;
//		}
//	}
//
//	cout << "YES" << "\n";
//
//	return 0;
//}