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
//
//	struct mem {
//		int beg, end, ind;
//		mem(int b = 0, int e = 0, int i = 0): beg(b), end(e), ind(i) {}
//	};
//
//	for (int q = 0; q < Q; q++) {
//
//		int N;
//		cin >> N;
//
//		vector<mem> d(N);
//		string ans(N, '*');
//		for (int i = 0; i < N; i++) {
//
//			int b, e;
//			cin >> b >> e;
//			DMP(b, e);
//			d[i] = { b,e,i };
//
//		}
//		sort(d.begin(), d.end(), [&](auto l, auto r) { return l.beg < r.beg; });
//
//		int cam = 0, jam = 0;
//		for (int i = 0; i < N; i++) {
//
//			if (cam <= d[i].beg) {
//				cam = d[i].end;
//				ans[d[i].ind] = 'C';
//			}
//			else if (jam <= d[i].beg) {
//				jam = d[i].end;
//				ans[d[i].ind] = 'J';
//			}
//			else {
//				ans = "IMPOSSIBLE";
//				break;
//			}
//
//		}
//
//		cout << "Case #" << q + 1 << ": " << ans << endl;
//
//	}
//
//	return 0;
//}