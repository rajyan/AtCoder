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
//	int N, K;
//	cin >> N >> K;
//
//	int del = (N - 1) * (N - 2) / 2 - K;
//
//	if (del < 0) {
//		cout << -1 << "\n";
//		return 0;
//	}
//
//	vector<pair<int, int>> ans;
//	ans.reserve(N * (N - 1) / 2);
//	for (int i = 2; i <= N; i++) ans.emplace_back(1, i);
//
//	int l = 2, r = 2;
//	while (del--) {
//		ans.emplace_back(l, ++r);
//		if (r == N) r = ++l;
//	}
//
//	cout << ans.size() << "\n";
//	for (const auto &e : ans) cout << e.first << " " << e.second << "\n";
//
//	return 0;
//}