//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << p.first << " " << p.second;
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << "[" << e << "] ";
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
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
//	lint N, A, B;
//	cin >> N >> A >> B;
//
//	vector<lint> h(N);
//	for (int i = 0; i < N; i++) cin >> h[i];
//	sort(h.begin(), h.end());
//
//	auto biSearch = [&](auto f) {
//		lint ng = -1;
//		lint ok = h.back();
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
//	auto judge = [&](int idx) {
//
//		lint ex = 0;
//		for (int i = 0; i < N; i++) {
//			if (h[i] - B * idx > 0) ex += (h[i] - B * idx - 1) / (A - B) + 1;
//			DMP(ex);
//		}
//
//		DMP(idx, ex);
//		return ex <= idx;
//
//	};
//
//	cout << biSearch(judge) << "\n";
//
//	return 0;
//}