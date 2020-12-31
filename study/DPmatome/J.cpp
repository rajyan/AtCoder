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
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	auto dp = make_vec(301, 301, 301, 0.0);
//
//	auto dfs = [&](auto &&f, int i, int j, int k) -> double {
//
//		if (dp[i][j][k] != 0.0) return dp[i][j][k];
//
//		double res = 0.0;
//		int sum = i + j + k; // res += dfs(i, j, k) * (N - i + j + k) / N;
//		if (sum == 0.0) return res;
//		if (k > 0) res += f(f, i, j + 1, k - 1) * k / sum;
//		if (j > 0) res += f(f, i + 1, j - 1, k) * j / sum;
//		if (i > 0) res += f(f, i - 1, j, k) * i / sum;
//
//		dp[i][j][k] = res + (double)N / sum;
//
//		return dp[i][j][k];
//
//	};
//
//	vector<int> a(3);
//	for (int i = 0; i < N; i++) {
//		int in;
//		cin >> in;
//		in--;
//		a[in]++;
//	}
//
//	cout << fixed << setprecision(10);
//	cout << dfs(dfs, a[0], a[1], a[2]) << "\n";
//
//	return 0;
//}
