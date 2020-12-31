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
//	int N, st;
//	cin >> N >> st;
//	st--;
//
//	string k;
//	cin >> k;
//
//	vector<int> b(N);
//	for (int i = 0; i < N; i++) cin >> b[i];
//	for (int i = 0; i < N; i++) b[i]--;
//	DMP(b);
//
//	int b_idx = st, loop_idx = 0, loop_st = 0;
//	map<int, int> used;
//	vector<int> route;
//	route.reserve(N);
//	while (true) {
//
//		if (used.find(b_idx) != used.end()) {
//			loop_st = used[b_idx];
//			break;
//		}
//		else {
//			route.emplace_back(b_idx);
//			used.emplace(b_idx, loop_idx);
//		}
//
//		b_idx = b[b_idx];
//		loop_idx++;
//	}
//
//	DMP(route, loop_st);
//
//	int loop_sz = route.size() - loop_st;
//
//	if (k.size() <= 6 && stoi(k) < loop_st) cout << route[stoi(k)] + 1 << "\n";
//	else {
//
//		int k_mod = 0;
//		for (int i = 0; i < k.size(); i++) k_mod = (k_mod * 10 + k[i] - '0') % loop_sz;
//		(k_mod += loop_sz - loop_st % loop_sz) %= loop_sz;
//
//		cout << route[k_mod + loop_st] + 1 << "\n";
//	}
//
//	return 0;
//}