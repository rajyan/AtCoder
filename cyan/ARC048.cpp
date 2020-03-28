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
//	int N;
//	cin >> N;
//
//	struct par {
//		int id, rate, hand;
//		par(int a = 0, int b = 0, int c = 0) :id(a), rate(b), hand(c) {}
//	};
//	vector<par> P(N);
//	for (int i = 0; i < N; i++) {
//		int r, h;
//		cin >> r >> h;
//		h--;
//		P[i] = { i,r,h };
//	}
//	sort(P.begin(), P.end(), [](auto l, auto r) {
//		return l.rate > r.rate || (l.rate == r.rate) && (l.hand < r.hand);
//	});
//
//	vector<vector<int>> ans(N, vector<int>(3));
//	for (int i = 0; i < N; i++) {
//
//		auto now = P[i];
//		int n_idx = i;
//		vector<int> tmp_h(3);
//		tmp_h[P[i].hand]++;
//		while (i < N - 1 && P[i].rate == P[i + 1].rate) {
//			i++;
//			tmp_h[P[i].hand]++;
//		}
//		DMP(n_idx, i, tmp_h);
//		for (int j = n_idx; j <= i; j++) {
//			ans[P[j].id] = { N - i - 1 + tmp_h[(P[j].hand + 1) % 3], n_idx + tmp_h[(P[j].hand + 2) % 3], tmp_h[P[j].hand] - 1 };
//			DMP(ans);
//		}
//	}
//
//	for (const auto &e : ans) cout << e[0] << " " << e[1] << " " << e[2] << "\n";
//
//	return 0;
//}