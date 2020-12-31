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
//template<size_t N> struct solve {
//
//	lint lun[N + 5];
//
//	constexpr solve() : lun() {
//
//		for (int i = 1; i <= 9; i++) lun[i] = i;
//
//		for (int st = 1, idx = 10; idx <= N; st++) {
//
//			bool m_ok = (lun[st] % 10 != 0);
//			lun[idx*m_ok] = lun[st] * 10 + lun[st] % 10 - 1;
//			idx += m_ok;
//
//			lun[idx++] = lun[st] * 10 + lun[st] % 10;
//
//			bool p_ok = (lun[st] % 10 != 9);
//			lun[idx*p_ok] = lun[st] * 10 + lun[st] % 10 + 1;
//			idx += p_ok;
//
//		}
//
//	}
//
//};
//
//solve<100000> S;
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//	printf("%lld", S.lun[N]);
//
//	return 0;
//}
