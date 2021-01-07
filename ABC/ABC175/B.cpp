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
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<int> L(N);
//	for (int i = 0; i < N; i++) cin >> L[i];
//	sort(L.begin(), L.end());
//
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//			for (int k = j + 1; k < N; k++) {
//				if (L[i] == L[j] || L[j] == L[k] || L[k] == L[i]) continue;
//				if (L[i] + L[j] > L[k]) ans++;
//			}
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
