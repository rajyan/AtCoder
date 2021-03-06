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
//inline bool chmax(T &a, T b) { return a < b && (a = b, true); }
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
//	vector<vector<int>> emp(N);
//	for (int i = 0; i < N - 1; i++) {
//		int b;
//		cin >> b; b--;
//		emp[b].emplace_back(i + 1);
//	}
//	DMP(emp[0]);
//
//	vector<int> sal(N);
//	auto dfs = [&](auto &&f, int id) -> int {
//		
//		int res = 0;
//		if (emp[id].empty()) res = 1;
//		else {
//			int minsal = INF, maxsal = 0;
//			for (const auto &e : emp[id]) {
//				if (!sal[e]) sal[e] = f(f, e);
//				chmin(minsal, sal[e]);
//				chmax(maxsal, sal[e]);
//			}
//			res = minsal + maxsal + 1;
//		}
//
//		return res;
//
//	};
//
//	cout << dfs(dfs, 0) << "\n";
//	DMP(sal);
//
//	return 0;
//}