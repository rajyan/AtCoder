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
//#include <bitset>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
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
//vector<int> dist(int st, vector<vector<int>> &tree) {
//
//	const int sz = (int)tree.size();
//	vector<int> dist(sz, -1);
//
//	queue<int> que;
//	que.emplace(st);
//	dist[st] = 0;
//	while (!que.empty()) {
//
//		auto now = que.front();
//		que.pop();
//
//		for (const auto &e : tree[now]) {
//			if (dist[e] == -1) {
//				dist[e] = dist[now] + 1;
//				que.emplace(e);
//			}
//		}
//
//	};
//
//	return dist;
//
//};
//
//int diameter(vector<vector<int>> &tree) {
//	auto d1 = dist(0, tree);
//	int d1_max = max_element(d1.begin(), d1.end()) - d1.begin();
//	DMP(d1);
//	auto d2 = dist(d1_max, tree);
//	return *max_element(d2.begin(), d2.end());
//};
//
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
//	vector<vector<int>> tree(N);
//	for (int i = 0; i < N - 1; i++) {
//		int x, y;
//		cin >> x >> y;
//		x--, y--;
//		tree[x].emplace_back(y);
//		tree[y].emplace_back(x);
//	}
//
//	int dia = diameter(tree);
//	if ((dia - 1) % 3 == 0) cout << "Second" << "\n";
//	else cout << "First" << "\n";;
//
//	return 0;
//}