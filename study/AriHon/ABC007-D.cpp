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
//	lint A, B;
//	cin >> A >> B;
//
//	auto contain49 = [](string str) {
//	
//		auto dp = make_vec(str.size() + 1, 2, 2, lint(0));
//		dp[0][0][0] = 1;
//
//		for (int i = 0; i < str.size(); i++) {
//
//			int now = str[i] - '0';
//			dp[i + 1][0][1] = dp[i][0][1] || (now == 4 || now == 9);
//			dp[i + 1][0][0] = !dp[i + 1][0][1];
//
//			for (int d = 0; d <= 9; d++) {
//				dp[i + 1][1][1] += dp[i][1][1] + (d < now) * dp[i][0][1];
//				dp[i + 1][1][d == 4 || d == 9] += dp[i][1][0] + (d < now) * dp[i][0][0];
//			}
//
//		}
//
//		DMP(dp);
//
//		return dp[str.size()][1][1] + dp[str.size()][0][1];
//	};
//	
//	cout << contain49(to_string(B)) - contain49(to_string(A - 1)) << "\n";
//
//	return 0;
//}