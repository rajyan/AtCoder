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
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007, INF = 1111111111; 
//using namespace std;
//typedef long long lint;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, X;
//	cin >> N >> X;
//
//	vector<int> T(N);
//	
//	struct c { 
//		int l, u, idx;
//		bool operator<(c &rhs) const { return u < rhs.u; }
//	};
//	vector<c> w(N);
//	for (int i = 0; i < N; i++) {
//		cin >> T[i] >> w[i].l >> w[i].u;
//		w[i].idx = i;
//	}
//
//	sort(w.begin(), w.end());
//	auto tmp = w;
//
//	sort(w.rbegin(), w.rend());
//	vector<int> visited(N);
//
//	int cntw = 0, cnttmp = 0;
//	while (true) {
//		if (visited[w[cntw].idx] || cntw == N - 1) break;
//		else {
//			while (T[w[cntw].idx] < X) {
//
//				if (T[tmp[cnttmp].idx] >= X - T[w[cntw].idx]) {
//					T[tmp[cnttmp].idx] -= X - T[w[cntw].idx];
//					T[w[cntw].idx] = X;
//				}
//				else {
//					T[w[cntw].idx] += T[tmp[cnttmp].idx];
//					T[tmp[cnttmp].idx] = 0;
//					cnttmp++;
//				}
//			}
//			cntw++;
//		}
//
//	}
//
//	lint ans = 0;
//	for (const auto &elem : T) {
//
//		ans += elem;
//	}
//	cout << ans << "\n";
//
//	return 0;
//}