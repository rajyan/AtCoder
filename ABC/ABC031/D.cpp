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
//template <class T>
//ostream &operator<<(ostream &os, const set<T> &st) {
//	os << "( ";
//	for (const auto &e : st) os << e << " ";
//	os << ")\n";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
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
//	vector<vector<set<string>>> ans(N, vector<set<string>>(K));
//	auto dfs = [&](auto&&f, const auto &v_i, const auto &w_i, vector<string> vec, const int idx) -> void {
//		
//		if (v_i == v[idx].end() && w_i == w[idx].end()) {
//			for (int i = 0; i < K; i++)	ans[idx][i].emplace(vec[i]);
//			return;
//		}
//		else if (v_i >= v[idx].end() || w_i >= w[idx].end()) return;
//
//		auto &now = vec[*v_i - '0' - 1];
//		if (now == "") {
//			for (int i = 1; i <= 3; i++) {
//				now = string(w_i, w_i + i);
//				f(f, v_i + 1, w_i + i, vec, idx);
//				if (w_i + i == w[idx].end()) break;
//			}
//		}
//		else {
//			for (int i = 1; i <= 3; i++) {
//				if (now != string(w_i, w_i + i)) continue;
//				f(f, v_i + 1, w_i + i, vec, idx);
//				if (w_i + i == w[idx].end()) break;
//			}
//		}
//
//		return;
//
//	};
//
//	for (int i = 0; i < N; i++) dfs(dfs, v[i].begin(), w[i].begin(), vector<string>(K), i);
//
//	DMP(ans);
//
//	return 0;
//}