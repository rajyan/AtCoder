//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <unordered_map>
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
//	int N, P;
//	string S;
//	cin >> N >> P >> S;
//
//	if (10 % P == 0) {
//
//		lint ans = 0;
//		for (int i = N - 1; i >= 0; i--) {
//			if ((S[i] - '0') % P == 0) ans += i + 1;
//		}
//
//		cout << ans << "\n";
//
//		return 0;
//	}
//
//	unordered_map<int, int> mp;
//	int rem = 0, pw = 1;
//	for (int i = N - 1; i >= 0; i--, (pw *= 10) %= P) {
//		(rem += (S[i] - '0') * pw) %= P;
//		mp[rem]++;
//	}
//
//	lint ans = mp[0];
//	for (const auto& [key, val] : mp) {
//		ans += 1LL * val * (val - 1) / 2;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
