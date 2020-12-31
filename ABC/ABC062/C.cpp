//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007;
//constexpr lint LINF = 1111111111;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << p.first << " " << p.second;
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << "[" << e << "] ";
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
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint H, W;
//	cin >> H >> W;
//
//	lint ans = LINF;
//	if (H % 3 == 0 || W % 3 == 0) ans = 0;
//	else {
//		
//		for (int i = 1; i < H; i++) {
//			auto mM = minmax({ W * i, ((W + 1) / 2) * (H - i), (W / 2) * (H - i) });
//			chmin(ans, mM.second - mM.first);
//		}
//		for (int i = 1; i < W; i++) {
//			auto mM = minmax({ H * i, ((H + 1) / 2) * (W - i), (H / 2) * (W - i) });
//			chmin(ans, mM.second - mM.first);
//		}
//
//		chmin(ans, min(H, W));
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}