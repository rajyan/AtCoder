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
//constexpr int MOD = 1000000007, INF = 1111111111;
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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	vector<vector<int>> alpha(26);
//	string s, t;
//	cin >> s >> t;
//
//	for (int i = 0; i < s.size(); i++) {
//		alpha[s[i] - 'a'].emplace_back(i + 1);
//	}
//
//	DMP(alpha);
//	int pre = 0;
//	lint ans = 0;
//	for (int i = 0; i < t.size(); i++) {
//
//		int idx = t[i] - 'a';
//		auto tmp = upper_bound(alpha[idx].begin(), alpha[idx].end(), pre);
//		if (alpha[idx].empty()) {
//			cout << -1 << "\n";
//			return 0;
//		}
//		else if (tmp == alpha[idx].end()) {
//			
//			ans += s.size() - pre;
//			pre = alpha[idx][0];
//			ans += pre;
//
//		}
//		else {
//			ans += *tmp - pre;
//			pre = *tmp;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}