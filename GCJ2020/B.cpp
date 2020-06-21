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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int Q;
//	cin >> Q;
//
//	for (int q = 0; q < Q; q++) {
//
//		int N;
//		cin >> N;
//
//		DMP(N);
//
//		int k = 0, r = 0, c = 0;
//
//		vector<map<int, int>> row(N), col(N);
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//
//				int now;
//				cin >> now;
//
//				if (i == j) k += now;
//
//				row[i][now]++;
//				col[j][now]++;
//
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			if (any_of(row[i].begin(), row[i].end(), [&](auto mp) {return mp.second >= 2; })) r++;
//			if (any_of(col[i].begin(), col[i].end(), [&](auto mp) {return mp.second >= 2; })) c++;
//		}
//
//		cout << "Case #" << q + 1 << ": " << k << ' ' << r << ' ' << c << endl;
//
//	}
//
//	return 0;
//}