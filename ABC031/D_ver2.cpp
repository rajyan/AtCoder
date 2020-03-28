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
//lint mypow(lint a, lint n) {
//	lint res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a;
//		a = a * a;
//		n >>= 1;
//	}
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int K, N;
//	cin >> K >> N;
//
//	vector<string> v(N), w(N);
//	for (int i = 0; i < N; i++) cin >> v[i] >> w[i];
//
//	auto judge = [&](auto &len) {
//
//		vector<string> ans(K);
//		for (int i = 0; i < N; i++) {
//
//			int w_idx = 0;
//			for (int j = 0; j < v[i].size(); j++){
//
//				int v_idx = v[i][j] - '1';
//
//				if (w_idx + len[v_idx] > w[i].size()) return;
//				string w_sub = w[i].substr(w_idx, len[v_idx]);
//				w_idx += len[v_idx];
//
//				if (ans[v_idx] == "") ans[v_idx] = w_sub;
//				else if (ans[v_idx] != w_sub) return;
//
//				if ((j == v[i].size() - 1) ^ (w_idx == w[i].size())) return;
//
//			}
//		}
//
//		for (const auto &e : ans) cout << e << "\n";
//		exit(0);
//
//	};
//
//	for (int ternary = 0; ternary < mypow(3, K + 1); ternary++) {
//
//		vector<int> len(K);
//		for (int i = 0; i < K; i++) len[i] = ternary / mypow(3, i) % 3 + 1;
//
//		judge(len);
//
//	}
//
//	exit(1);
//}