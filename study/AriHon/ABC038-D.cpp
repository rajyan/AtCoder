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
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
//	return os;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<pair<int, int>> box(N);
//	for (int i = 0; i < N; i++) cin >> box[i].first >> box[i].second;
//	sort(box.begin(), box.end(), [](auto l, auto r) {
//		return l.first < r.first || l.first == r.first && l.second > r.second;
//	});
//	DMP(box);
//
//	vector<pair<int, int>> dp(N, { 0, INF });
//	for (int i = 0; i < (int)box.size(); i++) {
//		auto tmp = lower_bound(dp.begin(), dp.end(), box[i], [](auto l, auto r) {
//			return l.second < r.second;
//		});
//		*tmp = box[i];
//	}
//
//	DMP(dp);
//	cout << lower_bound(dp.begin(), dp.end(), make_pair(0, INF), [](auto l, auto r) { 
//		return l.second < r.second;
//	}) 
//		- dp.begin() << "\n";
//
//	return 0;
//}