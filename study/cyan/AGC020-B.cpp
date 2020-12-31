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
//	int K;
//	cin >> K;
//	vector<int> A(K);
//	for (int i = 0; i < K; i++) cin >> A[i];
//
//
//	auto judge1 = [&](auto x) {
//		for (int i = 0; i < K; i++) {
//			x -= x % A[i];
//		}
//		return x >= 2;
//	};
//
//	auto judge2 = [&](auto x) {
//		for (int i = 0; i < K; i++) {
//			x -= x % A[i];
//		}
//		return x == 2;
//	};
//
//	auto binary_search = [&](auto f, auto ng_in, auto ok_in) {
//
//		auto ng = ng_in;
//		auto ok = ok_in;
//
//		while (abs(ok - ng) > 1) {
//			auto mid = (ok + ng) / 2;
//
//			if (f(mid)) ok = mid;
//			else ng = mid;
//		}
//
//		return ok;
//	};
//
//	auto m = binary_search(judge1, 0LL, LINF);
//	if (!judge2(m)) {
//		cout << -1 << "\n";
//		return 0;
//	}
//
//	cout << m << endl;
//	cout << binary_search(judge2, LINF, m) << endl;
//
//	return 0;
//}