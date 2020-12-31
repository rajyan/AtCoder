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
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
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
//	int N;
//	cin >> N;
//
//	vector<vector<int>> d(N, vector<int>(N));
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++) cin >> d[i][j];
//
//	bool flag = true;
//	lint ans = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//
//			bool edge = true;
//			for (int k = 0; k < N; k++) {
//				if (i == k || j == k) continue;
//				if (d[i][j] > d[i][k] + d[k][j]) flag = false;
//				if (d[i][j] == d[i][k] + d[k][j]) edge = false;
//			}
//
//			if (edge) ans += d[i][j];
//		}
//	}
//
//	if (flag) cout << ans << "\n";
//	else cout << -1 << "\n";
//
//	return 0;
//}