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
//	vector<lint> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	vector<lint> cnt(N), xorsum(N);
//	cnt[0] = 1, xorsum[0] = A[0];
//
//	for (int i = 1; i < N; i++) {
//
//		if ((A[i] & xorsum[i - 1]) == 0) {
//			xorsum[i] = (A[i] ^ xorsum[i - 1]);
//			cnt[i] = cnt[i - 1] + 1;
//		}
//		else if ((A[i] & A[i - 1]) == 0) {
//
//			xorsum[i] = A[i];
//			cnt[i] = 1;
//
//			int j = i - 1;
//			while ((xorsum[i] & A[j]) == 0) {
//				xorsum[i] ^= A[j];
//				j--;
//				cnt[i]++;
//			}
//
//		}
//		else {
//			xorsum[i] = A[i];
//			cnt[i] = 1;
//		}
//	}
//
//	lint ans = 0;
//	for (int i = 0; i < N; i++) {
//		ans += cnt[i];
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}