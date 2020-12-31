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
//	sort(a.begin(), a.end(), greater<int>());
//
//	int A = 0, B = 0;
//	for (int i = 0; i < N; i++) {
//		A += a[i] * !(i & 1);
//		B += a[i] *  (i & 1);
//	}
//
//	cout << A - B << "\n";
//
//	return 0;
//}