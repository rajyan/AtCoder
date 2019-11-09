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
//	int N;
//	cin >> N;
//
//	vector<lint> H(N), S(N);
//	for (int i = 0; i < N; i++) cin >> H[i] >> S[i];
//
//	auto judge = [&](lint x) {
//
//		vector<double> max_t(N);
//		for (int i = 0; i < N; i++) max_t[i] = (double)(x - H[i]) / S[i];
//		sort(max_t.begin(), max_t.end());
//
//		DMP(max_t);
//		for (int i = 0; i < N; i++) if (max_t[i] < i) return false;
//
//		return true;
//
//	};
//
//	auto biSearch = [&](auto f) {
//
//		lint ok = LINF;
//		lint ng = -1;
//
//		while (abs(ok - ng) > 1) {
//			lint mid = (ok + ng) / 2;
//
//			if (f(mid)) ok = mid;
//			else ng = mid;
//		}
//
//		return ok;
//	};
//
//	cout << biSearch(judge) << "\n";
//
//	return 0;
//}