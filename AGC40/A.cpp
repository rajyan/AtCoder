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
//	string s;
//	cin >> s;
//	if (s.front() == '>') s = '<' + s;
//	if (s.back() == '<') s += '>';
//
//	vector<int> a(s.size() + 1);
//	for (int i = 0; i < (int)s.size() - 1; i++) {
//		if (s[i] == '<') a[i + 1] = a[i] + 1;
//	}
//	for (int i = (int)s.size() - 1; i >= 0; i--) {
//		if (s[i] == '>') a[i] = max(a[i + 1] + 1, a[i]);
//	}
//	
//	cout << accumulate(a.begin(), a.end(), 0LL) << "\n";
//
//	return 0;
//}