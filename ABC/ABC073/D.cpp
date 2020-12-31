//#include <cassert>
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
//const int MOD = 1000000007;
//const int INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	os << "\n";
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
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
//	int N, M, R;
//	cin >> N >> M >> R;
//
//	vector<int> r(R);
//	for (int i = 0; i < R; i++) {
//		cin >> r[i];
//		r[i]--;
//	}
//
//	vector<vector<int>> d(N, vector<int>(N, INF));
//	for (int i = 0; i < N; i++) d[i][i] = 0;
//	
//	for (int i = 0; i < M; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		a--, b--;
//		d[a][b] = c;
//		d[b][a] = c;
//	}
//
//	for (int k = 0; k < N; k++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (d[i][k] != INF && d[k][j] != INF) {
//					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//				}
//			}
//		}
//	}
//
//	sort(r.begin(), r.end());
//	int ans = INF;
//	do {
//
//		int tmp = 0;
//		for (int i = 0; i < R - 1; i++) tmp += d[r[i]][r[i + 1]];
//		ans = min(ans, tmp);
//
//	} while (next_permutation(r.begin(), r.end()));
//
//	cout << ans << "\n";
//
//	return 0;
//}