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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<string> grid(N);
//	for (int i = 0; i < N; i++) cin >> grid[i];
//
//	// A=0‚Ì‚Æ‚«‚ÌB‚ğ‘S’Tõ‚µA‘ÎÌ‚¾‚Á‚½‚ç‚»‚±‚ğ²‚Æ‚·‚é*NŒÂ‚Í‘S•”‘ÎÌ O(N^3)
//
//	int ans = 0;
//	for (int b = 0; b < N; b++) {
//		bool symm = true;
//		for (int row = 0; row < N; row++) {
//			for (int col = 0; col < N; col++) {
//				if (grid[row][(col + b) % N] != grid[col][(row + b) % N]) symm = false;
//			}
//		}
//		if (symm) ans += N;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}