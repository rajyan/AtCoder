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
//void cret(long double ld) {
//	cout << ld << "\n";
//	exit(0);
//}
//
//int main() {
//	
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//	cout << fixed << setprecision(10);
//	
//	lint N, D;
//	cin >> N >> D;
//
//	lint X, Y;
//	cin >> X >> Y;
//
//	if (X % D || Y % D) cret(0.0L);
//
//	lint rem = N - abs(X / D) - abs(Y / D);
//	if ((rem & 1) || rem < 0) cret(0.0L);
//
//	vector<long double> fact(1010);
//	fact[0] = fact[1] = 1.0L;
//	for (int i = 2; i < 1010; i++) fact[i] = i * fact[i - 1];
//	DMP(fact);
//
//	long double ans = 0.0L;
//	for (int i = 0; i <= rem; i += 2) ans += fact[N] / (fact[abs(X / D) + i / 2] * fact[i / 2] * fact[abs(Y / D) + (rem - i) / 2] * fact[(rem - i) / 2]);
//	for (int i = 0; i < N; i++) ans /= 4.0L;
//
//	cout << ans << "\n";
//
//	return 0;
//}