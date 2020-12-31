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
//	double x, y;
//	constexpr pnt(double x = 0, double y = 0) noexcept : x(x), y(y) {};
//	constexpr bool operator==(const pnt &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator<(const pnt & rhs) const noexcept { return x < rhs.x || x == rhs.x && y < rhs.y; }
//	constexpr pnt operator+(const pnt &rhs) const noexcept { return pnt(x + rhs.x, y + rhs.y); }
//	constexpr pnt operator-(const pnt &rhs) const noexcept { return pnt(x - rhs.x, y - rhs.y); }
//	constexpr pnt operator-() const noexcept { return pnt(-x, -y); }
//	constexpr pnt operator*(const double &a) const noexcept { return pnt(a * x , a * y); }
//	friend istream& operator>>(istream& is, pnt &p) { return is >> p.x >> p.y; }
//	friend ostream& operator<<(ostream& os, const pnt &p) { return os << p.x << " " << p.y << "\n"; }
//	constexpr pnt nor(const pnt &rhs) const noexcept { return pnt(rhs.y, -rhs.x); }
//	template<class T> T& operator[](vector<vector<T>> &v) { return v[x][y]; }
//};
//
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<pnt> A(N), B(N);
//	for (int i = 0; i < N; i++) cin >> A[i].x >> A[i].y;
//	for (int i = 0; i < N; i++) cin >> B[i].x >> B[i].y;
//	DMP(A, B);
//
//	pnt GA, GB;
//	for (int i = 0; i < N; i++) {
//		GA = GA + A[i];
//		GB = GB + B[i];
//	}
//	GA = GA * (1.0 / N);
//	GB = GB * (1.0 / N);
//
//	DMP(GA, GB);
//
//	double maxA = 0.0, maxB = 0.0;
//	for (int i = 0; i < N; i++) {
//		pnt tmpA = A[i] - GA;
//		pnt tmpB = B[i] - GB;
//		
//		chmax(maxA, tmpA.x*tmpA.x + tmpA.y*tmpA.y);
//		chmax(maxB, tmpB.x*tmpB.x + tmpB.y*tmpB.y);
//
//		DMP(maxA, maxB);
//	}
//
//	cout << fixed << setprecision(10) << sqrt(maxB) / sqrt(maxA) << "\n";
//
//	return 0;
//}