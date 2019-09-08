//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//typedef long long lint;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << p.first << " " << p.second;
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << "[" << e << "] ";
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
//	vector<pair<int, int>> a(N);
//	for (int i = 0; i < N; i++) {
//		cin >> a[i].first;
//		a[i].second = i;
//	}
//	
//	auto b = a;
//	sort(b.begin(), b.end());
//	DMP(a, b);
//
//	vector<int> idx(N);
//	for (int i = 0; i < N; i++) idx[b[i].second] = i;
//
//	vector<pair<int, int>> ans;
//	for (int i = 0; i < N; i++) {
//		if (idx[a[i].second] != i) ans.emplace_back(i, idx[a[i].second]);
//		swap(a[i], a[idx[a[i].second]]);
//	}
//	assert(a == b);
//
//	cout << ans.size() << "\n";
//	for (const auto &e : ans) cout << e.first + 1 << " " << e.second + 1 << "\n";
//
//	return 0;
//}