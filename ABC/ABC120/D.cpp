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
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
//
//public:
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
//int main() {
//
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	lint N, M;
//	cin >> N >> M;
//	
//	vector<pair<int, int>> bridge(M);
//	for (int i = 0; i < M; i++) cin >> bridge[i].first >> bridge[i].second;
//
//	vector<lint> ans(M);
//	lint unconf = N * (N - 1) / 2, tmp;
//	UnionFind land(N);
//	for (int i = M - 1; i >= 0; i--) {
//
//		ans[i] = unconf;
//		tmp = land.size(bridge[i].first - 1) * land.size(bridge[i].second - 1);
//		land.unify(bridge[i].first - 1, bridge[i].second - 1);
//		
//		// unify‘OŒã‚Åtmp‚Ì‘å‚«‚³‚ª•Ï‰»‚µ‚Ä‚¢‚È‚©‚Á‚½‚çŠù‚É“¯ª‚Å‚ ‚é“‡‚ğ‚Â‚È‚¢‚¾‚¾‚¯‚È‚Ì‚Åˆø‚©‚È‚¢
//		unconf -= tmp == land.size(bridge[i].first - 1) * land.size(bridge[i].second - 1) ? 0 : tmp;
//
//	}
//
//	for (const auto &elem : ans) cout << elem << "\n";
//
//	return 0;
//}