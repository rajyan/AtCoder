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
//	int N;
//	cin >> N;
//
//	vector<double> x(N), y(N);
//	for (int i = 0; i < N; i++) cin >> x[i] >> y[i];
//
//	double ans = .0;
//	vector<int> perm(N);
//	iota(perm.begin(), perm.end(), 0);
//	do {
//
//		double sum = .0;
//		for (int i = 0; i < N - 1; i++) {
//			sum += sqrt((x[perm[i]] - x[perm[i + 1]]) * (x[perm[i]] - x[perm[i + 1]]) +
//				(y[perm[i]] - y[perm[i + 1]]) * (y[perm[i]] - y[perm[i + 1]]));
//		}
//
//		ans += sum;
//
//	} while (next_permutation(perm.begin(), perm.end()));
//
//	for (int i = 1; i <= N; i++) ans /= i;
//	cout << fixed << setprecision(10) << ans << "\n";
//
//	return 0;
//}