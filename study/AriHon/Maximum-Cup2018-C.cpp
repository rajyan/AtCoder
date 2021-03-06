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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<vector<int>> edges(N);
//	for (int i = 0; i < N; i++) {
//		int a;
//		cin >> a; a--;
//		edges[min(a, i)].emplace_back(max(a, i));
//	}
//
//	vector<int> color(N);
//	bool ok = true;
//	for (int i = 0; i < N; i++) for (const auto &e : edges[i]) color[e] = !color[i];
//	for (int i = 0; i < N; i++) for (const auto &e : edges[i]) if (color[e] == color[i]) ok = false;
//
//	if (ok) {
//		int ones = accumulate(color.begin(), color.end(), 0);
//		cout << max(ones, N - ones) << "\n";
//	}
//	else {
//		cout << -1 << "\n";
//	}
//
//	return 0;
//}