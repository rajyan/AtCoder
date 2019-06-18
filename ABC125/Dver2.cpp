//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
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
//	int N;
//	cin >> N;
//
//	vector<lint> A(N),abs_A(A);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	lint ans = 0;
//	int micnt = 0, zerocnt = 0;
//	for (int i = 0; i < N; i++) {
//		abs_A[i] = abs(A[i]);
//		ans += abs(A[i]);
//		if (A[i] == 0) zerocnt++;
//		if (A[i] < 0) micnt++;
//	}
//
//	if (zerocnt > 0 || micnt % 2 == 0) {
//	
//		cout << ans;
//		return 0;
//	}
//	else {
//		
//		cout << ans - 2 * *min_element(abs_A.begin(), abs_A.end());
//		return 0;
//	}
//}