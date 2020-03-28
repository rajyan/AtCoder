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
//	struct road {
//		int a, b, y;
//		bool operator>(const road& r) const { return y > r.y; }
//	};
//	
//	vector<road> R(M);
//	for (int i = 0; i < M; i++) {
//		int a, b, y;
//		cin >> a >> b >> y;
//		a--, b--;
//		R[i] = { a,b,y };
//	}
//	sort(R.begin(), R.end(), greater<road>());
//
//	int Q;
//	cin >> Q;
//	vector<road> query(Q);
//	for (int i = 0; i < Q; i++) {
//		int a, y;
//		cin >> a >> y;
//		a--;
//		query[i] = { a,i,y }; // use b as index holder
//	}
//	sort(query.begin(), query.end(), greater<road>());
//
//	vector<int> ans(Q);
//	int cnt = 0;
//	UnionFind uf(N);
//	for (int i = 0; i < Q; i++) {
//		while (cnt < M && R[cnt].y > query[i].y) {
//			uf.unify(R[cnt].a, R[cnt].b);
//			cnt++;
//		}
//		ans[query[i].b] = uf.size(query[i].a);
//	}
//
//	for (const auto &e : ans) cout << e << "\n";
//
//	return 0;
//}