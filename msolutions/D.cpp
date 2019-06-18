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
//template<class T = lint>
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	int u, v;
//	vector<int> start(N);
//	vector<vector<Edge<int>>> edges(N);
//	for (int i = 0; i < N - 1; i++) {
//		cin >> u >> v;
//		u--, v--;
//		edges[u].emplace_back(v, 0);
//		edges[v].emplace_back(u, 0);
//		start[u]++, start[v]++;
//	}
//
//	vector<int> cost(N);
//	for (int i = 0; i < N; i++) cin >> cost[i];
//	sort(cost.begin(), cost.end(), greater<int>());
//
//	int st_idx = max_element(start.begin(), start.end()) - start.begin();
//
//	vector<int> visted(N);
//	queue<int> V;
//	V.push(st_idx);
//	int now, cnt = 0;;
//	while (!V.empty()) {
//
//		now = V.front();
//		V.pop();
//		visted[now] = cost[cnt];
//		cnt++;
//
//		for (const auto &elem : edges[now]) if (!visted[elem.to]) V.push(elem.to);
//
//	}
//
//	lint sum = 0;
//	for (int i = 1; i < N; i++) sum += cost[i];
//	cout << sum << "\n";
//
//	for (const auto &e : visted) cout << e << " ";
//
//	return 0;
//}