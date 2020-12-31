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
//	int R, G, B;
//	cin >> R >> G >> B;
//
//	auto calc_cost = [](const int &num, const int &center, const int &r) {
//
//		// O(1) にできるが余裕があるので
//		int res = 0;
//		for (int i = r; i > r - num; i--) {
//			res += abs(i - center);
//		}
//
//		return res;
//	};
//
//	auto min_cost = [](const int &num) {
//		// 0 1 1 2 2 ... の和。偶奇で場合分け
//		return ((num - 1) / 2 + 1) * ((num - 1) / 2) + ((num + 1) % 2) * num / 2;
//	};
//
//	DMP(min_cost(R), min_cost(G), min_cost(B));
//
//	int ans = INF;
//	// Rの右端の座標で全探索
//	for (int x = -300; x <= 300; x++) {
//
//		int sum = 0;
//		
//		// R
//		if (-100 + R / 2 <= x) sum += min_cost(R);
//		else sum += calc_cost(R, -100, x);
//
//		// G
//		if (x < 0 - G / 2 && 0 + G / 2 <= x + G) sum += min_cost(G);
//		else sum += calc_cost(G, 0, x + G);
//
//		// B
//		if (x + G < 100 - B / 2) sum += min_cost(B);
//		else sum += calc_cost(B, 100, x + G + B);
//
//		ans = min(ans, sum);
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}