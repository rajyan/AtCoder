//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
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
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//struct dat {
//	int l, r, cnt;
//	dat(int l, int r, int cnt) :l(l), r(r), cnt(cnt) {}
//};
//
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	int h, w;
//	cin >> h >> w;
//
//	vector<dat> d;
//	d.emplace_back(0, w - 1, 0);
//	int pa = 0, pb = 0;
//	for (int i = 0; i < h; i++) {
//		int a, b;
//		cin >> a >> b;
//		a--, b--;
//
//		int ans = INF;
//		for (int i = 0; i < d.size(); i++) {
//			auto& [l, r, cnt] = d[i];
//			cnt++;
//			if (l < a && b < r) {
//				d.emplace_back(b + 1, r, cnt);
//				r = a - 1;
//			}
//			else if (l < a && a < r) {
//				r = a - 1;
//			}
//			else if (l < b && b < r) {
//				l = b + 1;
//			}
//			if (l < pa && pb < r) {
//				d.emplace_back(pa, pb, cnt + 1);
//				d.emplace_back(pb + 1, r, cnt);
//				r = pa - 1;
//			}
//			else if (l < pa && pa < r) {
//				d.emplace_back(pa, r, cnt + 1);
//				r = pa - 1;
//			}
//			else if (l < pb && pb < r) {
//				d.emplace_back(l, pb, cnt + 1);
//				l = pb + 1;
//			}
//			if (l < r) chmin(ans, cnt);
//		}
//		cout << ans << "\n";
//	}
//
//	return 0;
//}
