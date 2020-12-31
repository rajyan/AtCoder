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
//	int n, k;
//	cin >> n >> k;
//
//	vector<string> card(n);
//	for (int i = 0; i < n; i++) cin >> card[i];
//	DMP(card);
//
//	vector<string> ans; ans.reserve(210);
//	vector<int> use(n);
//	fill(use.end() - k, use.end(), 1);
//	do {
//
//		vector<string> memo; memo.reserve(k);
//		for (int i = 0; i < n; i++) if (use[i]) memo.emplace_back(card[i]);
//
//		vector<int> ord(k);
//		iota(ord.begin(), ord.end(), 0);
//		do {
//			string s;
//			for (int i = 0; i < k; i++) s += memo[ord[i]];
//			ans.emplace_back(s);
//		}
//		while (next_permutation(ord.begin(), ord.end()));
//
//	} while (next_permutation(use.begin(), use.end()));
//
//	sort(ans.begin(), ans.end());
//	ans.erase(unique(ans.begin(), ans.end()), ans.end());
//	cout << ans.size() << "\n";
//
//	return 0;
//}