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
//template <class T>
//ostream &operator<<(ostream &os, const set<T> &st) {
//	for (const auto &e : st) os << e << " ";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
//	return os;
//}
//
//template<class T>
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<pair<lint, lint>> LR(N);
//	for (int i = 0; i < N; i++) cin >> LR[i].first >> LR[i].second;
//
//	// 両方が値を持つパターン
//	auto solve = [&N](auto &LR) {
//
//		vector<lint> L(N), R(N);
//		for (int i = 0; i < N; i++) tie(L[i], R[i]) = LR[i];
//		DMP(L, R);
//
//		vector<lint> rL_f(N + 1), rL_b(N + 1), rR_f(N + 1), rR_b(N + 1);
//		rR_f.front() = INF;
//		rR_b.back() = INF;
//
//		for (int i = 0; i < N; i++) {
//			rL_f[i + 1] = max(rL_f[i], L[i]);
//			rR_f[i + 1] = min(rR_f[i], R[i]);
//		}
//		for (int i = N - 1; i >= 0; i--) {
//			rL_b[i] = max(rL_b[i + 1], L[i]);
//			rR_b[i] = min(rR_b[i + 1], R[i]);
//		}
//
//		DMP(rL_f, rL_b, rR_f, rR_b);
//
//		lint ans = 0;
//		for (int i = 1; i < N; i++) {
//			chmax(ans, max(rR_f[i] - rL_f[i] + 1, 0LL) + max(rR_b[i] - rL_b[i] + 1, 0LL));
//			DMP(rR_f[i] - rL_f[i] + 1, rR_b[i] - rL_b[i] + 1);
//		}
//
//
//		for (int i = 0; i < N; i++) chmax(ans, R[i] - L[i] + 1 + max(min(rR_f[i], rR_b[i]) - max(rL_f[i], rL_b[i]) + 1, 0LL));
//
//		return ans;
//
//	};
//
//	lint ans = 0;
//
//	sort(LR.begin(), LR.end());
//	DMP(LR);
//	chmax(ans, solve(LR));
//
//	cout << ans << "\n";
//
//	return 0;
//}