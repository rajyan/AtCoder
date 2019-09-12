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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> A(N);
//	for (int i = 0; i < K; i++) {
//		int a;
//		cin >> a;
//		--a;
//		A[a] = 1;
//	}
//
//	vector<string> S(N);
//	for (int i = 0; i < N; i++) cin >> S[i];
//
//	auto CommonSubstr = [](string &l, string &r) {
//		string csub = "";
//		int cnt = 0;
//		while ((int)l.size() > cnt && (int)r.size() > cnt) {
//			if (l[cnt] == r[cnt]) csub += l[cnt];
//			else break;
//			cnt++;
//		}
//		return csub;
//	};
//
//	string ans = "*";
//	for (int i = 0; i < N; i++) {
//		if (A[i]) {
//			if (ans == "*") ans = S[i];
//			else ans = CommonSubstr(ans, S[i]);
//		}
//	}
//
//	int rem = -1;
//	for (int i = 0; i < N; i++) {
//		if (!A[i]) {
//			auto tmp = CommonSubstr(ans, S[i]);
//			chmax(rem, (int)tmp.size());
//		}
//	}
//
//	if (rem >= (int)ans.size()) cout << -1 << "\n";
//	else cout << ans.substr(0, rem + 1) << "\n";
//
//	return 0;
//}