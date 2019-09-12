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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string s;
//	cin >> s;
//	const string t = "yahoo";
//
//	auto dp = make_vec(s.size() + 1, 100101, INF);
//	iota(dp[0].begin(), dp[0].end(), 0);
//	for (int i = 0; i < s.size(); i++) {
//		for (int j = 0; j < 100100; j++) {
//			dp[i + 1][j + 1] = min({ dp[i][j],dp[i][j + 1],dp[i + 1][j] });
//			if (s[i] != t[j % 5]) dp[i + 1][j + 1]++;
//		}
//	}
//
//	int ans = INF;
//	for (int i = 0; i < 100100; i += 5) {
//		ans = min(ans, dp[s.size()][i]);
//	}
//
//	cout << min(ans, (int)s.size()) << "\n";
//
//	return 0;
//}
