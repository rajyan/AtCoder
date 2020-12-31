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
//struct pnt {
//	int x, y;
//	constexpr pnt(int x = 0, int y = 0) noexcept : x(x), y(y) {};
//	constexpr bool operator==(const pnt &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator<(const pnt & rhs) const noexcept { return x < rhs.x || x == rhs.x && y < rhs.y; }
//	constexpr pnt operator+(const pnt &rhs) const noexcept { return pnt(x + rhs.x, y + rhs.y); }
//	constexpr pnt operator-(const pnt &rhs) const noexcept { return pnt(x - rhs.x, y - rhs.y); }
//	constexpr pnt operator-() const noexcept { return pnt(-x, -y); }
//	constexpr int operator*(const pnt &rhs) const noexcept { return x * rhs.x + y * rhs.y; }
//	friend istream& operator>>(istream& is, pnt &p) { return is >> p.x >> p.y; }
//	friend ostream& operator<<(ostream& os, const pnt &p) { return os << p.x << " " << p.y << "\n"; }
//	constexpr pnt nor(const pnt &rhs) const noexcept { return pnt(rhs.y, -rhs.x); }
//	template<class T> T& operator[](vector<vector<T>> &v) { return v[x][y]; }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	pnt A, B;
//	cin >> A >> B;
//
//	int N;
//	cin >> N;
//
//	vector<pnt> XY(N);
//	for (int i = 0; i < N; i++) cin >> XY[i];
//
//	auto det = [&](pnt p, pnt q) { return p.x * q.y - p.y * q.x; };
//	auto intersect = [&](pnt P, pnt Q) {
//		
//		return (det(A - B, P - B) > 0) ^ (det(A - B, Q - B) > 0) &&
//				((det(P - Q, B - Q) > 0) ^ (det(P - Q, A - Q) > 0));
//
//	};
//
//	int cnt = 0;
//	for (int i = 0; i < N; i++) if (intersect(XY[i], XY[(i+1)%N])) cnt++;
//
//	assert(cnt % 2 == 0);
//	cout << 1 + cnt / 2 << "\n";
//
//	return 0;
//}