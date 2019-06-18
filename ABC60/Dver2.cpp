//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
//
//#define FOR(idx, begin, end) for(int idx = (lint)(begin); idx < (lint)(end); ++idx)
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//const int MOD = 1000000007, INF = 1111111111;
//const double EPS = 1e-9;
//
//struct itm { lint w;  lint val; };
//bool operator<(itm &lhs, itm &rhs) { return lhs.w < rhs.w; };
//bool valcomp(itm &lhs, itm &rhs) { return lhs.val > rhs.val; };
//
//int main() {
//
//	cin.tie(0);
//
//	int N, W;
//	cin >> N >> W;
//
//	vector<itm> item(N);
//	FOR(i, 0, N) cin >> item[i].w >> item[i].val;
//	lint w0 = item[0].w;
//	sort(item.begin(), item.end());
//
//	vector<vector<itm>> numw(4);
//	for (const auto &ele : item) {
//
//		FOR(i, 0, 4) if (ele.w == w0 + i) numw[i].emplace_back(ele);
//	}
//	itm zero;
//	zero.w = 0; zero.val = 0;
//	FOR(i, 0, 4) numw[i].emplace_back(zero);
//	FOR(i, 0, 4) sort(numw[i].begin(), numw[i].end(), valcomp);
//
//	DMP(numw[0].size());
//
//	lint ans = 0, tmp = 0;
//	FOR(i0, 0, numw[0].size())FOR(i1, 0, numw[1].size())FOR(i2, 0, numw[2].size())FOR(i3, 0, numw[3].size()) {
//
//		tmp = 0;
//		DMP((i0 + i1 + i2 + i3)*w0 + i1 + 2 * i2 + 3 * i3);
//		if ((lint)((i0 + i1 + i2 + i3)*w0 + i1 + 2 * i2 + 3 * i3) <= W) {
//			FOR(ii0, 0, i0) tmp += numw[0][ii0].val;
//			FOR(ii1, 0, i1) tmp += numw[1][ii1].val;
//			FOR(ii2, 0, i2) tmp += numw[2][ii2].val;
//			FOR(ii3, 0, i3) tmp += numw[3][ii3].val;
//			ans = ans < tmp ? tmp : ans;
//		}
//	}
//
//	cout << ans;
//	return 0;
//}
