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
//	int N, M;
//	cin >> N >> M;
//
//	int X, Y;
//	cin >> X >> Y;
//
//	vector<int> a(N), b(M);
//	for (int i = 0; i < N; i++) cin >> a[i];
//	for (int i = 0; i < M; i++) cin >> b[i];
//
//	int ans = 0;
//	int time = 0;
//	while (true) {
//
//		auto it_a = lower_bound(a.begin(), a.end(), time);
//		if (it_a == a.end()) break;
//		
//		time = *it_a + X;
//
//		auto it_b = lower_bound(b.begin(), b.end(), time);
//		if (it_b == b.end()) break;
//
//		time = *it_b + Y;
//
//		ans++;
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}