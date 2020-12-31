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
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, st;
//	cin >> N >> st;
//	st--;
//
//	mp::cpp_int k;
//	cin >> k;
//
//	vector<int> b(N);
//	for (int i = 0; i < N; i++) cin >> b[i];
//	for (int i = 0; i < N; i++) b[i]--;
//	DMP(b);
//
//	int b_idx = st, loop_idx = 0, loop_st = 0;
//	map<int, int> used;
//	vector<int> loop;
//	loop.reserve(N);
//	while (true) {
//
//		if (used.find(b_idx) != used.end()) {
//			loop_st = used[b_idx];
//			break;
//		}
//		else {
//			loop.emplace_back(b_idx);
//			used.emplace(b_idx, loop_idx);
//		}
//
//		b_idx = b[b_idx];
//		loop_idx++;
//	}
//
//	DMP(loop, loop_st);
//
//	int loop_sz = loop.size() - loop_st;
//	if (k < loop_st) cout << loop[(int)k] + 1 << "\n";
//	else {
//		int ans_idx = (int)((k - loop_st) % loop_sz) + loop_st;
//		cout << loop[ans_idx] + 1 << "\n";
//	}
//
//	return 0;
//}