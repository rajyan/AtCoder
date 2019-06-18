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
//const int Modulo = 1000000007, INF = 1111111111; 
//using namespace std;
//typedef long long lint;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, X;
//	cin >> N >> X;
//
//	vector<int> L(N);
//	for (int i = 0; i < N; i++) cin >> L[i];
//
//	lint bo = 0,ans = 1;
//	for (int i = 0; i < N; i++) {
//
//		bo += L[i];
//		if (bo <= X) ans++;
//		else break;
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}