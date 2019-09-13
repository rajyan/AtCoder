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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n   " : " ");
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
//class UnionFind {
//private:
//	vector<int> data;
//
//public:
//	UnionFind(int size) : data(size, -1) { }
//	bool is_same(int x, int y) { return root(x) == root(y); }
//	int size(int x) { return -data[root(x)]; }
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
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
//	int N;
//	cin >> N;
//	
//	vector<queue<int>> A(N);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N - 1; j++) {
//			int a;
//			cin >> a;
//			a--;
//			A[i].emplace(a);
//		}
//	}
//
//	int ans = N * (N - 1) / 2;
//	for (int cnt = 0; cnt < N*(N-1)/2; cnt++) {
//
//		vector<int> used(N);
//		for (int i = 0; i < N; i++) {
//			if (!used[i] && A[A[i].front()].front() == i) {
//				used[i] = 1;
//				used[A[i].front()] = 1;
//				A[A[i].front()].pop();
//				A[i].pop();
//			}
//		}
//
//	}
//
//	if (all_of(A.begin(), A.end(), [](auto & que) {return que.empty(); })) cout << ans << "\n";
//	else cout << -1 << "\n";
//
//	return 0;
//}