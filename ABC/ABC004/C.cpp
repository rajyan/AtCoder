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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : "");
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
//	vector<int> card(6);
//	iota(card.begin(), card.end(), 1);
//	DMP(card);
//
//	for (int i = 0; i < 5; i++) swap(card[i], card[i + 1]);
//	DMP(card);
//
//	int N;
//	cin >> N;
//
//	vector<int> ans(6);
//	iota(ans.begin(), ans.end(), N / 5 % 6 + 1);
//	for (int i = 0; i < 6; i++) {
//		ans[i] %= 6;
//		if (ans[i] == 0) ans[i] = 6;
//	}
//	for (int i = 0; i < N % 5; i++) swap(ans[i], ans[i + 1]);
//
//	cout << ans << "\n";
//
//	return 0;
//}