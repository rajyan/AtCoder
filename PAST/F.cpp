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
//#include "../../../library/src/debug_template.hpp"
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
//	cin >> N;
//	
//	vector<string> S(N);
//	for (int i = 0; i < N; i++) cin >> S[i];
//
//	string ans;
//	for (int i = 0; i < (N + 1) / 2; i++) {
//		
//		vector<int> alpha(26);
//
//		for (const auto &e : S[i]) alpha[e - 'a'] = 1;
//
//		bool ok = false;
//		for (const auto &e : S[N - i - 1]) {
//			if (alpha[e - 'a']) {
//				ans += e;
//				ok = true;
//				break;
//			}
//		}
//
//		if (!ok) {
//			cout << -1 << "\n";
//			return 0;
//		}
//
//	}
//
//	cout << ans;
//	if (N & 1)ans.pop_back();
//	reverse(ans.begin(), ans.end());
//	cout << ans << "\n";
//
//	return 0;
//}
//
