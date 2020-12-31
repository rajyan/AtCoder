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
//	map<int, int> mp;
//	for (int i = 0; i < N; i++) {
//		cin >> a[i];
//		mp[a[i]]++;
//	}
//
//	bool flag = false;
//	if (mp.size() == 1 && a[0] == 0) flag = true;
//	if (N % 3 == 0) {
//		if (mp.size() == 2 && mp[0] == N / 3) flag = true;
//		if (mp.size() == 3) {
//			int tmp = 0, num;
//			for (const auto &e : mp) {
//				tmp ^= e.first;
//				num += e.second != N / 3;
//			}
//			if (tmp == 0 && num == 0) flag = true;
//		}
//	}
//
//	if (flag) cout << "Yes\n";
//	else cout << "No\n";
//
//	return 0;
//}