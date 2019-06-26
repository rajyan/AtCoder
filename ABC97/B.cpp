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
//lint mypow(lint a, lint n) {
//	lint res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a;
//		a = a * a;
//		n >>= 1;
//	}
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int X;
//	cin >> X;
//
//	vector<int> ans;
//	int tmp;
//	for (int i = 2; i <= 10; i++) {
//		for (int j = 1; j <= 100; j++) {
//			tmp = mypow(j, i);
//			if (tmp <= X) ans.emplace_back(tmp);
//			else break;
//		}
//	}
//
//	sort(ans.begin(), ans.end());
//	cout << ans.back() << "\n";
//
//	return 0;
//}