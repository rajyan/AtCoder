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
//	vector<vector<int>> d(N, vector<int>(N, INF));
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		a--, b--;
//		d[a][b] = 1;
//	}
//	DMP(d);
//
//	for (int k = 0; k < N; k++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (d[i][k] == INF || d[k][j] == INF) continue;
//				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//			}
//		}
//	}
//	DMP(d);
//
//	int mincyc = INF;
//	vector<int> ans;
//	for (int i = 0; i < N; i++) chmin(mincyc, d[i][i]);
//	if (mincyc == INF) cout << -1 << "\n";
//	else {
//
//		int st = -1;
//		for (int i = 0; i < N; i++) {
//			if (d[i][i] == mincyc) {
//				st = i;
//				break;
//			}
//		}
//
//		int now = st;
//		ans.emplace_back(st);
//		while (ans.size() < mincyc) {
//
//			for (int i = 0; i < N; i++) {
//				if (d[i][i] == mincyc && d[now][i] == 1 && mincyc == d[i][st] + d[st][i]) {
//					ans.emplace_back(i);
//					now = i;
//					break;
//				}
//			}
//
//		}
//
//		cout << ans.size() << "\n";
//		for (const auto &e : ans) cout << e + 1 << "\n";
//	}
//
//	return 0;
//}