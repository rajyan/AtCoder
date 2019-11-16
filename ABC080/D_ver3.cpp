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
//	int N, C;
//	cin >> N >> C;
//
//	vector<int> s(N), t(N), c(N);
//	for (int i = 0; i < N; i++) {
//		cin >> s[i] >> t[i] >> c[i];
//		s[i]--, t[i]--, c[i]--;
//	}
//	DMP(s, t, c);
//
//	vector<vector<int>> memo(C + 1, vector<int>(100011));
//	for (int i = 0; i < N; i++) {
//		memo[c[i]][s[i]]++;
//		memo[c[i]][t[i] + 1]--;
//	}
//
//	for (int c = 0; c < C; c++) {
//		for (int i = 0; i < 100010; i++) {
//			memo[c][i + 1] += memo[c][i];
//		}
//	}
//	//DMP(memo);
//
//	int ans = 0;
//	for (int i = 0; i < 100011; i++) {
//		int cnt = 0;
//		for (int c = 0; c < C; c++) {
//			if (memo[c][i]) cnt++;
//		}
//		ans = max(ans, cnt);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}