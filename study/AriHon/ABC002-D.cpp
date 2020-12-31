//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
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
//class UnionFind {
//private:
//	vector<int> item;
//	int root(int r) { return item[r] < 0 ? r : item[r] = root(item[r]); }
//
//public:
//	UnionFind(int size) : item(size, -1) { }
//	bool is_same(int r, int c) { return root(r) == root(c); }
//	int size(int r) { return -item[root(r)]; }
//
//	void unify(int r, int c) {
//		r = root(r); c = root(c);
//		if (r != c) {
//			if (item[c] < item[r]) swap(r, c);
//			item[r] += item[c]; item[c] = r;
//		}
//	}
//};
//
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<int>> d(N, vector<int>(N, INF));
//	for (int i = 0; i < N; i++) d[i][i] = 0;
//
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		a--, b--;
//		d[a][b] = 1;
//	}
//
//	int ans = 0;
//	for (int bit = 0b0; bit < (1 << N); bit++) {
//
//		bool able = true;
//		for (int a = 0; a < N; a++) {
//			for (int b = a; b < N; b++) {
//				if ((bit & (1 << a)) && (bit & (1 << b))) {
//					if (d[a][b] == INF) able = false;
//				}
//			}
//		}
//		
//		if (able) {
//			int member = 0;
//			for (int i = 0; i < N; i++) member += !!(bit & (1 << i));
//			ans = max(ans, member);
//		}
//
//	}
//
//	cout << ans << "\n";
//
//
//	return 0;
//}