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
//using lint = long long;
//
//class UnionFind {
//private:
//	vector<int> data;
//public:
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
//
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
//	int N;
//	cin >> N;
//
//	int x, y;
//	vector<pair<int, int>> X(N), Y(N);
//	for (int i = 0; i < N; i++) {
//		cin >> x >> y;
//		X[i] = { x, i };
//		Y[i] = { y, i };
//	}
//	sort(X.begin(), X.end());
//	sort(Y.begin(), Y.end());
//
//	UnionFind uf(N);
//	for (int i = 1; i < N; i++) {
//		if (X[i].first == X[i - 1].first) uf.unify(X[i].second, X[i - 1].second);
//		if (Y[i].first == Y[i - 1].first) uf.unify(Y[i].second, Y[i - 1].second);
//	}
//
//	map<int, pair<vector<int>, vector<int>>> mp;
//	for (int i = 0; i < N; i++) {
//		mp[uf.root(X[i].second)].first.emplace_back(X[i].first);
//		mp[uf.root(Y[i].second)].second.emplace_back(Y[i].first);
//	}
//
//	lint sum = 0;
//	for (auto &e : mp) {
//
//		sort(e.second.first.begin(), e.second.first.end());
//		e.second.first.erase(unique(e.second.first.begin(), e.second.first.end()), e.second.first.end());
//		sort(e.second.second.begin(), e.second.second.end());
//		e.second.second.erase(unique(e.second.second.begin(), e.second.second.end()), e.second.second.end());
//
//		sum += 1LL * e.second.first.size()*e.second.second.size();
//
//	}
//
//	cout << sum - N << "\n";
//
//	return 0;
//}