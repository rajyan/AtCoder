//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
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
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<int>> edges(N);
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		a--, b--;
//		edges[a].emplace_back(b);
//	}
//
//	auto bfs = [&](int st) {
//		
//		// stからの最短経路 bfs, stが出てきたらloopにメモ
//		vector<int> dist(N, INF), prev(N, -1), loop;
//		dist[st] = 0;
//		queue<int> que;
//		que.emplace(st);
//		while (!que.empty()) {
//			int now = que.front(); que.pop();
//			for (const auto &e : edges[now]) {
//				if (e == st) loop.emplace_back(now);
//				if (dist[e] != INF) continue;
//				prev[e] = now;
//				dist[e] = dist[now] + 1;
//				que.emplace(e);
//			}
//		}
//
//		// dist[loopの要素] が最短の時のインデックスを求め、prevから経路復元
//		vector<int> res;
//		int cyc_sz = INF, min_e = -1;
//		for (const auto &e : loop) if(chmin(cyc_sz, dist[e])) min_e = e;
//		if (min_e == -1) res =  vector<int>(N + 1);
//		else {
//			res.emplace_back(min_e);
//			while (dist[min_e] > 0) res.emplace_back(min_e = prev[min_e]);
//		}
//
//		return res;
//
//	};
//
//	vector<int> ans(N + 1);
//	for (int st = 0; st < N; st++) {
//		auto tmp = bfs(st);
//		if (ans.size() > tmp.size()) ans = tmp;
//	}
//
//	if (ans.size() == N + 1) cout << -1 << "\n";
//	else {
//		cout << ans.size() << "\n";
//		for (const auto &e : ans) cout << e + 1 << "\n";
//	}
//
//	return 0;
//}