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
//// —ÝÏxor‚Í i 1 (i+2)+1 0 ‚ÌŽüŠú‚Æ‚È‚é
//lint culXOR(lint x) { return ((x + 1) % 2) * x + ((x + 1) % 4) / 2;}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint A, B;
//	cin >> A >> B;
//	cout << (culXOR(A-1) ^ culXOR(B));
//
//	return 0;
//}