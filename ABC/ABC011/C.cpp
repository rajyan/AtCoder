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
//	int N;
//	cin >> N;
//
//	vector<int> ng(3);
//	for (int i = 0; i < 3; i++) cin >> ng[i];
//
//	vector<int> memo(N + 1, -1);
//	auto dfs = [&](auto &&f, int n, int cnt) -> bool {
//		
//		if (n <= 0) return true;
//		if (memo[n] != -1) return memo[n];
//		if (cnt >= 100 || any_of(ng.begin(), ng.end(), [&](auto &ng) {return ng == n; })) return false;
//
//		DMP(n);
//
//		bool res = false;
//		for (int i = 3; i >= 1; i--) res |= f(f, n - i, cnt + 1);
//
//		memo[n] = res;
//		return memo[n];
//
//	};
//
//	if (dfs(dfs, N, 0)) cout << "YES" << "\n";
//	else cout << "NO" << "\n";
//
//	return 0;
//}