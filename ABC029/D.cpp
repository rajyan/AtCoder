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
//lint cnt_one(const string &s) {
//
//	lint one = 0, asta = 0;
//	for (const auto &c : s) {
//		if (c == '1') one++;
//		else if (c == '*') asta++;
//	}
//
//	for (int i = 0; i < asta; i++) one *= 9;
//
//	return one;
//
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string N;
//	cin >> N;
//
//	vector<string> comp;
//
//	auto make_str = [&](auto &&f, string N, string now, bool smaller) -> void {
//
//		if (now.size() == N.size()) {
//			comp.emplace_back(now);
//			return;
//		}
//
//		if (smaller) {
//			f(f, N, now + '1', smaller);
//			f(f, N, now + '*', smaller);
//		}
//		else {
//
//			for (int i = 0; i < N[now.size()] - '0'; i++) {
//				f(f, N, now + to_string(i), true);
//			}
//
//			f(f, N, now + N[now.size()], false);
//
//		}
//		
//		return;
//
//	};
//
//	make_str(make_str, N, string(), false);
//
//	DMP(comp);
//
//	lint ans = 0;
//	for (const auto &e : comp) ans += cnt_one(e);
//
//	cout << ans << "\n";
//
//	return 0;
//}