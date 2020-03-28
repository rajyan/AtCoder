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
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M, P, Q, R;
//	cin >> N >> M >> P >> Q >> R;
//
//	vector<vector<int>> choco(R);
//	for (int i = 0; i < R; i++) {
//		int x, y, z;
//		cin >> x >> y >> z;
//		x--, y--;
//		choco[i] = { x, y, z };
//	}
//
//	int ans = 0;
//	vector<int> girls(N);
//	fill(girls.end() - P, girls.end(), 1);
//	do {
//
//		vector<int> boys(M);
//		for (int i = 0; i < R; i++) {
//			if (girls[choco[i][0]]) {
//				boys[choco[i][1]] += choco[i][2];
//			}
//		}
//		nth_element(boys.begin(), boys.begin() + Q, boys.end(), greater<int>());
//		chmax(ans, accumulate(boys.begin(), boys.begin() + Q, 0));
//
//	} while (next_permutation(girls.begin(), girls.end()));
//
//	cout << ans << "\n";
//
//	return 0;
//}