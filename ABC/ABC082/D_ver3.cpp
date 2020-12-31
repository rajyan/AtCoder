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
//	int x = 0, y = 0;
//
//	vector<vector<int>> dpx(s.size() + 2, vector<int>(8000 * 2 + 1));
//	vector<vector<int>> dpy(s.size() + 2, vector<int>(8000 * 2 + 1));
//	dpx[0][8000] = 1;
//	dpy[0][8000] = 1;
//
//	// ”Ô•º
//	s += 'T';
//	for (int ord = 0; ord < s.size(); ord++) {
//
//		if (s[ord] == 'T') {
//			if (now) {
//
//				for (int i = 0; i <= 2 * 8000; i++) {
//
//					int idx = i + cnt;
//					if (0 <= idx && idx <= 2 * 8000) dpx[ord + 1][idx] |= dpx[ord][i];
//					idx -= 2 * cnt;
//					if (0 <= idx && idx <= 2 * 8000) dpx[ord + 1][idx] |= dpx[ord][i];
//
//
//					dpy[ord + 1][i] = dpy[ord][i];
//
//				}
//			}
//			else {
//				for (int i = 0; i <= 2 * 8000; i++) {
//
//					dpx[ord + 1][i] = dpx[ord][i];
//
//					int idx = i + cnt;
//					if (0 <= idx && idx <= 2 * 8000) dpy[ord + 1][idx] |= dpy[ord][i];
//					idx -= 2 * cnt;
//					if (0 <= idx && idx <= 2 * 8000) dpy[ord + 1][idx] |= dpy[ord][i];
//
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
//			for (int i = 0; i <= 2 * 8000; i++) {
//				dpx[ord + 1][i] = dpx[ord][i];
//				dpy[ord + 1][i] = dpy[ord][i];
//			}
//
//		}
//
//	}
//
//	//for (int i = 0; i <= 2 * 8000; i++)  if(dpx.back()[i]) DMP(i);
//	if (dpx.back()[8000 + gx] && dpy.back()[8000 + gy]) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//
//	return 0;
//}
