//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	
//	vector<pair<int, int>> edge;
//	edge.reserve(N*(N-1)/2);
//
//	if (N & 1) {
//
//		int node = N, except = 0;
//		while (except < N) {
//			for (int j = 1; j < node; j++) {
//				if (j != except) edge.emplace_back(j, node);
//			}
//			node--;
//			except++;
//		}
//
//	}
//	else {
//
//		for (int i = 1; i < N / 2; i++) edge.emplace_back(i, i + 1);
//		edge.emplace_back(N / 2, N);
//		for (int i = N; i > N / 2 + 1; i--) edge.emplace_back(i, i - 1);
//		edge.emplace_back(N / 2 + 1, 1);
//
//		if(N != 4) for (int i = 0; i < N; i++) edge.emplace_back(edge[i].first, N + 1 - edge[i].second);
//
//	}
//
//	cout << edge.size() << "\n";
//	for (const auto &e : edge) cout << e.first << " " << e.second << "\n";
//
//	//// dbg
//	//vector<int> dbg(N);
//	//for (const auto &e : edge) {
//	//	dbg[e.first-1] += e.second;
//	//	dbg[e.second-1] += e.first;
//	//}
//	//DMP(dbg);
//	//assert(all_of(dbg.begin(), dbg.end(), [&](int d) {return d == dbg[0]; }));
//
//	return 0;
//}