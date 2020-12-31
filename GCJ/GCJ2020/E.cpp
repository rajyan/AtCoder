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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
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
//vector<vector<int>> search(int N, int K) {
//
//	vector<vector<int>> ans;
//
//	auto dfs = [&](auto &&f, auto a, int inow, int jnow) -> void {
//
//		if (ans.size() != 0) return;
//
//		if (jnow == N) {
//			int res = 0;
//			for (int i = 0; i < N; i++) {
//				res += a[i][i];
//			}
//			
//			if (res == K) {
//				ans = a;
//			}
//			return;
//		}
//
//		vector<int> iused(N);
//		for (int j = 0; j < jnow; j++) {
//			iused[a[inow][j] - 1] = 1;
//		}	
//		vector<int> jused(N);
//		for (int i = 0; i < inow; i++) {
//			jused[a[i][jnow] - 1] = 1;
//		}
//		for (int num = 0; num < N; num++) {
//			if (!iused[num] && !jused[num]) {
//				a[inow][jnow] = num + 1;
//				if (inow == N - 1) f(f, a, 0, jnow + 1);
//				else f(f, a, inow + 1, jnow);
//			}
//		}
//
//	};
//
//	dfs(dfs, vector<vector<int>>(N, vector<int>(N)), 0, 0);
//	return ans;
//
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int T;
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//
//		int N, K;
//		cin >> N >> K;
//
//		cout << "Case #" << i + 1 << ": ";
//		auto ans = search(N, K);
//		if (ans.size() == 0) {
//			cout << "IMPOSSIBLE" << "\n";
//		}
//		else {
//			cout << "POSSIBLE" << "\n";
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					cout << ans[i][j];
//					if(j != N - 1) cout << " ";
//					else cout << endl;
//				}
//			}
//		}
//
//	}
//
//	return 0;
//}