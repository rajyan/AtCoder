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
//	vector<int> X(N), sX(N);
//	for (int i = 0; i < N; i++) cin >> X[i];
//
//	sX = X;
//	sort(sX.begin(), sX.end());
//	int med = sX[(N - 1) / 2];
//
//	for (int i = 0; i < N; i++) {
//		if (X[i] <= med) cout << sX[(N + 1) / 2] << "\n";
//		else cout << med << "\n";
//	}
//
//	return 0;
//}