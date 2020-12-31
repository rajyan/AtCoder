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
//	string S;
//	cin >> S;
//
//	vector<int> ans(S.size());
//	int cntR = 0, cntL = 0;
//	for (int i = 0; i < S.size(); i++) {
//		if (S[i] == 'R') cntR++;
//		else if (cntR){
//			ans[i - 1] = cntR;
//			cntR = 0;
//		}
//	}
//
//	for (int i = S.size() - 1; i >= 0; i--) {
//		if (S[i] == 'L') cntL++;
//		else if (cntL){
//			ans[i + 1] = cntL;
//			cntL = 0;
//		}
//	}
//
//	for (int i = 0; i < S.size()-1; i++) {
//		if (S[i] == 'R'&&S[i + 1] == 'L') {
//			int tmp = ans[i] + ans[i + 1];
//			if (tmp % 2 == 0) {
//				ans[i] = tmp / 2;
//				ans[i + 1] = tmp / 2;
//			}
//			else if (ans[i] % 2 == 0){
//				ans[i] = tmp / 2;
//				ans[i + 1] = tmp / 2 + 1;
//			}
//			else {
//				ans[i] = tmp / 2 + 1;
//				ans[i + 1] = tmp / 2;
//			}
//		}
//	}
//
//	for (const auto &e : ans) cout << e << " ";
//
//	return 0;
//}