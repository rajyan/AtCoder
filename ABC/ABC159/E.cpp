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
//int bitcnt(long bits){
//	bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
//	bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
//	bits = (bits & 0x0f0f0f0f) + (bits >> 4 & 0x0f0f0f0f);
//	bits = (bits & 0x00ff00ff) + (bits >> 8 & 0x00ff00ff);
//	return (bits & 0x0000ffff) + (bits >> 16 & 0x0000ffff);
//}
//
//template<class T>
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W, K;
//	cin >> H >> W >> K;
//
//	vector<vector<char>> grid(H, vector<char>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> grid[i][j];
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) grid[i][j] -= '0';
//	
//	int ans = INF;
//	for (int bit = 0b0; bit < (1 << (H - 1)); bit++) {
//
//		int cnt = bitcnt(bit);
//
//		vector<int> id(H);
//		for (int i = 0; i < H - 1; i++) {
//			if (bit & (1 << i)) id[i + 1] = id[i] + 1;
//			else id[i + 1] = id[i];
//		}
//		DMP(bit, id);
//
//		vector<int> sum(H);
//		int prev = -1;
//		for (int w = 0; w < W; w++) {
//			for (int i = 0; i < H; i++) {
//				sum[id[i]] += grid[i][w];
//				if (sum[id[i]] > K) {
//					cnt++;
//					fill(sum.begin(), sum.end(), 0);
//					i = -1;
//					DMP(w, i);
//					if (prev == w * W + i) {
//						cnt = INF;
//						break;
//					}
//					prev = w * W + i;
//				}
//			}
//			DMP(sum);
//		}
//
//		if(chmin(ans, cnt)) DMP(ans, bit);
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}