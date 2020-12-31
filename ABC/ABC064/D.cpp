//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//class UnionFind {
//private:
//	vector<int> data;
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
//
//public:
//	UnionFind(int size) : data(size, -1) { }
//	bool is_same(int x, int y) { return root(x) == root(y); }
//	int size(int x) { return -data[root(x)]; }
//
//	void unify(int x, int y) {
//		x = root(x); y = root(y);
//		if (x != y) {
//			if (data[y] < data[x]) swap(x, y);
//			data[x] += data[y]; data[y] = x;
//		}
//	}
//};
//
//template<class T = lint>
//struct Edge {
//	int from, to;
//	T cost;
//	Edge() {}
//	Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
//	bool operator>(const Edge &r) const { return this->cost > r.cost; }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	struct town { int x, y, idx; };
//	vector<town> t(N);
//	for (int i = 0; i < N; i++) {
//		cin >> t[i].x >> t[i].y;
//		t[i].idx = i;
//	}
//
//	// •Ó‚ÌŒó•â‚ð‚·‚×‚Äpriority_que‚É“ü‚ê‚é
//	priority_queue<Edge<>, vector<Edge<>>, greater<Edge<>>> pq;
//	// x‚ª‹ß‚¢“¯Žm
//	sort(t.begin(), t.end(), [&](town r, town l) {return r.x < l.x; });
//	for (int i = 0; i < N - 1; i++) pq.emplace(t[i].idx, t[i + 1].idx, t[i + 1].x - t[i].x);
//	// y‚ª‹ß‚¢“¯Žm
//	sort(t.begin(), t.end(), [&](town r, town l) {return r.y < l.y; });
//	for (int i = 0; i < N - 1; i++) pq.emplace(t[i].idx, t[i + 1].idx, t[i + 1].y - t[i].y);
//
//	// kruskal–@
//	UnionFind uf(N);
//	lint ans = 0;
//	while (!pq.empty()) {
//		
//		auto now = pq.top(); pq.pop();
//
//		if (!uf.is_same(now.from, now.to)) {
//			uf.unify(now.from, now.to);
//			ans += now.cost;
//		}
//	
//	}
//
//	assert(uf.size(0) == N);
//
//	cout << ans << "\n";
//
//	return 0;
//}