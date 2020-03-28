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
//template<class T = lint>
//struct Edge {
//	int from, to;
//	T cost;
//	Edge() {}
//	Edge(int from, int to, T cost = 1) : from(from), to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//	friend ostream& operator<<(ostream& os, const Edge<T> &e) { return os << e.from << " " << e.to << " " << e.cost; }
//};
//
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int L;
//	cin >> L;
//
//	vector<Edge<int>> ans;
//	ans.reserve(60);
//
//	int vert = 0;
//	for (int i = 20; i >= 1; i--) {
//		if ((1 << i) & L) {
//			vert = i;
//			break;
//		}
//	}
//
//	for (int i = 0; i < vert; i++) {
//		ans.emplace_back(i + 1, i + 2, 0);
//		ans.emplace_back(i + 1, i + 2, (1 << i));
//	}
//
//	int cost = (1 << vert);
//	for (int i = vert - 1; i >= 0; i--) {
//		if (L & (1 << i)) {
//			ans.emplace_back(i + 1, vert + 1, cost);
//			cost += (1 << i);
//		}
//	}
//
//	cout << vert + 1 << " " << ans.size() << "\n";
//	cout << ans << "\n";
//
//	return 0;
//}