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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<lint> a(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//	int max_idx = max_element(a.begin(), a.end()) - a.begin();
//	int min_idx = min_element(a.begin(), a.end()) - a.begin();
//
//	vector<pair<int, int>> ans;
//	ans.reserve(2 * N);
//
//	auto add_max = [&]() {
//		for (int i = 0; i < N - 1; i++) {
//			int twice = 2;
//			while (twice) {
//				if (a[i] > a[i + 1]) {
//					a[i + 1] += a[max_idx];
//					ans.emplace_back(max_idx + 1, i + 1 + 1);
//					if (a[i + 1] > a[max_idx]) max_idx = i + 1;
//				}
//				twice--;
//			}
//		}
//	};
//
//	auto add_min = [&]() {
//		for (int i = N - 2; i >= 0; i--) {
//			int twice = 2;
//			while (twice) {
//				if (a[i] > a[i + 1]) {
//					a[i] += a[min_idx];
//					ans.emplace_back(min_idx + 1, i + 1);
//					if (a[i] < a[min_idx]) min_idx = i;
//				}
//				twice--;
//			}
//		}
//	};
//
//	if (a[min_idx] > 0) add_max();
//	else if (a[max_idx] <= 0) add_min();
//	else if (abs(a[max_idx]) > abs(a[min_idx])) add_max();
//	else add_min();
//
//	DMP(a);
//	cout << ans.size() << "\n";
//	for (const auto &e : ans) cout << e.first << " " << e.second << "\n";
//
//	return 0;
//}