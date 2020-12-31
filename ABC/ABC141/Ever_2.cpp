//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <unordered_map>
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
//template<class T>
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	string s;
//	cin >> s;
//
//	auto check = [&](int len) {
//
//		unordered_map<string, int> mp;
//		for (int j = 0; j <= N - len; j++) {
//			string tmp = s.substr(j, len);
//			auto itr = mp.find(tmp);
//			if (itr == mp.end()) mp.emplace(tmp, j);
//			else if (j - itr->second >= len) return true;
//		}
//		
//		return false;
//	};
//
//	vector<int> len(N/2 + 2);
//	iota(len.begin(), len.end(), 0);
//	cout << *partition_point(len.begin(), len.end(), check) - 1 << endl;
//
//	return 0;
//}
