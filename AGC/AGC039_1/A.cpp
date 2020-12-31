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
//	string s;
//	lint k;
//	cin >> s >> k;
//
//	string s1 = s;
//	string s2 = s1 + s1;
//	lint cnt1 = 0, cnt2 = 0;
//	for (int i = 0; i < s1.size() - 1; i++) {
//		if (s1[i + 1] == s1[i]) {
//			cnt1++;
//			s1[i + 1] = '*';
//		}
//	}
//	for (int i = 0; i < s2.size() - 1; i++) {
//		if (s2[i + 1] == s2[i]) {
//			cnt2++;
//			s2[i + 1] = '*';
//		}
//	}
//	DMP(cnt1, cnt2);
//
//	if (cnt1 * 2 == cnt2) cout << cnt1 * k << "\n";
//	else if (all_of(s.begin(), s.end(), [&](auto c) { return c == s[0]; })) cout << (cnt1 + 2) * k / 2 << "\n";
//	else if (cnt1 * 2 < cnt2) cout << k - 1 + cnt1 * k << "\n";
//	else exit(1);
//
//	return 0;
//}