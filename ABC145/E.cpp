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
//template<class T>
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//int naive(const vector<pair<int, int>> &AB, const int T) {
//
//	int res = 0;
//	for (int bit = 0; bit < (1 << AB.size()); bit++) {
//
//		int last = 0, sum = 0, time = 0;
//		for (int i = 0; i < AB.size(); i++) {
//
//			if (bit & (1 << i)) {
//				int tmp = last;
//				if (chmax(last, AB[i].first)) time += tmp;
//				else time += AB[i].first;
//				sum += AB[i].second;
//			}
//			if (time >= T) break;
//		}
//
//		if (time < T) if(chmax(res, sum)) DMP(bit);
//
//	}
//
//	return res;
//
//}
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
//	int N, T;
//	cin >> N >> T;
//
//	vector<pair<int, int>> AB(N);
//	for (int i = 0; i < N; i++) cin >> AB[i].first >> AB[i].second;
//	sort(AB.begin(), AB.end());
//	
//	auto dp = make_vec(N + 1, T + 1, 0);
//	for (int i = 1; i <= N; i++) {
//		dp[i] = dp[i - 1];
//		for (int j = 0; j < T; j++) {
//			chmax(dp[i][min(j + AB[i - 1].first, T)], dp[i - 1][j] + AB[i - 1].second);
//		}
//	}
//	DMP(dp);
//
//	int ans = 0;
//	for (int j = 0; j <= T; j++) chmax(ans, dp[N][j]);
//	
//	cout << ans << "\n";
//	DMP(naive(AB, T));
//
//	return 0;
//}