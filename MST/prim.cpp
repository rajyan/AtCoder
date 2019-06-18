//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//typedef pair<int, int> points;
//
//const int INF = 1 << 29;
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
//	//2点i,jの距離をdist[i][j]で保存
//	vector<vector<int>> dist(N, vector<int>(N, 0));
//
//	//distの初期化
//	FOR(i, 0, N)FOR(j, 0, N) dist[i][j] = calc_dist(towns[i], towns[j], Height, Width);
//
//	//訪れた街をvectorで保存
//	vector<int> visited(N, 0);
//
//	//訪れたことのある街から見て最小の距離の街を順に訪れていく(プリム法)
//	priority_queue<points, vector<points>, greater<points>> dist_queue;
//	pair<int, int> tmp = make_pair(0, 0);
//	dist_queue.push(tmp);
//
//	//答えの初期化、intで十分だけど一応lint
//	lint ans = 0;
//
//	//全ての街を訪れたら終了
//	while (*min_element(visited.begin(), visited.end()) == 0) {
//		
//		//優先度付きキューの先頭から順に取り出し、行き先が訪れたことのない街ならtmpにいれる
//		do{
//			tmp = dist_queue.top();
//			dist_queue.pop();
//			
//		} while (visited[tmp.second]);
//		
//		//tmpに入れた街に訪れる
//		visited[tmp.second] = 1;
//
//		//かかった距離を足す
//		ans += tmp.first;
//
//		//tmpから訪れたことない街への距離を全てキューに入れる
//		for (int i = 0; i < N; i++) if (!visited[i]) dist_queue.push(make_pair(dist[tmp.second][i], i));
//
//	}
//
//	cout << ans;
//
//	return 0;
//}