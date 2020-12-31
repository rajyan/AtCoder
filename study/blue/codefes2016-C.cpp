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
//int main() {
//
//	int W, H;
//	cin >> W >> H;
//
//	vector<lint> p(W), q(H);
//	for (int i = 0; i < W; i++) cin >> p[i];
//	for (int i = 0; i < H; i++) cin >> q[i];
//	sort(p.begin(), p.end());
//	sort(q.begin(), q.end());
//
//	lint sum = 0;
//	for (int i = 0; i < W; i++) sum += (q.end() - upper_bound(q.begin(), q.end(), p[i]) + 1) * p[i];
//	for (int i = 0; i < H; i++) sum += (p.end() - lower_bound(p.begin(), p.end(), q[i]) + 1) * q[i];
//
//	cout << sum << "\n";
//
//	return 0;
//}
