//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
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
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<class T>
//inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	string s, t;
//	cin >> s >> t;
//
//	int ans = 0;
//	for (int i = 0; i <= s.size() - t.size(); i++) {
//		int cnt = 0;
//		for (int j = 0; j < t.size(); j++) {
//			cnt += s[i + j] == t[j];
//		}
//		chmax(ans, cnt);
//	}
//
//	cout << t.size() - ans << "\n";
//
//	return 0;
//}