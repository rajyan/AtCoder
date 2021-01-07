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
//#include <bitset>
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
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
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
//	int N;
//	cin >> N;
//
//	vector<int> A(N), B(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	for (int i = 0; i < N; i++) cin >> B[i];
//
//	int ans = INF;
//	auto swap_count = [&](auto &svec) {
//
//		DMP(svec);
//		// buble sort
//		int swaps = 0;
//		for (int i = 0; i < N - 1; ++i) {
//			for (int j = 0; j < N - i - 1; ++j) {
//				if (svec[j].second > svec[j + 1].second) {
//					swap(svec[j], svec[j + 1]);
//					swaps++;
//				}
//			}
//		}
//		DMP(svec);
//
//		return swaps;
//	};
//
//	for (int bit = 0; bit < (1 << N); bit++) {
//
//		if (popcount(bit) & 1) continue;
//
//		vector<pair<int, int>> odd, even;
//		for (int i = 0; i < N; i++) {
//			if (((bit >> i) & 1)) {
//				if (i & 1) odd.emplace_back(B[i], i);
//				else even.emplace_back(B[i], i);
//			}
//			else {
//				if (i & 1) even.emplace_back(A[i], i);
//				else odd.emplace_back(A[i], i);
//			}
//		}
//
//		if (odd.size() == (N + 1) / 2 && even.size() == N / 2) {
//			sort(odd.begin(), odd.end());
//			sort(even.begin(), even.end());
//			vector<pair<int, int>> vec(N);
//			for (int i = 0; i < N; i++) {
//				if (i & 1) vec[i] = even[i / 2];
//				else vec[i] = odd[i / 2];
//			}
//
//			if (is_sorted(vec.begin(), vec.end(), [](auto& l, auto& r) { return l.first < r.first; })) {
//				chmin(ans, swap_count(vec));
//			}
//		}
//	}
//
//	cout << (ans == INF ? -1 : ans) << "\n";
//
//	return 0;
//}
//
