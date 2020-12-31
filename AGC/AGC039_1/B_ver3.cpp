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
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
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
//	vector<vector<int>> d(N, vector<int>(N, INF));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			char c;
//			cin >> c;
//			if(c == '1') d[i][j] = 1;
//		}
//	}
//
//	// 2���O���t�Ȃ��ԉ����_�Ƃ̋���+1�A�����łȂ��Ȃ�-1�������ƂȂ�
//
//	vector<int> visited(N, -1);
//
//	auto dfs = [&](auto &&f, auto now) -> bool {
//		
//		bool res = true;
//		for (int i = 0; i < N; i++) {
//			if (d[now][i] == 1) {
//				if (visited[i] == -1) {
//					visited[i] = (visited[now] ^ 1);
//					res &= f(f, i);
//				}
//				else if ((visited[now] ^ visited[i]) == 0) return false;
//			}
//		}
//
//		return res;
//
//	};
//
//	visited[0] = 0;
//	if (!dfs(dfs, 0)) {
//		cout << -1 << "\n";
//		return 0;
//	}
//
//	for (int k = 0; k < N; k++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				chmin(d[i][j], d[i][k] + d[k][j]);
//			}
//		}
//	}
//
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i == j) continue;
//			chmax(ans, d[i][j]);
//		}
//	}
//
//	cout << ans + 1 << "\n";
//
//	return 0;
//}