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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	vector<int> X(a + b + c);
//	iota(X.begin(), X.end(), 1);
//	int cnt = 0;
//	do {
//
//		bool flag = true;
//		for (int i = 0; i < a - 1; i++) {
//			if (X[i] > X[i + 1]) flag = false;
//		}	
//		for (int i = a; i < a + b - 1; i++) {
//			if (X[i] > X[i + 1]) flag = false;
//		}	
//		for (int i = a + b; i < a + b + c - 1; i++) {
//			if (X[i] > X[i + 1]) flag = false;
//		}
//
//		for (int i = 0; i < min(a, b); i++) {
//			if (X[i] > X[i + a]) flag = false;
//		}		
//		for (int i = 0; i < min(b, c); i++) {
//			if (X[i + a] > X[i + a + b]) flag = false;
//		}
//
//		if (flag) cnt++;
//
//	} while (next_permutation(X.begin(), X.end()));
//
//	cout << cnt << "\n";
//
//
//	return 0;
//}