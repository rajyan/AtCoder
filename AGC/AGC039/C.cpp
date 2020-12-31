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
//template <class T>
//ostream &operator<<(ostream &os, const set<T> &st) {
//	for (const auto &e : st) os << e << " ";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
//	return os;
//}
//
//template<class T = lint>
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost = 1) : to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M, Q;
//	cin >> N >> M >> Q;
//
//	vector<pair<int, int>> loop_edge, nonloop_edge;
//	set<int> used;
//	for (int i = 0; i < Q; i++) {
//
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (c) loop_edge.emplace_back(a, b);
//		else nonloop_edge.emplace_back(a, b);
//
//		used.emplace(a);
//		used.emplace(b);
//	}
//
//	vector<int> loop_id(N, -1);
//	vector<set<int>> loop;
//	int id = 0;
//	for (int i = 0; i < loop_edge.size(); i++) {
//		int a, b;
//		tie(a, b) = loop_edge[i];
//		if (loop_id[a] == -1 && loop_id[b] == -1) {
//			loop.emplace_back(set<int>{a, b});
//			loop_id[a] = id;
//			loop_id[b] = id;
//			id++;
//		}
//		else if (loop_id[a] == -1) {
//			loop[loop_id[b]].emplace(a);
//			loop_id[a] = loop_id[b];
//		}
//		else if (loop_id[b] == -1) {
//			loop[loop_id[a]].emplace(b);
//			loop_id[b] = loop_id[a];
//		}
//	}
//	DMP(loop);
//
//	bool exist = true;
//	for (int i = 0; i < N; i++) {
//
//	}
//
//	return 0;
//}