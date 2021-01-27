//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <iomanip>
//#include <vector>
//#include <unordered_set>
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
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<class T>
//struct Point2D {
//	T x, y;
//	constexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};
//	constexpr Point2D(pair<T, T>& p) noexcept : x(p.first), y(p.second) {};
//	constexpr bool operator==(const Point2D& rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator!=(const Point2D& rhs) const noexcept { return !((*this) == rhs); }
//	constexpr bool operator< (const Point2D& rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
//	constexpr bool operator> (const Point2D& rhs) const noexcept { return rhs < (*this); }
//	constexpr bool operator<=(const Point2D& rhs) const noexcept { return !((*this) > rhs); }
//	constexpr bool operator>=(const Point2D& rhs) const noexcept { return !((*this) < rhs); }
//	constexpr Point2D  operator+ (const Point2D& rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }
//	constexpr Point2D  operator- (const Point2D& rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }
//	constexpr Point2D  operator* (const T& k) const noexcept { return { k * x, k * y }; }
//	constexpr Point2D  operator/ (const T& k) const noexcept { return { x / k, y / k }; }
//	constexpr Point2D& operator+=(const Point2D& rhs) noexcept { return ((*this) = (*this) + rhs); }
//	constexpr Point2D& operator-=(const Point2D& rhs) noexcept { return ((*this) = (*this) - rhs); }
//	constexpr Point2D& operator*=(const T& k) noexcept { return ((*this) = (*this) * k); }
//	constexpr Point2D& operator/=(const T& k) noexcept { return ((*this) = (*this) / k); }
//	constexpr Point2D  operator- () const noexcept { return { -x, -y }; }
//	constexpr T operator* (const Point2D& rhs) const noexcept { return x * rhs.x + y * rhs.y; }
//	constexpr Point2D nor() const noexcept { return { y, -x }; }
//	constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
//	friend istream& operator>>(istream& is, Point2D& p) { return is >> p.x >> p.y; }
//	friend ostream& operator<<(ostream& os, const Point2D& p) { return os << p.x << " " << p.y; }
//	template<class U> U& operator[](vector<vector<U>>& v) { return v[x][y]; }
//};
//
//using pnt = Point2D<lint>;
//
//inline uint64_t fnv1a_64(uint64_t data) {
//
//	uint64_t hash = 0xcbf29ce484222325;
//	constexpr uint64_t prime = 0x100000001b3;
//
//	while (data) {
//		hash = hash ^ (data % 10);
//		hash *= prime;
//		data /= 10;
//	}
//
//	return hash;
//}
//
//namespace std {
//	template <>
//	struct hash<pnt> {
//		size_t operator()(const pnt& p) const {
//			return fnv1a_64(p.x * 1000000 + p.y);
//		}
//	};
//}
//
//
//int main() {
//
//	int h, w, m;
//	cin >> h >> w >> m;
//
//	unordered_set<pnt> p;
//	vector<int> row(h), col(w);
//	for (int i = 0; i < m; i++) {
//		int r, c;
//		cin >> r >> c;
//		r--, c-- ;
//		p.emplace(r, c);
//		row[r]++;
//		col[c]++;
//	}
//
//	vector<int> indr;
//	int max_r = *max_element(row.begin(), row.end());
//	for (int i = 0; i < h; i++) {
//		if (max_r == row[i]) indr.emplace_back(i);
//	}
//
//	vector<int> indc;
//	int max_c = *max_element(col.begin(), col.end());
//	for (int i = 0; i < w; i++) {
//		if (max_c == col[i]) indc.emplace_back(i);
//	}
//
//	DMP(indr, indc);
//
//	if (indr.size() * indc.size() > m) {
//		cout << max_r + max_c << "\n";
//		return 0;
//	}
//
//	for (const auto& r : indr) {
//		for (const auto& c : indc) {
//			DMP(r, c);
//			if (p.find(pnt(r, c)) == p.end()) {
//				cout << max_r + max_c << "\n";
//				return 0;
//			}
//		}
//	}
//
//	cout << max_r + max_c - 1 << "\n";
//
//	return 0;
//}
