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
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
//	return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int W, H, N;
//	cin >> W >> H >> N;
//
//	vector<int> X(N), Y(N);
//	for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];
//
//	vector<int> used(N);
//	vector<int> CX{ 0, 1, W }, CY{ 0, 1, H };
//	int ans = 0;
//	for (int k = 0; k < N; k++) {
//
//		int max_sum = 0, max_idx = k;
//		for (int i = 0; i < N; i++) {
//
//			if (used[i]) continue;
//
//			vector<int> tmpX = CX, tmpY = CY;
//			tmpX.emplace_back(X[i]);
//			tmpY.emplace_back(Y[i]);
//			sort(tmpX.begin(), tmpX.end());
//			sort(tmpY.begin(), tmpY.end());
//
//			auto xl = lower_bound(CX.begin(), CX.end(), X[max_idx]);
//			auto yl = lower_bound(CY.begin(), CY.end(), Y[max_idx]);
//
//			int sum = 0;
//			if (xl != CX.begin()) sum += *xl - *(xl - 1);
//			if (yl != CY.begin()) sum += *yl - *(yl - 1);
//			sum++;
//			for (int j = 0; j < N; j++) {
//
//				if (used[j] || j == i) continue;
//
//				auto xl = lower_bound(tmpX.begin(), tmpX.end(), X[j]);
//				auto yl = lower_bound(tmpY.begin(), tmpY.end(), Y[j]);
//
//				if (xl != tmpX.begin()) sum += *xl - *(xl - 1);
//				if (yl != tmpY.begin()) sum += *yl - *(yl - 1);
//				sum++;
//
//			}
//
//			DMP(sum);
//			if (chmax(max_sum, sum)) max_idx = i;
//			DMP(max_idx);
//
//		}
//
//		auto xl = lower_bound(CX.begin(), CX.end(), X[max_idx]);
//		auto yl = lower_bound(CY.begin(), CY.end(), Y[max_idx]);
//
//		if (xl != CX.begin()) ans += *xl - *(xl - 1);
//		if (yl != CY.begin()) ans += *yl - *(yl - 1);
//		ans++;
//		DMP(ans);
//
//		CX.emplace_back(X[max_idx]);
//		CY.emplace_back(Y[max_idx]);
//		sort(CX.begin(), CX.end());
//		sort(CY.begin(), CY.end());
//		used[max_idx] = 1;
//		
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}