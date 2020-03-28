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
//	int N, H;
//	cin >> N >> H;
//
//	lint A, B, C, D, E;
//	cin >> A >> B >> C >> D >> E;
//
//
//	auto judge = [&](auto mid, auto i) {
//		return H + i * B + mid * D - (N - i - mid) * E > 0;
//	};
//
//	auto binary_search = [&](auto f, auto i) {
//
//		auto ng = -1;
//		auto ok = N - i + 1;
//
//		while (abs(ok - ng) > 1) {
//			int mid = (ok + ng) / 2;
//
//			if (f(mid, i)) ok = mid;
//			else ng = mid;
//		}
//
//		return ok;
//	};
//
//	lint ans = LINF;
//	for (int i = 0; i <= N; i++) {
//		
//		int bd = binary_search(judge, i);
//
//		lint cost = i * A + bd * C;
//		DMP(cost);
//		chmin(ans, cost);
//	
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}