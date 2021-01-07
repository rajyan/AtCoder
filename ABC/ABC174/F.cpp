//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <unordered_map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//#ifdef _DEBUG
//#include "../../../library/src/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
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
//template<typename T, typename F>
//class BinaryIndexedTree {
//private:
//	//using F = function<T(T, T)>;
//	vector<T> data;
//	F _add, sub;
//
//public:
//	BinaryIndexedTree(int sz, F f) : data(sz + 1) {
//		_add = f;
//	}
//
//	T sum(int k) {
//		T res = 0;
//		for (++k; k > 0; k -= k & -k) res = _add(res, data[k]);
//		return res;
//	}
//
//	void add(int k, T x) {
//		for (++k; k < data.size(); k += k & -k) data[k] = _add(data[k], x);
//	}
//};
//
//
//int main() {
//
//	int N, Q;
//	cin >> N >> Q;
//
//	vector<lint> C(N);
//	for (int i = 0; i < N; i++) cin >> C[i];
//	unordered_map<lint, lint> prev;
//	vector<pnt> xy;
//	for (int i = 0; i < N; i++) {
//		auto it = prev.find(C[i]);
//		if (it != prev.end()) {
//			xy.emplace_back(it->second, i);
//		}
//		prev[C[i]] = i;
//	}
//	sort(xy.begin(), xy.end(), greater<>());
//	DMP(xy);
//
//	vector<pair<pnt, int>> query(Q);
//	for (int i = 0; i < Q; i++) {
//		pnt q;
//		cin >> q;
//		q -= pnt(1, 1);
//		query[i] = { q, i };
//	}
//	sort(query.begin(), query.end(), greater<>());
//	DMP(query);
//
//	int n = 0;
//	vector<int> ans(Q);
//	auto f = [](int l, int r) -> int { return l + r; };
//	BinaryIndexedTree<lint, decltype(f)> BIT(N, f);
//	for (const auto& e : query) {
//		auto& [p, i] = e;
//		while (n < xy.size() && xy[n].x >= p.x) {
//			BIT.add(xy[n].y, 1);
//			n++;
//		}
//		ans[i] = p * pnt(-1, 1) + 1 - (BIT.sum(p.y) - BIT.sum(p.x));
//	}
//
//	for (const auto& e : ans) cout << e << "\n";
//
//	return 0;
//}
//
