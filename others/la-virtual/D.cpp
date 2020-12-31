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
//	auto sz = [](int lev) { return (1LL << (lev + 2)) - 3; };
//	auto pt = [](int lev) { return (1LL << (lev + 1)) - 1; };
//
//	auto dfs = [&](auto &&f, int lev, lint i) -> lint {
//		
//		if (lev == 0) return i >= 1 ? 1 : 0;
//		else if (i <= sz(lev - 1) + 1) return f(f, lev - 1, i - 1);
//		else return pt(lev - 1) + 1 + f(f, lev - 1, i - (sz(lev - 1) + 2));
//
//	};
//
//	lint N, X;
//	cin >> N >> X;
//
//	cout << dfs(dfs, N, X) << "\n";
//
//	return 0;
//}