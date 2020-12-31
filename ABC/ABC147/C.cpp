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
//template <class T>
//ostream &operator<<(ostream &os, const set<T> &st) {
//	for (const auto &e : st) os << e << " ";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
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
//int bit_cnt(long bits){
//	bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
//	bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
//	bits = (bits & 0x0f0f0f0f) + (bits >> 4 & 0x0f0f0f0f);
//	bits = (bits & 0x00ff00ff) + (bits >> 8 & 0x00ff00ff);
//	return (bits & 0x0000ffff) + (bits >> 16 & 0x0000ffff);
//}
//
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<vector<pair<int, int>>> xy(N);
//	for (int i = 0; i < N; i++) {
//		int a;
//		cin >> a;
//		xy[i].resize(a);
//		for (int j = 0; j < a; j++) {
//			int x, y;
//			cin >> x >> y;
//			x--;
//			xy[i][j] = { x,y };
//		}
//	}
//
//	DMP(xy);
//
//	int ans = 0;
//	for (int bit = 0b0; bit < (1 << N); bit++) {
//
//		bool ok = true;
//		for (int i = 0; i < N; i++) {
//
//			if (bit & (1 << i)) {
//				for (int j = 0; j < xy[i].size(); j++) {
//
//					DMP(bit, (1 << xy[i][j].first), xy[i][j].second);
//					if ((bit & (1 << xy[i][j].first)) != (xy[i][j].second << xy[i][j].first)) {
//						ok = false;
//						break;
//					}
//
//				}
//			}
//			if (!ok) break;
//
//		}
//		if (ok) chmax(ans, bit_cnt(bit));
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}