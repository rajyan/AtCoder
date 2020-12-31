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
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//template<class T>
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	map<int, int> mp;
//	for (int i = 0; i < N; i++) {
//		int d;
//		cin >> d;
//		mp[d]++;
//	}
//
//	if (any_of(mp.begin(), mp.end(), [&](auto &m) { return m.second > 2; })) cout << 0 << "\n";
//	else {
//
//		vector<int> D{ 0 }, one;
//		for (const auto &e : mp) {
//			if (e.second == 2) {
//				D.emplace_back(e.first);
//				D.emplace_back(24 - e.first);
//			}
//			else one.emplace_back(e.first);
//		}
//
//		int ans = 0;
//		int bmax = (int)one.size();
//		for (int bit = 0; bit < (1 << bmax); bit++) {
//
//			vector<int> tmp = D;
//			for (int i = 0; i < bmax; i++) {
//				if ((1 << i) & bit) tmp.emplace_back(one[i]);
//				else tmp.emplace_back(24 - one[i]);
//			}
//
//			int s = INF;
//			DMP(tmp);
//			for (int i = 0; i <= N; i++) {
//				for (int j = i + 1; j <= N; j++) {
//					chmin(s, min(abs(tmp[i] - tmp[j]), abs(24 - abs(tmp[i] - tmp[j]))));
//				}
//			}
//			chmax(ans, s);
//		}
//
//		cout << ans << "\n";
//	}
//
//
//
//	return 0;
//}