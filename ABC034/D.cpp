//// âRâñ@ÅI
//
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
//template<class T>
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<double> W(N), P(N);
//	for (int i = 0; i < N; i++) cin >> W[i] >> P[i];
//
//	double salt = 0.0, water = 0.0;
//	int max_idx;
//	vector<int> used(N);
//	for (int i = 0; i < K; i++) {
//
//		double s_max = 0.0, w_max = 1e10;
//		for (int j = 0; j < N; j++) {
//
//			if (!used[j]) {
//				if ((salt + s_max) / (water + w_max) < (salt + W[j] * P[j] / 100) / (water + W[j])) {
//					max_idx = j;
//					s_max = W[j] * P[j] / 100;
//					w_max = W[j];
//				}
//			}
//
//		}
//		used[max_idx] = 1;
//		salt += s_max;
//		water += w_max;
//	}
//
//	cout << fixed << setprecision(10) << salt / water * 100 << "\n";
//
//	return 0;
//}