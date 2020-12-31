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
//template <class T>
//ostream &operator<<(ostream &os, const set<T> &st) {
//	for (const auto &e : st) os << e << " ";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
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
//public:
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
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
//	int N;
//	cin >> N;
//
//	map<int, vector<int>> X, Y;
//	vector<pair<int, int>> XY(N);
//	for (int i = 0; i < N; i++) {
//		int x, y;
//		cin >> x >> y;
//		X[x].emplace_back(i);
//		Y[y].emplace_back(i);
//		XY[i] = { x,y };
//	}
//
//	UnionFind uf(N);
//	for (const auto &e : X) {
//		for (int i = 0; i + 1 < e.second.size(); i++) {
//			int u = e.second[i];
//			int v = e.second[i + 1];
//			uf.unify(u, v);
//		}
//	}
//	for (const auto &e : Y) {
//		for (int i = 0; i + 1 < e.second.size(); i++) {
//			int u = e.second[i];
//			int v = e.second[i + 1];
//			uf.unify(u, v);
//		}
//	}
//
//	map<int, pair<set<int>, set<int>>> mp;
//	for (int i = 0; i < N; i++) {
//		mp[uf.root(i)].first.emplace(XY[i].first);
//		mp[uf.root(i)].second.emplace(XY[i].second);
//	}
//
//	lint ans = -N;
//	for (const auto &e : mp) ans += e.second.first.size() * e.second.second.size();
//
//	cout << ans << "\n";
//
//	return 0;
//}