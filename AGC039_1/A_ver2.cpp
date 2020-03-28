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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string S;
//	cin >> S;
//	int K;
//	cin >> K;
//
//	lint S_sz = S.size();
//	if (S == string(S_sz, S[0])) {
//		cout << K * S_sz / 2 << "\n";
//		return 0;
//	}
//
//	lint cnt1 = 0, cnt2 = 0;
//	char prev = S[0];
//	for (int i = 1; i < S_sz; i++) {
//
//		if (S[i] == prev) {
//			cnt1++;
//			prev = '*';
//		}
//		else prev = S[i];
//	}	
//	prev = S[0];
//	for (int i = 1; i < 2 * S_sz; i++) {
//
//		if (S[i % S_sz] == prev) {
//			cnt2++;
//			prev = '*';
//		}
//		else prev = S[i % S_sz];
//	}
//
//	cout << cnt1 + (cnt2 - cnt1) * (K - 1) << "\n";
//
//	return 0;
//}