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
//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//int main() {
//
//	int N;
//	string S;
//	cin >> N >> S;
//
//	int l = 0, r = N - 1;
//	int ans = 0;
//	while (l < r) {
//
//		while (l < N && S[l] == 'R') l++;
//		while (0 <= r && S[r] == 'W') r--;
//
//		if (l < r) ans++;
//		l++, r--;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//