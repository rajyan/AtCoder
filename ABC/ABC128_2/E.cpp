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
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
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
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, Q;
//	cin >> N >> Q;
//
//	// t = x - D_i ‚Æ x = X_j (S_j <= t <= T_j) ‚ªŒð‚í‚éD_i‚Ì”ÍˆÍ‚ðŒvŽZ‚µ‚Ä‚¨‚­
//	vector <pair<pair<int, int>, int>> stx(N);
//	for (int i = 0; i < N; i++) {
//		int s, t, x;
//		cin >> s >> t >> x;
//		stx[i] = { { max(0, s - x), t - x }, x };
//	}
//	sort(stx.begin(), stx.end());
//
//	set<pair<int,int>> st;
//	vector<int> ans(Q, INF);
//	auto first = stx.begin();
//	auto last = stx.end();
//	for (int i = 0; i < Q; i++) {
//
//		int d;
//		cin >> d;
//
//		// add
//		last = upper_bound(stx.begin(), stx.end(), make_pair(make_pair(d, INF), INF));
//		for (auto itr = first; itr != last; itr++) st.emplace(itr->second, itr->first.second);
//		first = last;
//		DMP(first - stx.begin());
//
//		DMP(st);
//		//erase
//		vector<pair<int, int>> memo;
//		for (const auto &e : st) {
//			if (d < e.second) {
//				chmin(ans[i], e.first);
//				break;
//			}
//			else memo.emplace_back(e);
//		}
//		DMP(memo);
//		for (const auto e : memo) st.erase(e);
//		DMP(st);
//
//	}
//
//	for (const auto &e : ans) cout << (e == INF ? - 1 : e) << "\n";
//
//	return 0;
//}