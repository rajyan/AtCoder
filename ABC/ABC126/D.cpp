//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//typedef long long lint;
//
//class UnionFind {
//private:
//	vector<int> data;
//public:
//	int root(int x) { return (x == INF || data[x] < 0) ? x : data[x] = root(data[x]); }
//
//	UnionFind(int size) : data(size, -1) { }
//	bool is_same(int x, int y) { return root(x) == root(y); }
//	lint size(int x) { return -data[root(x)]; }
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
//	UnionFind UF(N);
//	int u, v, len, st0 = INF, st1 = INF;
//	queue<pair<int, int>> horyu;
//	for (int i = 0; i < N - 1; i++) {
//		cin >> u >> v >> len;
//		if (len % 2 == 0) {
//			if (st0 == INF) st0 = u - 1;
//			UF.unify(u - 1, v - 1);
//		}
//		else {
//			if (UF.root(u - 1) == UF.root(st0)) {
//				if (st1 == INF) st1 = v - 1;
//				else UF.unify(st1, v - 1);
//			}
//			else if (UF.root(v - 1) == UF.root(st0)) {
//				if (st1 == INF) st1 = u - 1;
//				else UF.unify(st1, u - 1);
//			}
//			else if (UF.root(u - 1) == UF.root(st1)) {
//				if (st0 == INF) st0 = v - 1;
//				else UF.unify(st0, v - 1);
//			}
//			else if (UF.root(v - 1) == UF.root(st1)) {
//				if (st0 == INF) st0 = u - 1;
//				else UF.unify(st0, u - 1);
//			}
//			else if (st0 == INF && st1 == INF) {
//				st0 = u - 1, st1 = v - 1;
//				horyu.push({ u, v });
//			}
//			else horyu.push({ u, v });
//		}
//	}
//
//	while (!horyu.empty()) {
//		u = horyu.front().first;
//		v = horyu.front().second;
//		horyu.pop();
//
//		if (UF.root(u - 1) == UF.root(st0)) {
//			if (st1 == INF) st1 = v - 1;
//			else UF.unify(st1, v - 1);
//		}
//		else if (UF.root(v - 1) == UF.root(st0)) {
//			if (st1 == INF) st1 = u - 1;
//			else UF.unify(st1, u - 1);
//		}
//		else if (UF.root(u - 1) == UF.root(st1)) {
//			if (st0 == INF) st0 = v - 1;
//			else UF.unify(st0, v - 1);
//		}
//		else if (UF.root(v - 1) == UF.root(st1)) {
//			if (st0 == INF) st0 = u - 1;
//			else UF.unify(st0, u - 1);
//		}
//		else if (st0 == INF && st1 == INF) {
//			st0 = u - 1, st1 = v - 1;
//			horyu.push({ u, v });
//		}
//		else horyu.push({ u, v });
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (UF.root(i) == UF.root(st0)) cout << '0' << "\n";
//		else cout << '1' << "\n";
//	}
//
//	return 0;
//}
