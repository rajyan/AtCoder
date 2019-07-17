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
//	vector<int> march(5);
//	string stmp, m = "MARCH";
//	for (int i = 0; i < N; i++) {
//		cin >> stmp;
//		for (int i = 0; i < 5; i++) {
//			if (stmp[0] == m[i]) march[i]++;
//		}
//	}
//
//	lint ans = 0;
//	vector<int> use(5);
//	fill(use.end() - 3, use.end(), 1);
//	do {
//
//		lint tmp = 1;
//		for (int i = 0; i < 5; i++) {
//			if (use[i]) tmp *= march[i];
//		}
//		ans += tmp;
//	} while (next_permutation(use.begin(), use.end()));
//
//	cout << ans << "\n";
//
//	vector<int> a{ 1,0,5,3,2,3 };
//	CuSum<int> ca(a);
//	for (int i = 0; i < a.size(); i++) {
//		cout << ca[i] << "\n";
//	}
//
//	return 0;
//}