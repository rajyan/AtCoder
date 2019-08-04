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
//	for (int i = 0; i < vec.size(); i++) {
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
//	vector<vector<int>> F(N, vector<int>(10)), P(N ,vector<int>(11));
//	for (int i = 0; i < N; i++) for (int j = 0; j < 10; j++) cin >> F[i][j];
//	for (int i = 0; i < N; i++) for (int j = 0; j <= 10; j++) cin >> P[i][j];
//
//
//	int ans = -INF;
//	for (int bit = 0b1; bit < (1 << 10); bit++) {
//		int sum = 0;
//		for (int i = 0; i < N; i++) {
//
//			int popcnt = 0;
//			for (int j = 0; j < 10; j++) {
//				if (((1 << j) & bit) & (F[i][j] << j)) popcnt++;
//			}
//			sum += P[i][popcnt];
//
//		}
//		ans = max(ans, sum);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}