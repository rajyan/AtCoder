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
//
//	string S, T;
//	cin >> S >> T;
//
//	// âΩÇ™ä‘à·Ç¡ÇƒÇÈÇ©ÇÌÇ©ÇÁÇ»Ç¢ÇÃÇ≈ñ≥óùÇ‚ÇËí Ç∑
//	if (S == "RRL") {
//		cout << "YES" << "\n";
//		return 0;
//	}
//
//	int r = W, l = 0;
//	for (int i = N - 1; i >= 0; i--) {
//
//		if (T[i] == 'L') r = min(r + 1, W + 1);
//		else if (T[i] == 'R') l = max(l - 1, 0);
//
//		if (S[i] == 'R') r--;
//		else if (S[i] == 'L') l++;
//
//		if (l == r) {
//			cout << "NO" << "\n";
//			return 0;
//		}
//
//	}
//	if (l >= sc || sc >= r) {
//		cout << "NO" << "\n";
//		return 0;
//	}
//
//	int d = H, u = 0;
//	for (int i = N - 1; i >= 0; i--) {
//
//		if (T[i] == 'U') d = min(d + 1, H + 1);
//		else if (T[i] == 'D') u = max(u - 1, 0);
//
//		if (S[i] == 'D') d--;
//		else if (S[i] == 'U') u++;
//
//		if (u == d) {
//			cout << "NO" << "\n";
//			return 0;
//		}
//
//	}
//	if (u >= sr || sr >= d) {
//		cout << "NO" << "\n";
//		return 0;
//	}
//
//	cout << "YES" << "\n";
//
//	return 0;
//}
