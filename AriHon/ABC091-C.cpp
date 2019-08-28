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
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<pair<int, int>> ab(N), cd(N);
//	for (int i = 0; i < N; i++) cin >> ab[i].first >> ab[i].second;
//	for (int i = 0; i < N; i++) cin >> cd[i].first >> cd[i].second;
//	sort(ab.begin(), ab.end(), greater<>());
//
//	vector<int> used(N);
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		int idx = -1;
//		for (int j = 0; j < N; j++) {
//			if (used[j]) continue;
//			if (ab[i].first < cd[j].first && ab[i].second < cd[j].second) {
//				if (idx == -1 || cd[idx].second > cd[j].second) idx = j;
//			}
//		}
//		if (idx != -1) {
//			used[idx] = 1;
//			ans++;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}