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
//	string N;
//	cin >> N;
//
//	int sum = 0, digisum = 0, div = 1;
//	for (int i = N.size() - 1; i >= 0 ; i--) {
//
//		sum += (N[i] - '0') * div;
//		div *= 10;
//		digisum += (N[i] - '0');
//
//	}
//
//	cout << ((sum%digisum) ? "No" : "Yes") << "\n";
//
//	return 0;
//}