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
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	struct data { lint x, y, h; };
//	vector<data> d(N);
//	for (int i = 0; i < N; i++) cin >> d[i].x >> d[i].y >> d[i].h;
//
//	for (int x = 0; x <= 100; x++) {
//		for (int y = 0; y <= 100; y++) {
//			
//			data md = *min_element(d.begin(), d.end(),
//				[&](data &l, data &r) {
//				return l.h + abs(l.x - x) + abs(l.y - y) < r.h + abs(r.x - x) + abs(r.y - y);
//			});
//			lint ref = md.h + abs(md.x - x) + abs(md.y - y);
//
//			if (all_of(d.begin(), d.end(), 
//				[&](data &d) { return max(ref - abs(d.x - x) - abs(d.y - y), 0LL) == d.h; })) {
//
//				cout << x << " " << y << " " << ref << "\n";
//				return 0;
//			}
//
//		}
//	}
//
//	return -1;
//}