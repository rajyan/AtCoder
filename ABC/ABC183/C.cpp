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
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//int main() {
//
//	int N, K;
//	cin >> N >> K;
//
//	auto T = make_vec(N, N, 0);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> T[i][j];
//		}
//	}
//	DMP(T);
//
//	vector<int> path(N);
//	iota(path.begin(), path.end(), 0);
//	int ans = 0;
//	do {
//		int sum = 0;
//		for (int i = 0; i < N - 1; i++) {
//			sum += T[path[i]][path[i + 1]];
//		}
//		sum += T[path.back()][path.front()];
//		if (sum == K) ans++;
//
//	} while (next_permutation(path.begin(), path.end()));
//
//	cout << ans / N << "\n";
//
//	return 0;
//}
