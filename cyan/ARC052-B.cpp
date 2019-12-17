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
//	int N, Q;
//	cin >> N >> Q;
//
//	vector<vector<int>>  XRH(N, vector<int>(3));
//	for (int i = 0; i < N; i++) {
//		int x, r, h;
//		cin >> x >> r >> h;
//		XRH[i] = { x,r,h };
//	}
//
//	auto cone = [](auto r, auto h) {
//		const double PI = acos(-1);
//		return r * r * PI * h / 3.0;
//	};
//
//	vector<double> memo(50000);
//	for (int i = 0; i < N; i++) {
//
//		int X, R, H;
//		X = XRH[i][0];
//		R = XRH[i][1];
//		H = XRH[i][2];
//
//		for (int j = 0; j < H; j++) {
//
//			double h1 = H - j;
//			double h2 = H - (j + 1);
//			memo[j + X + 1] += cone(R * h1 / H, h1) - cone(R * h2 / H, h2);
//
//		}
//		DMP(memo);
//	}
//
//	for (int i = 1; i < 50000; i++) memo[i] += memo[i - 1];
//
//	cout << fixed << setprecision(10);
//	for (int i = 0; i < Q; i++) {
//		int l, r;
//		cin >> l >> r;
//		cout << memo[r] - memo[l] << "\n";
//	}
//
//	return 0;
//}