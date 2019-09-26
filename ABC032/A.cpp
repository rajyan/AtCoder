//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
//constexpr lint LINF = 1LL << 60;
//
//////////////////// Debug
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
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
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//
/////////////////// Debug end
//
//#define all(vec) vec.begin(), vec.end()
//#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; i++ )
//#define rep(i,n) REP(i,0,n)
//
//template<class T>
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int a, b, n;
//	cin >> a >> b >> n;
//
//	REP(i, n, 100000) {
//		if (i%a == 0 && i%b == 0) {
//			cout << i << endl;
//			break;
//		}
//	}
//
//	return 0;
//}
