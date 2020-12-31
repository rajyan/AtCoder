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
//inline int popcount(lint n) {
//	n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);
//	n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);
//	n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);
//	n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);
//	n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);
//	n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);
//	return n;
//}
//
//int main() {
//
//	lint N;
//	string X;
//	cin >> N >> X;
//
//	lint cnt = 0;
//	for (int i = 0; i < N; i++) {
//		if (X[i] - '0') cnt++;
//	}
//	DMP(X, cnt);
//
//	if (cnt == 0) {
//		for (int i = 0; i < N; i++) {
//			cout << 1 << "\n";
//		}
//		return 0;
//	}
//
//	vector<lint> remp(N), remm(N);
//	lint rp = 1, rm = 1;
//	for (int i = 0; i < N; i++) {
//		remp[i] = rp;
//		remm[i] = rm;
//		rp <<= 1;
//		rm <<= 1;
//		rp %= cnt + 1;
//		if (cnt != 1) rm %= cnt - 1;
//	}
//	DMP(remp, remm);
//
//	lint sump = 0, summ = 0;
//	reverse(remp.begin(), remp.end());
//	reverse(remm.begin(), remm.end());
//	for (int i = 0; i < N; i++) {
//		if (X[i] - '0') (sump += remp[i]) %= cnt + 1;
//		if (X[i] - '0' && cnt != 1) (summ += remm[i]) %= cnt - 1;
//	}
//	DMP(summ, sump);
//
//	vector<lint> st(N);
//	for (int i = 0; i < N; i++) {
//		if (X[i] - '0') {
//			if (cnt == 1) {
//				st[i] = -1;
//				continue;
//			}
//			st[i] = summ;
//			st[i] -= remm[i];
//			st[i] += cnt - 1;
//			st[i] %= cnt - 1;
//		}
//		else {
//			st[i] = sump;
//			st[i] += remp[i];
//			st[i] %= cnt + 1;
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (st[i] < 0) {
//			cout << 0 << "\n";
//			continue;
//		}
//		int ans = 1;
//		while (st[i]) {
//			int p = popcount(st[i]);
//			if (p == 0) break;
//			st[i] %= p;
//			ans++;
//		}
//		cout << ans << "\n";
//	}
//
//	return 0;
//}
//
