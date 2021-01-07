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
//#include "../../../library/src/debug_template.cpp"
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
//	string S;
//	int Q;
//	cin >> S >> Q;
//
//	bool rev = false;
//	string f, b;
//	for (int i = 0; i < Q; i++) {
//		int q;
//		cin >> q;
//		if (--q) {
//			int r;
//			char c;
//			cin >> r >> c;
//			r--;
//			r ^= rev;
//
//			if (r) b += c;
//			else f += c;
//		}
//		else rev ^= 1;
//	}
//
//	reverse(f.begin(), f.end());
//	string ans = f + S + b;
//	if (rev) reverse(ans.begin(), ans.end());
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
