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
//	int Q;
//	cin >> Q;
//	for (int i = 0; i < Q; i++) {
//
//		string num;
//		cin >> num;
//
//		string ans;
//		int now = 0, prev = 0;
//		for (const auto &e : num) {
//
//			now = e - '0';
//			if (now > prev) {
//				ans += string(now - prev, '(');
//			}
//			else {
//				ans += string(prev - now, ')');
//			}
//
//			ans += now + '0';
//			prev = now;
//
//		}
//		ans += string(now, ')');
//
//		cout << "Case #" << i + 1 << ": ";
//		cout << ans << "\n";
//
//	}
//
//	return 0;
//}