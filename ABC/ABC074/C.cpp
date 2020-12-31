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
//#include <set>
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
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
//	lint A, B, C, D, E, F;
//	cin >> A >> B >> C >> D >> E >> F;
//
//	set<lint> wat, sug;
//	for (int i = 0; i <= 3000; i++) {
//		for (int j = 0; j <= 3000; j++) {
//			if ((A * i + B * j) * 100 <= F) wat.emplace(A * i + B * j);
//			if (C * i + D * j <= F) sug.emplace(C * i + D * j);
//		}
//	}
//
//	double maxC = 0.0;
//	pair<lint, lint> ans{ 100 * A, 0LL };
//	for (const auto &w : wat) {
//		for (const auto &s : sug) {
//			if (s <= w * E && w * 100 + s <= F) {
//				if (maxC < 1.0 * s / w) {
//					maxC = 1.0 * s / w;
//					ans = { 100 * w + s, s };
//				}
//			}
//		}
//	}
//
//	cout << ans.first << " " << ans.second << "\n";
//
//	return 0;
//}
