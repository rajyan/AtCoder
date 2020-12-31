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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> a(N), dp(K + 1, -1);
//	for (int i = 0; i < N; i++) cin >> a[i];
//	dp[0] = 0;
//
//	for (int i = 0; i <= K; i++) {
//
//		if (dp[i] != -1) continue;
//		
//		dp[i] = 0;
//		for (int j = 0; j < N; j++) {
//			if(i - a[j] >= 0) dp[i] |= (bool(dp[i - a[j]]) ^ 1);
//		}
//
//	}
//	DMP(dp);
//
//	if (dp[K]) cout << "First" << "\n";
//	else cout << "Second" << "\n";
//
//	return 0;
//}