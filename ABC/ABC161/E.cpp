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
//	int N, K, C;
//	cin >> N >> K >> C;
//
//	string S;
//	cin >> S;
//
//	vector<int> dp(N);
//	for (int i = 0; i < N; i++) {
//		if(i != N - 1) chmax(dp[i + 1], dp[i]);
//		if (S[i] == 'o') {
//			dp[i]++;
//			if(i + C + 1 < N) chmax(dp[i + C + 1], dp[i]);
//		}
//		else {
//			dp[i] = 0;
//		}
//	}
//	DMP(dp);
//
//	int k = K, cnt = 0, first = N - 1;
//	vector<int> ans;
//	for (int i = N - 1; i >= 0; i--) {
//		
//		if (S[i] == 'x') continue;
//
//		if (dp[i] >= k) {
//			if (cnt == 0) first = i;
//			cnt++;
//		}
//		else {
//			if (cnt == 1) {
//				ans.emplace_back(first + 1);
//			}
//			i = min(first - C, i + 1);
//			k--;
//			cnt = 0;
//		}
//
//	}
//	if (cnt == 1) ans.emplace_back(first + 1);
//
//	reverse(ans.begin(), ans.end());
//	for (const auto &e : ans) cout << e << endl;
//
//	return 0;
//}