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
//	int N, Q;
//	cin >> N >> Q;
//
//	struct rw { 
//		int s, t, x; 
//		rw(int s = 0, int t = 0, int x = 0) :s(s), t(t), x(x) {}
//	};
//	vector<rw> RW(N);
//	for (int i = 0; i < N; i++) {
//		int s, t, x;
//		cin >> s >> t >> x;
//		RW[i] = { s, t, x };
//	}
//	sort(RW.begin(), RW.end(), [](auto &l, auto &r) { return (l.s - l.x) < (r.s - r.x); });
//
//	int idx = 0;
//	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
//	for (int i = 0; i < Q; i++) {
//
//		int d;
//		cin >> d;
//
//		while (idx < N && RW[idx].s - RW[idx].x <= d) {
//			pq.emplace(RW[idx].x, RW[idx].t - RW[idx].x);
//			idx++;
//		}
//		while (!pq.empty() && pq.top().second <= d) pq.pop();
//
//		cout << (pq.empty() ? -1 : pq.top().first) << "\n";
//
//	}
//
//	return 0;
//}