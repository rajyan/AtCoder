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
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <typename T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < vec.size(); i++) {
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
//lint pow(lint a, lint n) {
//	lint res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a;
//		a = a * a;
//		n >>= 1;
//	}
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	int ans = 0;
//	for (int i = 1; i <= N; i++) {
//		if (1 <= i&&i < 10 || 100 <= i && i < 1000 || 10000 <= i && i < 100000) ans++;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}