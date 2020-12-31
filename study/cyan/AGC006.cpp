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
//	int N, x;
//	cin >> N >> x;
//
//	if (N == 1) {
//		cout << "Yes" << "\n";
//		cout << 1 << "\n";
//		return 0;
//	}
//
//	if (x == 1 || x == 2 * N - 1) {
//		cout << "No" << "\n";
//		return 0;
//	}
//
//	cout << "Yes" << "\n";
//
//	for (int i = N - (x > N); i >= 1; i--) if(i != x) cout << i << "\n";
//	cout << x << "\n";
//	for (int i = 2 * N - 1; i >= N + (x <= N); i--) if (i != x) cout << i << "\n";
//
//	return 0;
//}