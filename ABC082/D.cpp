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
//	vector<vector<int>> dpx(s.size() + 2, vector<int>());
//	vector<vector<int>> dpy(s.size() + 2, vector<int>());
//	dpx[0].emplace_back(0);
//	dpy[0].emplace_back(0);
//
//	// ”Ô•º
//	s += 'T';
//	for (int ord = 0; ord < s.size(); ord++) {
//
//		if (s[ord] == 'T') {
//			if (now) {
//				for (const auto &e : dpx[ord]) {
//					dpx[ord + 1].emplace_back(e + cnt);
//					dpx[ord + 1].emplace_back(e - cnt);
//				}
//				dpy[ord + 1] = move(dpy[ord]);
//			}
//			else {
//				dpx[ord + 1] = move(dpx[ord]);
//				for (const auto &e : dpy[ord]) {
//					dpy[ord + 1].emplace_back(e + cnt);
//					dpy[ord + 1].emplace_back(e - cnt);
//				}
//			}
//
//			cnt = 0;
//			now ^= 1;
//
//		}
//		else {
//
//			cnt++;
//
//			dpx[ord + 1] = move(dpx[ord]);
//			dpy[ord + 1] = move(dpy[ord]);
//
//		}
//
//	}
//
//	if (any_of(dpx.back().begin(), dpx.back().end(), [&](int in) {return in == gx; }) 
//		&& any_of(dpy.back().begin(), dpy.back().end(), [&](int in) {return in == gy; })) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//
//	return 0;
//}
