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
//	int N, M;
//	cin >> N >> M;
//
//	struct edge { 
//		int from, to; 
//		edge(int from = 0, int to = 0) : from(from), to(to) {}
//	};
//	vector<edge> memo(M);
//	for (int i = 0; i < M; i++) {
//		int l, r;
//		cin >> l >> r;
//		memo[i] = { l,r };
//	}
//	sort(memo.begin(), memo.end(), [](edge l, edge r) {
//		return (l.from < r.from) || (l.from == r.from) && (l.to < r.to); 
//	});
//
//	int ans = 1, tmp = INF;
//	for (int i = 0; i < M; i++) {
//		if (tmp <= memo[i].from) {
//			ans++;
//			tmp = memo[i].to;
//		}
//		else chmin(tmp, memo[i].to);
//		DMP(tmp);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}