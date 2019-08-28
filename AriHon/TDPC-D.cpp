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
//	return vector<decltype(make_vec(tail...))> (s, make_vec(tail...));
//}
//
//vector<int> Pfact(lint num) {
//	vector<int> res(3);
//	while (num % 2 == 0) { num /= 2, res[0]++; }
//	while (num % 3 == 0) { num /= 3, res[1]++; }
//	while (num % 5 == 0) { num /= 5, res[2]++; }
//	if (num != 1) return vector<int>();
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	lint D;
//	cin >> N >> D;
//
//	auto pfact = Pfact(D);
//	if (pfact.empty()) {
//		cout << "0\n";
//		return 0;
//	}
//	DMP(pfact);
//
//	auto dp = make_vec(2, N + 3, N + 2, N + 2, 0.0);
//	dp[0][0][0][0] = 1.0;
//
//	for (int idx = 0; idx < N; idx++) {
//
//		for (int i = 0; i <= N; i++) {
//			for (int j = 0; j <= N; j++) {
//				for (int k = 0; k <= N; k++) {
//					
//					dp[(idx + 1) & 1][i][j][k]     += 1.0 / 6.0 * dp[idx & 1][i][j][k];
//					dp[(idx + 1) & 1][i+1][j][k]   += 1.0 / 6.0 * dp[idx & 1][i][j][k];
//					dp[(idx + 1) & 1][i][j+1][k]   += 1.0 / 6.0 * dp[idx & 1][i][j][k];
//					dp[(idx + 1) & 1][i+2][j][k]   += 1.0 / 6.0 * dp[idx & 1][i][j][k];
//					dp[(idx + 1) & 1][i][j][k+1]   += 1.0 / 6.0 * dp[idx & 1][i][j][k];
//					dp[(idx + 1) & 1][i+1][j+1][k] += 1.0 / 6.0 * dp[idx & 1][i][j][k];
//					dp[idx & 1][i][j][k] = 0.0;
//
//				}
//			}
//		}
//
//
//	}
//
//	DMP(dp);
//
//	double ans = 0.0;
//	for (int i = pfact[0]; i <= N + 2; i++) {
//		for (int j = pfact[1]; j <= N + 1; j++) {
//			for (int k = pfact[2]; k <= N + 1; k++) {
//				ans += dp[N & 1][i][j][k];
//			}
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}