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
//	bool unify(int x, int y) {
//		x = root(x); y = root(y);
//		if (x != y) {
//			if (data[y] < data[x]) swap(x, y);
//			data[x] += data[y]; data[y] = x;
//			return true;
//		}
//		return false;
//	}
//};
//
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, Q;
//	cin >> N >> Q;
//
//	UnionFind uf(2 * N);
//	for (int i = 0; i < Q; i++) {
//		int w, x, y, z;
//		cin >> w >> x >> y >> z;
//		x--, y--;
//		if (w == 1) {
//			if (z & 1) {
//				uf.unify(x, N + y);
//				uf.unify(N + x, y);
//			}
//			else {
//				uf.unify(x, y);
//				uf.unify(N + x, N + y);
//			}
//		}
//		else {
//			if (uf.is_same(x, y)) cout << "YES" << "\n";
//			else cout << "NO" << "\n";
//		}
//	}
//
//	return 0;
//}