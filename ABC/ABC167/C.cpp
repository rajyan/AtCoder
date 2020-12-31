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
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M, X;
//	cin >> N >> M >> X;
//
//	vector<int> C(N);
//	vector<vector<int>> alg(N, vector<int>(M));
//	for (int i = 0; i < N; i++) {
//		cin >> C[i];
//		for (int j = 0; j < M; j++) {
//			cin >> alg[i][j];
//		}
//	}
//
//	int ans = INF;
//	for (int bit = 0; bit < (1 << N); bit++) {
//		int sum = 0;
//		vector<int> m(M);
//		for (int i = 0; i < N; i++) {
//			if (bit & (1 << i)) {
//				for (int j = 0; j < M; j++) {
//					m[j] += alg[i][j];
//				}
//				sum += C[i];
//			}
//		}
//		if (all_of(m.begin(), m.end(), [&](auto &p) {return p >= X; })) chmin(ans, sum);
//	}
//
//	if(ans != INF) cout << ans << "\n";
//	else cout << -1 << "\n";
//
//	return 0;
//}