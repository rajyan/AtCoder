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
//	int N, L;
//	cin >> N >> L;
//
//	vector<int> a(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//	DMP(a);
//
//	bool ok = false;
//	int memo = -1;
//	for (int i = 0; i < N; i++) {
//		if (a[i] + a[i + 1] >= L) {
//			ok = true;
//			memo = i;
//			break;
//		}
//	}
//
//	if (ok) {
//		cout << "Possible" << "\n";
//		for (int i = 0; i < memo; i++) cout << i + 1 << "\n";
//		for (int i = N - 1; i > memo + 1; i--) cout << i << "\n";
//		cout << memo + 1 << "\n";
//	}
//	else cout << "Impossible" << "\n";
//
//	return 0;
//}