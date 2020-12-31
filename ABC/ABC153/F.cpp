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
//	int N, D, A;
//	cin >> N >> D >> A;
//
//	vector<pair<int, int>> XH(N);
//	for (int i = 0; i < N; i++) cin >> XH[i].first >> XH[i].second;
//	sort(XH.begin(), XH.end());
//
//	for (int i = 0; i < N; i++) {
//		XH[i].second = (XH[i].second + A - 1) / A;
//	}
//
//	queue<pair<lint, lint>> que;
//	lint ans = 0;
//	lint now = 0;
//	for (int i = 0; i < N; i++) {
//
//		while (!que.empty() && que.front().first < XH[i].first) {
//			now -= que.front().second;
//			que.pop();
//		}
//
//		lint sub = XH[i].second - now;
//		if (sub > 0) {
//			ans += sub;
//			now = XH[i].second;
//			que.emplace(XH[i].first + 2 * D, sub);
//		}
//
//		DMP(ans, now);
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}