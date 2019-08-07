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
//	int N, Z, W;
//	cin >> N >> Z >> W;
//
//	vector<int> a(N), culmax(N + 1), culmin(N + 1, INF);
//	for (int i = 0; i < N; i++) cin >> a[i];
//	for (int i = 0; i < N; i++) culmax[i + 1] = max(a[i], culmax[i]);
//	for (int i = N - 1; i >= 0; i--) culmin[i] = min(a[i], culmin[i + 1]);
//	culmax[0] = Z, culmin[N] = W;
//
//	DMP(culmax, culmin);
//
//	int ans = 0;
//	for (int i = 0; i <= N; i++) ans = max(ans, abs(culmax[i] - culmin[i]));
//
//	cout << ans << "\n";
//
//	return 0;
//}