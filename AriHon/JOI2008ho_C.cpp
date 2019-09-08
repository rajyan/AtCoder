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
//	int N, M;
//	cin >> N >> M;
//
//	vector<lint> P(N + 1);
//	for (int i = 1; i <= N; i++) cin >> P[i];
//
//	// 0, 1, 2‰ñ“Š‚°‚½‚Æ‚«‚Éæ‚è‚¤‚é“_”
//	vector<lint> PP;
//	PP.reserve((N + 1) * (N + 1));
//	for (int i = 0; i <= N; i++) {
//		for (int j = 0; j <= N; j++) {
//			PP.emplace_back(P[i] + P[j]);
//		}
//	}
//	sort(PP.begin(), PP.end());
//	PP.erase(unique(PP.begin(), PP.end()), PP.end());
//	DMP(PP);
//
//	lint ans = 0;
//	// 0-4‰ñ“Š‚°‚½‚Éæ‚è‚¤‚é“_”
//	for (const auto &e : PP) {
//		auto bound = lower_bound(PP.begin(), PP.end(), M - e);
//		if (bound != PP.begin() && bound != PP.end()) {
//			ans = max(ans, e + *(--bound));
//			DMP(e, *bound);
//			assert(ans <= M);
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
