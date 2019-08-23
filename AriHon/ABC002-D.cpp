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
//	vector<int> data;
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
//
//public:
//	UnionFind(int size) : data(size, -1) { }
//	bool is_same(int x, int y) { return root(x) == root(y); }
//	int size(int x) { return -data[root(x)]; }
//
//	void unify(int x, int y) {
//		x = root(x); y = root(y);
//		if (x != y) {
//			if (data[y] < data[x]) swap(x, y);
//			data[x] += data[y]; data[y] = x;
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