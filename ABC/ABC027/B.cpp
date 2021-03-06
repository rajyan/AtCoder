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
//	int N;
//	cin >> N;
//
//	vector<int> a(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//	int sum = accumulate(a.begin(), a.end(), 0);
//
//	if (sum % N != 0) {
//		cout << -1 << "\n";
//		return 0;
//	}
//
//	const int goal = sum / N;
//	int ans = 0, tmp = 0, cnt = 0;
//	for (int i = 0; i < N - 1; i++) {
//		tmp += a[i];
//		if (tmp == ++cnt * goal) tmp = cnt = 0;
//		else ans++;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}