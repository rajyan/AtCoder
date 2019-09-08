//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
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
//	string s, t;
//	cin >> s >> t;
//
//	for (int i = s.size() - t.size(); i >= 0; i--) {
//		DMP(i);
//		if (equal(s.begin() + i, s.begin() + i + t.size(), t.begin(), 
//			[](auto s, auto t) { return s == '?' || s == t; })) {
//
//			for (int j = 0; j < i; j++) {
//				if (s[j] == '?') cout << 'a';
//				else cout << s[j];
//			}
//			cout << t;
//			for (int j = i + t.size(); j < s.size(); j++) {
//				if (s[j] == '?') cout << 'a';
//				else cout << s[j];
//			}
//
//			return 0;
//		}
//	}
//
//	cout << "UNRESTORABLE" << "\n";
//	return 0;
//}