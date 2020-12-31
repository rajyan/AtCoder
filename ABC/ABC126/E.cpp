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
//
//public:
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
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
//	int N, M;
//	cin >> N >> M;
//
//	UnionFind UF(N);
//	int X, Y, Z;
//	for (int i = 0; i < M; i++) {
//		cin >> X >> Y >> Z;
//		UF.unify(X - 1, Y - 1);
//	}
//
//	int ans = 0;
//	for (size_t i = 0; i < N; i++) ans += UF.root(i) == i;
//
//	cout << ans << "\n";
//
//	return 0;
//}
