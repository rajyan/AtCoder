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
//	int u, v, len, rt0 = INF, rt1 = INF;
//	queue<pair<int, int>> horyu;
//	for (int i = 0; i < N - 1; i++) {
//		cin >> u >> v >> len;
//		if (len % 2 == 0) {
//			if (rt0 == INF) rt0 = u - 1;
//			UF.unify(u - 1, v - 1);
//		}
//		else horyu.push({ u, v });
//	}
//
//	while (!horyu.empty()) {
//		u = horyu.front().first;
//		v = horyu.front().second;
//		horyu.pop();
//
//		if (UF.root(u - 1) == UF.root(rt0)) {
//			if (rt1 == INF) rt1 = v - 1;
//			else UF.unify(rt1, v - 1);
//		}
//		else if (UF.root(v - 1) == UF.root(rt0)) {
//			if (rt1 == INF) rt1 = u - 1;
//			else UF.unify(rt1, u - 1);
//		}
//		else if (UF.root(u - 1) == UF.root(rt1)) UF.unify(rt0, v - 1);
//		else if (UF.root(v - 1) == UF.root(rt1)) UF.unify(rt0, u - 1);
//		else if (rt0 == INF && rt1 == INF) {
//			rt0 = u - 1, rt1 = v - 1;
//			horyu.push({ u, v });
//		}
//		else horyu.push({ u, v });
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (UF.is_same(i, rt0)) cout << '0' << "\n";
//		else cout << '1' << "\n";
//	}
//
//	return 0;
//}
