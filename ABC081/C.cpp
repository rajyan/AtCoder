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
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <typename T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//	
//	map<int, int> mp;
//	int tmp;
//	for (int i = 0; i < N; i++) {
//		cin >> tmp;
//		mp[tmp]++;
//	}
//
//	if (mp.size() <= K) cout << 0 << "\n";
//	else {
//		
//		vector<int> mem;
//		mem.reserve(mp.size());
//		for (const auto &e : mp) mem.emplace_back(e.second);
//		sort(mem.begin(), mem.end());
//
//		int ans = 0;
//		for (int i = 0; i < mp.size() -K; i++) {
//			ans += mem[i];
//		}
//
//		cout << ans << "\n";
//	}
//
//
//	return 0;
//}