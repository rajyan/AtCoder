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
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<int>> edge(N, vector<int>(N));
//	int u, v;
//	for (int i = 0; i < M; i++) {
//		cin >> u >> v;
//		u--, v--;
//		edge[u][v] = 1;
//		edge[v][u] = 1;
//	}
//
//	vector<int> per(N);
//	iota(per.begin(), per.end(), 0);
//	int ans = 0;
//	do {
//
//		bool flag = true;
//		for (int i = 0; i < N - 1; i++) {
//			if (!edge[per[i]][per[i + 1]]) {
//				flag = false;
//				break;
//			}
//		}
//		ans += flag;
//		if (flag) DMP(per);
//	} while (next_permutation(per.begin() + 1, per.end()));
//
//	cout << ans << "\n";
//
//	return 0;
//}