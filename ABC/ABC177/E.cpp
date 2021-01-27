//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
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
//	int N;
//	cin >> N;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	sort(A.begin(), A.end());
//	auto it = lower_bound(A.begin(), A.end(), 2);
//	A.erase(unique(it, A.end()), A.end());
//
//	bool no = false;
//	if (A.size() != N) no = true;
//
//	vector<int> p(1000100);
//	for (int i = 0; i < A.size(); i++) {
//		p[A[i]] = 1;
//	}
//	for (int i = 2; i < 1000100; i++) {
//		if (no) break;
//		int cnt = 0;
//		for (int j = 1; i * j < 1000100; j++) {
//			if (p[i * j]) {
//				DMP(i, i * j);
//				if (cnt) no = true;
//				cnt++;
//			}
//		}
//	}
//
//	int g = 0;
//	for (int i = 0; i < A.size(); i++) {
//		g = gcd(g, A[i]);
//	}
//
//	if (!no) {
//		cout << "pairwise coprime" << "\n";
//	}
//	else if (g == 1) {
//		cout << "setwise coprime" << "\n";
//	}
//	else {
//		cout << "not coprime" << "\n";
//	}
//
//	return 0;
//}
