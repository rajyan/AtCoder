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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int R, C, K;
//	cin >> R >> C >> K;
//
//	int N;
//	cin >> N;
//
//	vector<lint> row(R), col(C);
//	map<int, vector<int>> candy;
//	for (int i = 0; i < N; i++) {
//		int r, c;
//		cin >> r >> c;
//		r--, c--;
//		row[r]++;
//		col[c]++;
//		candy[r].emplace_back(c);
//	}
//
//	auto sort_col = col;
//	sort(sort_col.begin(), sort_col.end());
//
//	lint ans = 0;
//	for (int i = 0; i < R; i++) {
//
//		lint col_cnt1 = upper_bound(sort_col.begin(), sort_col.end(), K - row[i]) - lower_bound(sort_col.begin(), sort_col.end(), K - row[i]);
//		if (col_cnt1 != 0) {
//			ans += col_cnt1;
//			for (const auto &c : candy[i]) {
//				if (col[c] == K - row[i]) ans--;
//			}
//		}
//
//		lint col_cnt2 = upper_bound(sort_col.begin(), sort_col.end(), K - row[i] + 1) - lower_bound(sort_col.begin(), sort_col.end(), K - row[i] + 1);
//		if (col_cnt2 != 0) {
//			for (const auto &c : candy[i]) {
//				if (col[c] == K - row[i] + 1) ans++;
//			}
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
