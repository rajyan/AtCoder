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
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	string S;
//	cin >> S;
//
//	auto query = [&](int k) {
//
//		lint c = 0, M_cnt = 0, C_cnt = 0, MC_cnt = 0;
//		lint ans = 0;
//		for (int a = 0; a < N; a++) {
//
//			if (S[a] == 'D') {
//				while (c < N && c - a < k) {
//					if (S[c] == 'M') M_cnt++;
//					if (S[c] == 'C') {
//						C_cnt++;
//						MC_cnt += M_cnt;
//					}
//					c++;
//				}
//				ans += MC_cnt;
//			}
//
//			else if (S[a] == 'M') {
//				M_cnt--;
//				MC_cnt -= C_cnt;
//			}
//
//			else if (S[a] == 'C') C_cnt--;
//
//		}
//
//		return ans;
//
//	};
//
//	int Q;
//	cin >> Q;
//	for (int i = 0; i < Q; i++) {
//		int k;
//		cin >> k;
//		cout << query(k) << "\n";
//	}
//
//	return 0;
//}