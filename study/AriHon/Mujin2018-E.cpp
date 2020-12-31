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
//	int r, c;
//	pnt(int r = 0, int c = 0) :r(r), c(c) {};
//	bool operator==(const pnt &rhs) const { return r == rhs.r && c == rhs.c; }
//	bool operator<(const pnt & rhs) const { return r < rhs.r || r == rhs.r && c < rhs.c; }
//	const pnt operator+(const pnt &rhs) { return pnt(r + rhs.r, c + rhs.c); }
//	friend istream& operator>>(istream& is, pnt &p) { is >> p.c >> p.r; p.r--, p.c--; return is; }
//	template<class T> T& operator[](vector<vector<T>> &v) { return v[r][c]; }
//};
//
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M, K;
//	cin >> N >> M >> K;
//
//	string s;
//	cin >> s;
//
//	vector<vector<char>> grid(N, vector<char>(M));
//	pnt st, go;
//	for (int r = 0; r < N; r++) {
//		for (int c = 0; c < M; c++) {
//			cin >> grid[r][c];
//			if (grid[r][c] == 'S') st = { r,c };
//			if (grid[r][c] == 'G') go = { r,c };
//		}
//	}
//
//	vector<vector<int>> LRUD(4);
//	auto conv = [](char c) {
//		switch (c) {
//		case('L'): return 0;
//		case('R'): return 1;
//		case('U'): return 2;
//		case('D'): return 3;
//		}
//	};
//	for (int i = 0; i < K; i++) LRUD[conv(s[i])].emplace_back(i);
//
//	auto in_grid = [&](const pnt &p) {return 0 <= p.r && p.r < N && 0 <= p.c && p.c < M; };
//	vector<vector<lint>> cost(N, vector<lint>(M, LINF));
//	st[cost] = 0;
//	priority_queue<pair<lint, pnt>, vector<pair<lint, pnt>>, greater<pair<lint, pnt>>> que;
//	que.emplace(st[cost], st);
//	while (!que.empty()) {
//		lint cost_now;;
//		pnt now;
//		tie(cost_now, now) = que.top(); que.pop();
//		if (now == go) continue;
//		vector<pnt> d{ {0,-1}, {0,1}, {-1,0}, {1,0} }; // L: c--, R: c++, U:r++, D:r--
//		for (int i = 0; i < 4; i++) {
//			pnt next = now + d[i];
//			if (in_grid(next) && next[grid] != '#' && !LRUD[i].empty()) {
//				if (cost_now > next[cost]) continue;
//				auto it = lower_bound(LRUD[i].begin(), LRUD[i].end(), cost_now % K);
//				bool update = false;
//				if (it == LRUD[i].end()) update = chmin(next[cost], cost_now + K - cost_now % K + LRUD[i][0] + 1);
//				else update = chmin(next[cost], cost_now - cost_now % K + *it + 1);
//				if (update) que.emplace(next[cost], next);
//			}
//		}
//	}
//	DMP(cost);
//
//	if (go[cost] == LINF) cout << -1 << "\n";
//	else cout << go[cost] << "\n";
//
//	return 0;
//}
