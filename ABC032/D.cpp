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
//struct item {
//	lint v, w;
//	item(lint v = 0, lint w = 0) :v(v), w(w) {}
//	friend ostream &operator << (ostream &os, const item &d) { return os << d.v << " " << d.w << "\n"; };
//};
//
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//template<class T>
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, W;
//	cin >> N >> W;
//
//
//	vector<item> items(N);
//	for (int i = 0; i < N; i++) cin >> items[i].v >> items[i].w;
//
//	// 半分全列挙
//	if (N <= 30) {
//
//		vector<item> f_halftmp{ {0,0} }, f_half{ {0,0} };
//		for (int i = 0; i < N / 2; i++) {
//			int sz = (int)f_halftmp.size();
//			for (int j = 0; j < sz; j++) {
//				if (f_halftmp[j].w + items[i].w <= W) {
//					f_halftmp.emplace_back(f_halftmp[j].v + items[i].v, f_halftmp[j].w + items[i].w);
//				}
//			}
//		}
//		sort(f_halftmp.begin(), f_halftmp.end(), [](item l, item r) {return l.w < r.w || l.w == r.w && l.v > r.v; });
//
//		for (int i = 1; i < (int)f_halftmp.size(); i++) {
//			if (f_half.back().v < f_halftmp[i].v) f_half.emplace_back(f_halftmp[i]);
//		}
//
//		vector<item> s_half{ {0,0} };
//		for (int i = N / 2; i < N; i++) {
//			int sz = (int)s_half.size();
//			for (int j = 0; j < sz; j++) {
//				if (s_half[j].w + items[i].w <= W) {
//					s_half.emplace_back(s_half[j].v + items[i].v, s_half[j].w + items[i].w);
//				}
//			}
//		}
//		DMP(f_half, s_half);
//
//		lint ans = 0;
//		for (int i = 0; i < (int)s_half.size(); i++) {
//
//			auto it = upper_bound(f_half.begin(), f_half.end(), item(0, W - s_half[i].w), [](item l, item r) {return l.w < r.w; });
//			DMP(it - f_half.begin());
//
//			if (it != f_half.begin()) chmax(ans, (it - 1)->v + s_half[i].v);
//			else chmax(ans, s_half[i].v);
//
//		}
//
//		cout << ans << "\n";
//
//	}
//
//	// dp[i][w]:= i番目まで見たときに、重さw以下の価値の最大値
//	else if (max_element(items.begin(), items.end(), [](item l, item r) {return l.w < r.w; })->w <= 3000) {
//
//		auto dp = make_vec(2, N * 3000, lint(0));
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N * 3000; j++) {
//				dp[(i + 1) & 1][j] = dp[i & 1][j];
//				if (j - items[i].w >= 0) chmax(dp[(i + 1) & 1][j], dp[i & 1][j - items[i].w] + items[i].v);
//			}
//		}
//
//		cout << dp[N & 1][W] << "\n";
//
//	}
//
//	// dp[i][v]:= i番目までみたときに、価値vとできる重さの最小値
//	else {
//
//		auto dp = make_vec(2, N * 3000, LINF);
//		dp[0][0] = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N * 3000; j++) {
//				dp[(i + 1) & 1][j] = dp[i & 1][j];
//				if (j - items[i].v >= 0) chmin(dp[(i + 1) & 1][j], dp[i & 1][j - items[i].v] + items[i].w);
//			}
//		}
//
//		for (int j = N * 3000 - 1; j >= 0; j--) {
//			if (dp[N & 1][j] <= W) {
//				cout << j << "\n";
//				break;
//			}
//		}
//
//	}
//
//	return 0;
//}
