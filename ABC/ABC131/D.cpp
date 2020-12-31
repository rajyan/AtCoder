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
//	int N;
//	cin >> N;
//
//	vector<pair<lint, lint>> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i].second >> A[i].first;
//	sort(A.begin(), A.end());
//
//	bool flag = true;
//	lint cnt = 0;
//	for (int i = 0; i < N; i++) {
//
//		cnt += A[i].second;
//		if (cnt > A[i].first) {
//			flag = false;
//			break;
//		}
//	}
//
//	if (flag) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}