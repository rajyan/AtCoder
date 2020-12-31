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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<double> w(N), p(N);
//	for (int i = 0; i < N; i++) cin >> w[i] >> p[i];
//
//	auto bisearch = [&](auto f) {
//		double ng = 100.0;
//		double ok = 0.0;
//
//		while (abs(ok - ng) > 1e-9) {
//			double mid = (ok + ng) / 2;
//			if (f(mid)) ok = mid;
//			else ng = mid;
//		}
//		return ok;
//	};
//
//	auto judge = [&](double x) {
//		vector<double> wp_minus_wx(N);
//		for (int i = 0; i < N; i++) wp_minus_wx[i] = w[i] * p[i] - w[i] * x;
//		nth_element(wp_minus_wx.begin(), wp_minus_wx.begin() + K, wp_minus_wx.end(), greater<double>());
//		return accumulate(wp_minus_wx.begin(), wp_minus_wx.begin() + K, 0.0) >= 0.0;
//	};
//
//	cout << fixed << setprecision(10) << bisearch(judge) << "\n";
//
//	return 0;
//}