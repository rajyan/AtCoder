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
//template<class T>
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string s, t;
//	cin >> s >> t;
//
//	vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1));
//	for (int i = 0; i < s.size(); i++) {
//		for (int j = 0; j < t.size(); j++) {
//			if (s[i] == t[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
//			chmax(dp[i + 1][j + 1], max(dp[i][j + 1], dp[i + 1][j]));
//		}
//	}
//
//	DMP(dp);
//
//	int i = s.size(), j = t.size();
//	string ans;
//	while (i > 0 && j > 0) {
//		if (dp[i][j] == dp[i - 1][j]) i--;
//		else if (dp[i][j] == dp[i][j - 1]) j--;
//		else i--, j--, ans = s[i] + ans;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}