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
//using lint = long long;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	vector<pair<int,int>> A(3);
//	for (int i = 0; i < 3; i++) {
//		cin >> A[i].first;
//		A[i].second = A[i].first % 2;
//	}
//
//	sort(A.begin(), A.end());
//
//	int ans = 0;
//	if (A[0].second != A[1].second || A[1].second != A[2].second) {
//		ans++;
//		for (int i = 0; i < 3; i++) {
//			if (A[i].second == A[(i + 1) % 3].second) {
//				A[i].first++, A[(i + 1) % 3].first++;
//				break;
//			}
//		}
//
//	}
//	ans += (A[2].first * 2 - A[1].first - A[0].first) / 2;
//	cout << ans << "\n";
//
//	return 0;
//}