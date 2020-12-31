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
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	sort(A.begin(), A.end());
//	vector<pair<int, int>> BC(M);
//	for (int i = 0; i < M; i++) cin >> BC[i].second >> BC[i].first;
//	sort(BC.begin(), BC.end(), greater<pair<int, int>>());
//
//	int cnt = 0;
//	for (int i = 0; i < M; i++) {
//
//		for (int j = 0; j < BC[i].second; j++) {
//
//			if (BC[i].first > A[cnt]) {
//				A[cnt] = BC[i].first;
//				cnt++;
//			}
//			else {
//				i = M - 1;
//				break;
//			}
//
//		}
//
//	}
//
//	lint ans = 0;
//	for (const auto &elem : A) {
//
//		ans += elem;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}