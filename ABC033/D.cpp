//#pragma GCC optimize ("-O3", "unroll-loops")
//#pragma GCC target ("arch=ivybridge")
//
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
//struct pnt {
//	int x, y;
//	constexpr pnt(int x = 0, int y = 0) : x(x), y(y) {};
//	constexpr bool operator==(const pnt &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator<(const pnt & rhs) const noexcept { return x < rhs.x || x == rhs.x && y < rhs.y; }
//	constexpr pnt operator+(const pnt &rhs) const noexcept { return pnt(x + rhs.x, y + rhs.y); }
//	constexpr pnt operator-(const pnt &rhs) const noexcept { return pnt(x - rhs.x, y - rhs.y); }
//	constexpr int operator*(const pnt &rhs) const noexcept { return x * rhs.x + y * rhs.y; }
//	constexpr pnt operator*(const int &rhs) const noexcept { return pnt(x * rhs, y * rhs); }
//	friend istream& operator>>(istream& is, pnt &p) { is >> p.x >> p.y; return is; }
//	template<class T> T& operator[](vector<vector<T>> &v) { return v[x][y]; }
//};
//
//pnt point[2000];
//int len_pow[2000][2000];
//int inner[3];
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++) cin >> point[i];
//	for (int i = 0; i < N - 1; i++) {
//		for (int j = i + 1; j < N; j++) {
//			pnt sub = point[i] - point[j];
//			len_pow[i][j] = sub * sub;
//		}
//	}
//
//	vector<int> ans(3);
//	for (int i = 0; i < N - 2; i++) {
//		for (int j = i + 1; j < N - 1; j++) {
//			for (int k = j + 1; k < N; k++) {
//				
//				int a = len_pow[i][j];
//				int b = len_pow[i][k];
//				int c = len_pow[j][k];
//
//				int max_e = max({ a,b,c });
//				int sub_e = a + b + c - 2 * max_e;
//
//				if (sub_e > 0) ans[0]++;
//				else if (sub_e == 0) ans[1]++;
//				else ans[2]++;
//
//			}
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
