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
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
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
//	string S , T;
//	cin >> S >> T;
//	int slen = (int)S.size();
//	int tlen = (int)T.size();
//
//	auto cmp = [](string lhs, string rhs) {
//		assert(lhs.size() == rhs.size());
//		bool res = true;
//		for (int i = 0; i < (int)lhs.size(); i++) {
//			if (lhs[i] != rhs[i] && lhs[i] != '?') res = false;
//		}
//		return res;
//	};
//
//	bool flag = true;
//	for (int i = slen - tlen; i >= 0; i--) {
//
//		if (cmp(S.substr(i, tlen), T)) { 
//
//			for (int j = 0; j < slen; j++) {
//				if (j < i || i + tlen <= j) {
//					if (S[j] == '?') cout << 'a';
//					else cout << S[j];
//				}
//				else cout << T[j - i];
//			}
//			cout << "\n";
//			flag = false;
//			break;
//		}
//
//	}
//
//	if (flag) cout << "UNRESTORABLE\n";
//
//	return 0;
//}