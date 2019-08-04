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
//	for (int i = 0; i < vec.size(); i++) {
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
//	dump(str + 1, t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//template <class T>
//class CuSum {
//private:
//	vector<T> cusum;
//	int len = 0;
//public:
//	// Constructors 
//	CuSum(vector<T> const &vec) : len(vec.size()), cusum(vec.size() + 1) {
//		for (int i = 0; i < len; i++) cusum[i + 1] = cusum[i] + vec[i];
//	}
//	CuSum(int N) : len(N), cusum(N + 1) {}
//	void add(int i, T x) { cusum[i + 1] += x; }
//	void init() { for (int i = 0; i < len; i++) cusum[i + 1] += cusum[i]; }
//
//	// partial sum of 0-indexed [l, r] 
//	T operator()(int l, int r) {
//		if (r < l || r < 0) {
//			assert(0);
//			return T(0);
//		}
//		else return cusum[r + 1] - cusum[l];
//	}
//	// 0-indexed
//	T operator[](int i) { return cusum[i + 1]; }
//	auto begin() { return cusum.begin(); }
//	auto end() { return cusum.end(); }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, C;
//	cin >> N >> C;
//
//	vector<int> s(N), t(N), c(N);
//	for (int i = 0; i < N; i++) cin >> s[i] >> t[i] >> c[i];
//
//	vector<vector<int>> memo(30, vector<int>(100000));
//
//	for (int i = 0; i < N; i++) {
//		for (int j = s[i]; j <= t[i]; j++) {
//			memo[c[i] - 1][j - 1] = 1;
//		}
//	}
//
//	int ans = 0;
//	for (int j = 0; j < 100000; j++) {
//		int tmp = 0;
//		for (int i = 0; i < 30; i++) {
//			tmp += memo[i][j];
//		}
//		ans = max(ans, tmp);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}