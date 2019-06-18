//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//
//using namespace std;
//typedef long long lint;
//typedef pair<int, int> points;
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
////2街間の距離を求める。上下左右のワープと普通の距離とで最小のものを返す
//int calc_dist(points town1, points town2, int Hieght, int Width) {
//
//	vector<int> dist(3);
//
//	//左右ワープ
//	dist[0] = Width - abs(town1.first - town2.first) + abs(town1.second - town2.second);
//	//上下ワープ
//	dist[1] = Hieght - abs(town1.second - town2.second) + abs(town1.first - town2.first);
//	//ワープなし
//	dist[2] = abs(town1.second - town2.second) + abs(town1.first - town2.first);
//
//	return *min_element(dist.begin(), dist.end());
//}
//
//int main() {
//
//	cin.tie(0);
//
//	//入力読み込み
//	int N, Height, Width;
//	cin >> N >> Height >> Width;
//
//	vector<points> towns(N);
//	FOR(i, 0, N) cin >> towns[i].first >> towns[i].second;
//
//	//2点i,jの距離をdistで保存
//	vector<pair<int, points>> dist;
//
//	//distの初期化
//	FOR(i, 0, N)FOR(j, 0, N) {
//
//		if (i < j) dist.emplace_back(make_pair(calc_dist(towns[i], towns[j], Height, Width), make_pair(i, j)));
//	}
//	sort(dist.begin(), dist.end());
//
//	//答えの初期化、intで十分だけど一応lint
//	lint ans = 0;
//
//	//UnionFind木を作る
//	UnionFind uf(N);
//
//	for(auto &elem: dist){
//		//コスト最小の距離の2つの街が同じ木か（閉路にならないかを確認）
//		if (!uf.is_same(elem.second.first, elem.second.second)) {
//
//			//かかった距離を足す
//			ans += elem.first;
//			//繋いだ街を同じ木に入れる
//			uf.unify(elem.second.first, elem.second.second);
//		}
//	}
//
//	cout << ans;
//
//	return 0;
//}