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
//	int N;
//	cin >> N;
//
//	vector<int> P(N), idx(N);
//	for (int i = 0; i < N; i++) cin >> P[i];
//	for (int i = 0; i < N; i++) idx[P[i] - 1] = i;
//
//	multiset<lint> st;
//	st.emplace(-1), st.emplace(-1);
//	st.emplace(N), st.emplace(N); // ”Ô•º
//	lint ans = 0;
//	for (int i = N - 1; i >= 0; i--) {
//
//		auto ub1 = st.lower_bound(idx[i]);
//		auto ub2 = next(ub1);
//		auto lb1 = --st.upper_bound(idx[i]);
//		auto lb2 = prev(lb1);
//
//		ans += (idx[i] - *lb1) * (*ub2 - *ub1) * P[idx[i]];
//		ans += (*ub1 - idx[i]) * (*lb1 - *lb2) * P[idx[i]];
//		st.emplace(idx[i]);
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}