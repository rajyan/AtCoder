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
//	lint N;
//	cin >> N;
//
//	string ans;
//
//	if (N >= 0) {
//
//		int st = 1;
//		for (int i = 0; i <= 32; i++) {
//			if (i % 2) st += (1LL << (i - 1));
//			ans += int((N - st + (1LL << (i + 1))) % (1LL << (i + 1)) < (1LL << i)) + '0';
//		}
//		reverse(ans.begin(), ans.end());
//	}
//	else {
//
//		int st = 1;
//		for (int i = 0; i <= 32; i++) {
//			if (i % 2) st += (1LL << (i - 1));
//			ans += int((-(N-1)/2 - st + (1LL << (i + 1))) % (1LL << (i + 1)) < (1LL << i)) + '0';
//		}
//		reverse(ans.begin(), ans.end());
//		ans += -N % 2 + '0';
//	}
//
//	for (int i = 0; i <= 32; i++) {
//		if (ans[i] == '1') {
//			cout << ans.substr(i) << "\n";
//			break;
//		}
//		if (i == 32) cout << 0 << "\n";
//	}
//
//	return 0;
//}