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
//	vector<int> D(13);
//	for (int i = 0; i < N; i++) {
//		int d;
//		cin >> d;
//		D[d]++;
//	}
//
//	int ans = 0;
//	for (int bit = 0b0; bit < (1 << 13); bit++) {
//
//		vector<int> time{ 0 };
//		time.reserve(N);
//		for (int i = 0; i < 13; i++) {
//			for (int j = 0; j < min(D[i], 3); j++) {
//				if (!(bit & (1 << i) ^ (j & 1))) time.emplace_back(i);
//				else time.emplace_back(24 - i);
//			}
//		}
//
//		DMP(time);
//
//		int s = INF;
//		for (int i = 0; i <= N; i++) {
//			for (int j = i + 1; j <= N; j++) {
//				chmin(s, min(abs(time[i] - time[j]), 24 - abs(time[j] - time[i])));
//			}
//		}
//		chmax(ans, s);
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}