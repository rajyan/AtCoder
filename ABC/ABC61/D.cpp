//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007; 
//
//using namespace std;
//typedef long long lint;
//
//template<class T = lint>
//struct Edge {
//	int from, to;
//	T cost;
//	Edge() {}
//	Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
//};
//
//template<class T = lint>
//vector<T> Bellman_Ford(vector<Edge<T>> &edges, int V, int st) {
//	const T INF = numeric_limits<T>::max();
//	vector<T> dist(V, INF);
//	dist[st] = 0;
//	for (int i = 0; i < V - 1; i++) {
//		for (const auto &ele : edges) {
//			if (dist[ele.from] == INF) continue;
//			dist[ele.to] = min(dist[ele.to], dist[ele.from] + ele.cost);
//		}
//	}
//	for (const auto &ele : edges) { // finding negative loop
//		if (dist[ele.from] == INF) continue;
//		if (dist[ele.from] == -INF) dist[ele.to] = -INF; // src is nloop -> dst is nloop
//		if (dist[ele.to] > dist[ele.from] + ele.cost) dist[ele.to] = -INF; // chmin is possible -> nloop
//	}
//	return dist;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<Edge<lint>> edge(M);
//	for (int i = 0; i < M; i++) cin >> edge[i].from >> edge[i].to >> edge[i].cost;
//	for (auto &&elem : edge) {
//		elem.from--;
//		elem.to--;
//		elem.cost *= -1;
//	}
//
//	vector<lint> ans = Bellman_Ford<lint>(edge, N, 0);
//	
//	if(ans[N - 1] == -numeric_limits<lint>::max()) cout << "inf";
//	else cout << -ans[N - 1];
//
//	return 0;
//}