//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//#define DBG(x) cerr << #x << ": " << x << "\n"
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//
//
//int main() {
//
//	cin.tie(0);
//	
//	int N, cost = 0;
//	cin >> N;
//
//	vector<float> a(N);
//	FOR(i, 0, N) cin >> a[i];
//
//	float ave = 0;
//	for (auto &elem : a) ave += elem / a.size();
//	
//	FOR(i, 0, N) cost += pow((a[i] - roundf(ave)), 2);
//
//	cout << cost;
//
//	return 0;
//}