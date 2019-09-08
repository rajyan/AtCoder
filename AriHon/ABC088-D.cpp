//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
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
//template <class T>
//const pair<T, T> operator+(const pair<T, T> &l,const pair<T, T> &r) { 
//	return { l.first + r.first,l.second + r.second }; 
//}
//
//template<class T>
//inline bool chmin(T &a, T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int H, W;
//	cin >> H >> W;
//
//	int blk = 0;
//	vector<vector<char>> grid(H, vector<char>(W));
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> grid[i][j];
//			if(grid[i][j] == '#') blk++;
//		}
//	}
//
//	auto ingrid = [&](pair<int,int> p) {
//		return 0 <= p.first&&p.first < H && 0 <= p.second&&p.second < W;
//	};
//
//	vector<vector<int>> memo(H, vector<int>(W, INF));
//	queue<pair<int,int>> que;
//	memo.front().front() = 0;
//	que.emplace(0, 0);
//
//	while (!que.empty()) {
//
//		auto now = que.front();
//		que.pop();
//
//		for (const auto &del : vector <pair<int, int>>{ {0, 1}, {1, 0}, {-1, 0}, {0, -1} }) {
//			auto next = now + del;
//			if (ingrid(next) && grid[next.first][next.second] != '#' &&
//				chmin(memo[next.first][next.second], memo[now.first][now.second] + 1)) que.emplace(next);
//		}
//
//	}
//
//	DMP(memo);
//
//	if (memo.back().back() == INF) cout << -1 << "\n";
//	else cout << H * W - blk - memo.back().back() - 1 << "\n";
//
//	return 0;
//}