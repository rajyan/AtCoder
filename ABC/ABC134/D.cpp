//#include <cassert>
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
//	vector<int> a(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//
//	vector<int> ans;
//	for (int num = N; num >= 1; num--) {
//
//		if (a[num - 1]) {
//			for (int i = 1; i * i <= num; i++) {
//				if (num % i == 0) {
//					a[i - 1] ^= 1;
//					if (i*i != num) a[num / i - 1] ^= 1;
//				}
//			}
//			ans.emplace_back(num);
//		}
//	}
//
//	cout << ans.size() << "\n";
//	reverse(ans.begin(), ans.end());
//	for (const auto &e : ans) cout << e << " ";
//
//	return 0;
//}