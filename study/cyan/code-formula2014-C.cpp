//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//#include <random>
//#include <chrono>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//struct RandNum {
//
//	mt19937 mt;
//	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}
//
//	lint operator()(lint a, lint b) {
//		uniform_int_distribution<lint> dist(a, b);
//		return dist(mt);
//	}
//	lint operator() (lint b) { return (*this)(0LL, b); }
//
//	template<class Ite>
//	void shuf(Ite first, Ite last) { shuffle(first, last, mt); }
//
//};
//
//int main() {
//
//	string a, b;
//	cin >> a >> b;
//
//	vector<int> s(26), t(26);
//	for (const auto& c : a) s[c - 'a']++;
//	for (const auto& c : b) t[c - 'a']++;
//	DMP(s);
//
//	if (s != t) {
//		cout << "NO\n";
//		return 0;
//	}
//
//	int cnt = 0;
//	map<pair<char, char>, int> mp;
//	for (int i = 0; i < a.size(); i++) {
//		if (a[i] != b[i]) {
//			auto p = minmax(a[i], b[i]);
//			mp[p]++;
//			cnt++;
//		}
//	}
//	DMP(mp, cnt);
//
//	if (cnt > 6) {
//		cout << "NO\n";
//		return 0;
//	}
//
//	if (cnt == 0 && all_of(s.begin(), s.end(), [](auto c) { return c <= 1; })) {
//		cout << "NO\n";
//		return 0;
//	}
//
//	int p = 0;
//	for (const auto& [_, e] : mp) p += e / 2;
//
//	if (cnt == 4 && p != 2) {
//
//		set<char> st;
//		for (const auto& [k, _] : mp) {
//			st.emplace(k.first);
//			st.emplace(k.second);
//		}
//
//		if (st.size() != 4) {
//			cout << "NO\n";
//			return 0;
//		}
//	}
//
//	if (cnt == 4 && p == 2 && all_of(s.begin(), s.end(), [](auto c) { return c <= 1; })) {
//		cout << "NO\n";
//		return 0;
//	}
//
//	if (cnt == 5 && p != 1) {
//		cout << "NO\n";
//		return 0;
//	}
//
//	if (cnt == 6 && p != 3) {
//		cout << "NO\n";
//		return 0;
//	}
//
//	 cout << "YES\n";
//
//	return 0;
//}
