//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, X, Y;
//	cin >> N >> X >> Y;
//	X--, Y--;
//
//	
//	vector<int> ans(N - 1);
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//			int ix = abs(i - X), iy = abs(i - Y);
//			int jx = abs(j - X), jy = abs(j - Y);
//			ans[min({ ix + jx, iy + jy, abs(i - j), ix + jy + 1, iy + jx + 1 }) - 1]++;
//		}
//	}
//
//	int sum = accumulate(ans.begin(), ans.end(), 0);
//	assert(sum == N * (N - 1) / 2);
//
//	cout << ans << "\n";
//
//	return 0;
//}