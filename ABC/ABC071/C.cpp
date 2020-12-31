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
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...)
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
//	lint a;
//	map<lint, int> mp;
//	for (int i = 0; i < N; i++) {
//		cin >> a;
//		mp[a]++;
//	}
//
//	vector<lint> rec;
//	for (const auto &e : mp) if (e.second >= 2) rec.emplace_back(e.first);
//
//	int sz = (int)rec.size();
//	if (sz == 0 || sz == 1 && mp[rec[0]] < 4) cout << "0\n";
//	else if (sz == 1 && mp[rec[0]] >= 4) cout << rec[0] * rec[0] << "\n";
//	else {
//		sort(rec.begin(), rec.end());
//		if (mp[rec[sz - 1]] >= 4) cout << rec[sz-1] * rec[sz-1] << "\n";
//		else cout << rec[sz - 1] * rec[sz - 2] << "\n";
//	}
//
//	return 0;
//}