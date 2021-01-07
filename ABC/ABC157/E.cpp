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
//	int N, Q;
//	string S;
//	cin >> N >> S >> Q;
//
//	vector<set<int>> idx(26);
//	for (int i = 0; i < N; i++) {
//		idx[S[i] - 'a'].emplace(i);
//	}
//
//	for (int i = 0; i < Q; i++) {
//		int q;
//		cin >> q;
//		if (q == 1) {
//			int j;
//			char c;
//			cin >> j >> c;
//			j--;
//			idx[S[j] - 'a'].erase(j);
//			S[j] = c;
//			idx[c - 'a'].emplace(j);
//		}
//		else {
//			int l, r;
//			cin >> l >> r;
//			l--, r--;
//			int cnt = 0;
//			for (int i = 0; i < 26; i++) {
//				cnt += idx[i].upper_bound(r) != idx[i].lower_bound(l);
//			}
//			cout << cnt << "\n";
//		}
//	}
//
//	return 0;
//}
//
