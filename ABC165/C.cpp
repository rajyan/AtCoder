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
//	int N, M, Q;
//	cin >> N >> M >> Q;
//
//	vector<vector<int>> v(Q, vector<int>(4));
//	for (int i = 0; i < Q; i++) {
//		cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
//		v[i][0]--, v[i][1]--;
//	}
//
//	auto dfs = [&](auto &&f, int ind, int now, vector<int> num) -> int {
//		
//		num[ind] = now;
//
//		if (ind == N) {
//			int sum = 0;
//			for (int i = 0; i < Q; i++) {
//				if (num[v[i][1]] - num[v[i][0]] == v[i][2]) sum += v[i][3];
//			}
//			return sum;
//		}
//		
//		int res = 0;
//		for (int i = now; i <= M; i++) {
//			chmax(res, f(f, ind + 1, i, num));
//		}
//
//		return res;
//	};
//
//	int ans = 0;
//	for (int i = 1; i <= M; i++) {
//		chmax(ans, dfs(dfs, 0, i, vector<int>(11)));
//	}
//
//	cout << ans << "\n";
//
//
//	return 0;
//}