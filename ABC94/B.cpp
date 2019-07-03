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
//	int N, M, X;
//	cin >> N >> M >> X;
//	
//	vector<int> a(M);
//	for (int i = 0; i < M; i++) cin >> a[i];
//
//	int bnd = lower_bound(a.begin(), a.end(), X) - a.begin();
//
//	cout << min(bnd, M - bnd) << "\n";
//
//	return 0;
//}