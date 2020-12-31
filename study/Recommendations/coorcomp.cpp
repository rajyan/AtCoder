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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<int>> city(N);
//	vector<int> P(M), Y(M);
//	for (int i = 0; i < M; i++) {
//		cin >> P[i] >> Y[i];
//		P[i]--;
//		city[P[i]].emplace_back(Y[i]);
//	}
//	
//	for (int i = 0; i < N; i++) {
//		sort(city[i].begin(), city[i].end());
//		city[i].erase(unique(city[i].begin(), city[i].end()), city[i].end());
//	}
//
//	for (int i = 0; i < M; i++) {
//		int id = lower_bound(city[P[i]].begin(), city[P[i]].end(), Y[i]) - city[P[i]].begin();
//		cout << setw(6) << setfill('0') << P[i] + 1 << setw(6) << setfill('0') << id + 1 << "\n";
//	}
//
//	return 0;
//}