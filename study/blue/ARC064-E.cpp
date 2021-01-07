//#ifdef _DEBUG
//#include "../../../library/src/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
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
//	friend ostream& operator<<(ostream& os, const Point2D& p) { return os << p.x << " " << p.y << "\n"; }
//	template<class U> U& operator[](vector<vector<U>>& v) { return v[x][y]; }
//};
//
//using pnt = Point2D<lint>;
//
//template<class T>
//struct Edge {
//	int to;
//	T cost;
//	Edge() {}
//	Edge(int to, T cost) : to(to), cost(cost) {}
//	bool operator>(const Edge& r) const { return this->cost > r.cost; }
//};
//
//template<class T>
//vector<T> Dijkstra(const vector<vector<Edge<T>>>& edges, const int st) {
//
//	const int V = (int)edges.size();
//	const T inf = numeric_limits<T>::max() / 2;
//	vector<T> cost(V, inf);
//	cost[st] = 0;
//
//	priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> pq;
//	pq.emplace(st, cost[st]);
//
//	while (!pq.empty()) {
//
//		Edge<T> now(pq.top().to, pq.top().cost);
//		pq.pop();
//
//		if (cost[now.to] < now.cost) continue;
//		for (const Edge<T>& e : edges[now.to]) {
//			T tmp_cost = now.cost + e.cost;
//			if (cost[e.to] > tmp_cost) {
//				cost[e.to] = tmp_cost;
//				pq.emplace(e.to, cost[e.to]);
//			}
//		}
//	}
//
//	return cost; // min cost to vertex idx from st
//}
//
//int main() {
//
//	pnt start, goal;
//	cin >> start >> goal;
//
//	int N;
//	cin >> N;
//
//	vector<pnt> xy(N);
//	vector<int> r(N);
//	for (int i = 0; i < N; i++) {
//		cin >> xy[i] >> r[i];
//	}
//
//	xy.emplace_back(start);
//	xy.emplace_back(goal);
//	r.emplace_back(0);
//	r.emplace_back(0);
//
//	vector<vector<Edge<long double>>> edges(N + 2);
//	for (int i = 0; i < N + 2; i++) {
//		for (int j = i + 1; j < N + 2; j++) {
//			pnt sub = xy[i] - xy[j];
//			long double cost = max(sqrtl(sub * sub) - r[i] - r[j], .0L);
//			edges[i].emplace_back(j, cost);
//			edges[j].emplace_back(i, cost);
//			DMP(cost);
//		}
//	}
//
//	cout << Dijkstra(edges, N).back() << "\n";
//
//	return 0;
//}
