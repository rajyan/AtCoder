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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> H(N + 1);
//	for (int i = 0; i < N; i++) cin >> H[i];
//
//	vector<pair<int, int>> sum(N);
//	for (int i = 0; i < N; i++) {
//		if (H[i + 1] > H[i]) sum[i] = { H[i + 1] - H[i], i };
//	}
//	
//	partial_sort(sum.begin(), sum.begin() + K, sum.end(), [&](auto &l, auto &r) {return l.first > r.first || (l.first == r.first) && H[l.second] > H[r.second]; });
//	//sort(sum.begin(), sum.end(), [](auto &l, auto &r) {return l.second < r.second; });
//	for (int i = 0; i < K; i++) {
//		int idx = sum[i].second;
//		H[idx + 1] = H[idx];
//	}
//	DMP(H);
//
//	lint ans = 0;
//	for (int i = 0; i < N; i++) {
//		if (H[i + 1] < H[i]) ans += H[i] - H[i + 1];
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}