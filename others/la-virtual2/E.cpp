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
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<int>> grid(N, vector<int>(M));
//	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) cin >> grid[i][j];
//	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) grid[i][j]--;
//
//	struct dat {
//		vector<int> mem;
//		int size = 0;
//	};
//
//	auto select = [&]() {
//
//		int mx = N - 1;
//		bool res = true;
//		while (res) {
//
//			vector<dat> D(M);
//			vector<int> ind(N);
//			queue<int> que;
//			for (int i = 0; i < N; i++) que.emplace(i);
//
//			while (!que.empty()) {
//
//				int now = que.front();
//				que.pop();
//				if (ind[now] == M) {
//					res = false;
//					break;
//				}
//
//				auto &Dnow = D[grid[now][ind[now]]];
//				if (Dnow.size != -1) {
//					if (Dnow.size < mx) {
//						Dnow.size++;
//						Dnow.mem.emplace_back(now);
//					}
//					else {
//						Dnow.size = -1;
//						for (const auto &e : Dnow.mem) que.emplace(e);
//						que.emplace(now);
//					}
//				}
//				else que.emplace(now);
//				ind[now]++;
//			}
//			
//			if (res) {
//				mx = 0;
//				for (int i = 0; i < M; i++) {
//					chmax(mx, D[i].size);
//				}
//				mx--;
//			}
//
//		}
//
//		return mx + 1;
//
//	};
//
//	cout << select() << "\n";
//
//	return 0;
//}