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
//	int D, G;
//	cin >> D >> G;
//
//	vector<pair<int, int>> prob(D);
//	for (int i = 0; i < D; i++) {
//		cin >> prob[i].first >> prob[i].second;
//		prob[i].second += (i + 1) * prob[i].first * 100;
//	}
//
//	int ans = INF;
//	for (int bit = 0b0; bit < (1 << D); bit++) {
//
//		int score = 0, num = 0;
//		vector<int> memo;
//		for (int i = 0; i < D; i++) {
//			if (bit & (1 << i)) {
//				num += prob[i].first;
//				score += prob[i].second;
//				memo.emplace_back(i);
//			}
//		}
//		if (score < G) continue;
//
//		ans = min(ans, num);
//		for (int i = 0; i < (int)memo.size(); i++) {
//			int tmp = (G - (score - prob[memo[i]].second) - 1) / (100 * (memo[i] + 1)) + 1;
//			if (0 < tmp && tmp < prob[memo[i]].second) {
//				ans = min(ans, num + tmp - prob[memo[i]].first);
//			}
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}