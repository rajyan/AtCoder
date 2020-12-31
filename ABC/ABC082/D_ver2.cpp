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
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <typename T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
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
//	string s;
//	cin >> s;
//
//	int gx, gy; // goal
//	cin >> gx >> gy;
//
//	int now = 1, cnt = 0; // now = 1 -> x, = 0 -> y;
//
//	map<int, int> mpx, mpy;
//	mpx[0]++; mpy[0]++;
//
//	// ”Ô•º
//	s += 'T';
//	for (int ord = 0; ord < s.size(); ord++) {
//
//		if (s[ord] == 'T') {
//			if (now) {
//				auto tmp = mpx;
//				for (const auto &e : tmp) {
//					mpx[e.first + cnt]++;
//					mpx[e.first - cnt]++;
//					mpx[e.first]= 0;
//				}
//			}
//			else {
//				auto tmp = mpy;
//				for (const auto &e : tmp) {
//					mpy[e.first + cnt]++;
//					mpy[e.first - cnt]++;
//					mpy[e.first] = 0;
//				}
//			}
//
//			cnt = 0;
//			now ^= 1;
//
//		}
//		else cnt++;
//
//	}
//
//	if (mpx[gx] > 0 && mpy[gy] > 0) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}
