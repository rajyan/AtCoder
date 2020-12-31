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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint N, M, D;
//	cin >> N >> M >> D;
//
//	vector<int> p(N);
//	iota(p.begin(), p.end(), 0);
//	DMP(p);
//
//	for (int i = 0; i < M; i++) {
//		int a;
//		cin >> a;
//		swap(p[a - 1], p[a]);
//		DMP(p);
//	}
//
//	vector<int> used(N);
//	vector<int> loop(N), ans(N);
//	for (int i = 0; i < N; i++) {
//		int loop_sz = 0;
//		if (!used[i]) {
//
//			int j = i;
//			while (!used[j]) {
//				loop[loop_sz++] = j;
//				used[j] = 1;
//				j = p[j];
//			}
//
//			for (int k = 0; k < loop_sz; k++) {
//				ans[loop[(k + D) % loop_sz]] = loop[k];
//				DMP(loop[k]);
//			}
//		}
//		DMP(loop);
//	}
//
//	for (int i = 0; i < N; i++) cout << ans[i] + 1 << "\n";
//	
//	return 0;
//}