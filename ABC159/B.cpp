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
//	string S;
//	cin >> S;
//
//	bool is_ok = true;
//	for (int i = 0; i < S.size(); i++) {
//		if (S[i] != S[S.size() - i - 1]) is_ok = false;
//	}
//
//	for (int i = 0; i < (S.size() - 1) / 2; i++) {
//		if (S[i] != S[(S.size() - 1) / 2 - i - 1])is_ok = false;
//	}
//
//	for (int i = (S.size() + 3) / 2; i < S.size(); i++) {
//		if (S[i] != S[S.size() - i - 1])is_ok = false;
//	}
//
//	if (is_ok) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}