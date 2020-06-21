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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : ", ");
//	return os;
//}
//
//template <class T>
//ostream &operator<<(ostream &os, const set<T> &st) {
//	for (const auto &e : st) os << e << " ";
//	return os;
//}
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
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int Q;
//	cin >> Q;
//
//	vector<map<char, int>> S(10); 
//	for (int q = 0; q < Q; q++) {
//
//		int u;
//		cin >> u;
//		//string mem;
//		//for (int i = 0; i < 10000; i++) {
//		//	string num, str;
//		//	cin >> num >> str;
//		//	if (num.size() == str.size()) {
//		//		for (int i = 1; i <= num[0] - '0'; i++) {
//		//			S[i][str[0]]++;
//		//		}
//		//	}
//		//	if (mem.size() <= 10){
//		//		for (int i = 0; i < str.size(); i++) {
//		//			if (none_of(mem.begin(), mem.end(), [&](auto &c) {return c == str[i]; })) mem += str[i];
//		//		}
//		//	}
//		//}
//
//		//string ans = "**********";
//		//for (int i = 0; i < 10; i++) {
//		//	int cnt = 0;
//		//	for (const auto &e : S[i]) {
//		//		if (none_of(ans.begin(), ans.end(), [&](auto &c) {return c == e.first; }) && chmax(cnt, e.second)) ans[i] = e.first;
//		//	}
//		//}
//
//		//for (int i = 0; i < 10; i++) {
//		//	if (none_of(ans.begin(), ans.end(), [&](auto &c) {return c == mem[i]; })) ans[0] = mem[i];
//		//}
//
//		string mem;
//		map<char, int> mp;
//		for (int i = 0; i < 10000; i++) {
//			string num, str;
//			cin >> num >> str;
//			mp[str[0]]++;
//			if (mem.size() <= 10) {
//				for (int i = 0; i < str.size(); i++) {
//					if (none_of(mem.begin(), mem.end(), [&](auto &c) {return c == str[i]; })) mem += str[i];
//				}
//			}
//
//		}
//
//		vector<pair<int, char>> tmp;
//		for (const auto &e : mp) tmp.emplace_back(e.second, e.first);
//		sort(tmp.begin(), tmp.end(), greater<>());
//
//		string ans = "*";
//		for (int i = 0; i < 9; i++) {
//			ans += tmp[i].second;
//		}
//		for (int i = 0; i < 10; i++) {
//			if (none_of(ans.begin(), ans.end(), [&](auto &c) {return c == mem[i]; })) ans[0] = mem[i];
//		}
//
//		cout << "Case #" << q + 1 << ": " << ans << endl;
//		
//	}
//
//	return 0;
//}